#ifndef _VARIABLESTATETRANSFER_H
#define _VARIABLESTATETRANSFER_H

#include "dataflow.h"
#include "latticeFull.h"
#include "abstract_object_map.h"
#include "compose.h"
#include <vector>

namespace dataflow {

template <class LatticeType>
class VariableStateTransfer : public IntraDFTransferVisitor
{
  typedef boost::shared_ptr<LatticeType> LatticePtr;
protected:
  bool modified;
  void updateModified(bool latModified) { modified = latModified || modified; }

  const int debugLevel;
  // A pointer to a default example lattice that can be duplicated
  // via defaultLat->copy() to make more instances of this Lattice type.
  LatticePtr defaultLat;
  Composer* composer;
  ComposedAnalysis* analysis;
  PartPtr part;

  //FiniteVarsExprsProductLattice* prodLat;
  AbstractObjectMap* prodLat;

  LatticePtr getLattice(SgExpression *sgn) {
    ROSE_ASSERT(sgn);
    MemLocObjectPtrPair p = composer->Expr2MemLoc(sgn, part, analysis);
    Dbg::dbg << "VariableStateTransfer::getLattice() p="<<p.str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    
    // For array index expressions, get the lattice associated with the memory location
    // since the only content of this expression is what's stored in memory, just like with SgVarRefExp
    if(isSgPntrArrRefExp(sgn))
      return getLattice(AbstractObjectPtr(p.expr));
    else
      // Return the lattice associated with n's expression since that is likely to be more precise
      // but if it is not available, used the memory object
      return (p.expr ? getLattice(AbstractObjectPtr(p.expr)) : getLattice(AbstractObjectPtr(p.mem)));
  }
  LatticePtr getLattice(const AbstractObjectPtr o) {
    LatticePtr l = boost::dynamic_pointer_cast<LatticeType>(prodLat->get(o));
    Dbg::dbg << "getLattice(o="<<o->strp(part, "")<<", l="<<l->strp(part, "")<<endl;
    ROSE_ASSERT(l);
    return l;
  }
  
  // Adds the sgn->lat mapping to prodLat. Returns true if this causes prodLat to change
  // and false otherwise.
  void setLattice(SgNode *sgn, LatticePtr lat) {
    ROSE_ASSERT(sgn);
    MemLocObjectPtrPair p = composer->Expr2MemLoc(sgn, part, analysis);
    Dbg::dbg << "setLattice() p="<<p.str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    Dbg::dbg << "setLattice() p="<<p.strp(part, "&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    
    // Set both p.expr and p.mem to lat 
    if(p.expr) {
      //LatticePtr latCopy(dynamic_cast<LatticeType*>(lat->copy()));
      setLattice(p.expr, lat);
    }
    if(p.mem) {
      // If we've already used lat to set p.expr, we need to make a copy of it for p.mem
      if(p.expr) {
        LatticePtr latCopy(dynamic_cast<LatticeType*>(lat->copy()));
        lat = latCopy;
      }
      setLattice(p.mem, lat);
    }
  }
  void setLattice(const AbstractObjectPtr o, LatticePtr lat) {
    //Dbg::dbg << "setLattice(o="<<o->strp(part, "")<<", lat="<<lat->strp(part, "")<<endl;
    updateModified(prodLat->insert(o, lat));
    //Dbg::dbg << "&nbsp;&nbsp;&nbsp;prodLat="<<prodLat->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
  }

  bool getLattices(SgBinaryOp *sgn, LatticePtr &arg1Lat, LatticePtr &arg2Lat, LatticePtr &resLat) {
    arg1Lat = getLattice(sgn->get_lhs_operand());
    arg2Lat = getLattice(sgn->get_rhs_operand());
    resLat  = getLattice(sgn);

    //Dbg::dbg << "transfer B, resLat="<<resLat<<"\n";

    return (arg1Lat && arg2Lat && resLat);
  }
  
  bool getLattices(SgUnaryOp *sgn, LatticePtr &arg1Lat, LatticePtr &arg2Lat, LatticePtr &resLat) {
    arg1Lat = getLattice(sgn->get_operand());
    resLat = getLattice(sgn);

    // Unary Update
    if(isSgMinusMinusOp(sgn) || isSgPlusPlusOp(sgn)) {
      // GB: This will not work for general lattices
      arg2Lat = (LatticePtr)(new LatticeType(1, part));
    }
    //Dbg::dbg << "res="<<res.str()<<" arg1="<<arg1.str()<<" arg1Lat="<<arg1Lat<<", arg2Lat="<<arg2Lat<<"\n";
    //Dbg::dbg << "transfer B, resLat="<<resLat<<"\n";
    
    return (arg1Lat && arg2Lat && resLat);
  }

public:
  VariableStateTransfer(const Function& func, 
                        NodeState& state, const std::vector<Lattice*>& dfInfo, 
                        // A pointer to a default example lattice that can be duplicated
                        // via defaultLat->copy() to make more instances of this Lattice type.
                        LatticePtr defaultLat_,
                        Composer* composer_, ComposedAnalysis* analysis_, PartPtr part_, 
                        const int &debugLevel_) : 
    IntraDFTransferVisitor(func, part_, state, dfInfo), 
    modified(false),
    debugLevel(debugLevel_), 
    defaultLat(defaultLat_),
    composer(composer_), analysis(analysis_), part(part_),
    prodLat(dynamic_cast<AbstractObjectMap*>(*(dfInfo.begin())))
  {
    //Dbg::dbg << "transfer A prodLat="<<prodLat<<"="<<prodLat->str("    ")<<"\n";
    // Make sure that all the lattices are initialized
    /*conVariableStateTransferst std::vector<Lattice*>& lattices = prodLat->getLattices();
    for(std::vector<Lattice*>::const_iterator it = lattices.begin(); it!=lattices.end(); it++)
      (dynamic_cast<LatticeType *>(*it))->initialize();*/
  }

  void visit(SgAssignOp *sgn)
  {
    LatticePtr lhsLat, rhsLat, resLat;
    getLattices(sgn, lhsLat, rhsLat, resLat);
                
    if(debugLevel>=1) {
      Dbg::dbg << "resLat=\n    "<<resLat->str("    ")<<"\n";
      Dbg::dbg << "lhsLat=\n    "<<lhsLat->str("    ")<<"\n";
      Dbg::dbg << "rhsLat=\n    "<<rhsLat->str("    ")<<"\n";
    }
    
    // Copy the lattice of the right-hand-side to both the left-hand-side variable and to the assignment expression itself
    // We only need to copy rhsLat once since it is a fresh object greated by prodLat->get()
    setLattice(sgn, rhsLat);
    setLattice(sgn->get_lhs_operand(), rhsLat);
    modified = true;
  }

  void visit(SgAssignInitializer *sgn)
  {
    LatticePtr asgnLat = getLattice(sgn->get_operand());
    LatticePtr resLat  = getLattice(sgn);
    
    if(debugLevel>=1) {
      Dbg::dbg << "asgnLat="<<asgnLat->str("    ")<<"\n";
      Dbg::dbg << "resLat=" <<resLat->str("    ") <<"\n";
    }

    setLattice(sgn, asgnLat); modified = true;
  }

  // XXX: Right now, we take the meet of all of the elements of the
  // initializer. This could be enhanced with an improved memory
  // abstraction to treat each element individually.
  void visit(SgAggregateInitializer *sgn)
  {
    LatticePtr res = getLattice(sgn);
    SgExpressionPtrList &inits = sgn->get_initializers()->get_expressions();
    if (inits.size() > 0) {
      LatticePtr initsCopy(dynamic_cast<LatticeType*>(getLattice(inits[0])->copy()));
      //res->copy(getLattice(inits[0]).get());
      modified = true;
      for (size_t i = 1; i < inits.size(); ++i)
        updateModified(initsCopy->meetUpdate(getLattice(inits[i]).get()));
        //res->meetUpdate(getLattice(inits[i]).get());
      setLattice(sgn, initsCopy);
    }
    else
        setLattice(sgn, res);
  }

  // XXX: This needs to be handled by an inter-procedural analysis
  void visit(SgConstructorInitializer *sgn)
  { }

  // XXX: I don't even know what this is - Phil
  void visit(SgDesignatedInitializer *sgn)
  { }

  void visit(SgInitializedName *initName)
  {
    Dbg::dbg << "visit(SgInitializedName *initName)"<<endl;
    LatticePtr initLat;
    if(initName->get_initializer()) {
      initLat = getLattice(initName->get_initializer());
      Dbg::dbg << "    initializer exists: "<<initLat->str("    ")<<"\n";
    // If there was no initializer, var's lattice is set to the default lattice 
    } else {
        boost::shared_ptr<Lattice> initLat2(defaultLat->copy());
      initLat = boost::dynamic_pointer_cast<LatticeType>(initLat2);
      initLat->setToEmpty();
      Dbg::dbg << "    no initializer: "<<initLat->str("    ")<<"\n";
    }
    setLattice(initName, initLat);
    modified = true;
  }
  
/*  void visit(SgVariableDeclaration *decl)
  {
    Dbg::dbg << "visit(SgVariableDeclaration *decl)"<<endl;
    for(SgInitializedNamePtrList::iterator it=decl->get_variables().begin(); it!=decl->get_variables().end(); it++)
      visit(*it);
  }*/

  void visit(SgBinaryOp *sgn) {
    LatticePtr lhs, rhs, res;
    getLattices(sgn, lhs, rhs, res);
    LatticePtr lhsCopy(dynamic_cast<LatticeType*>(lhs->copy()));
    //res->copy(lhs.get());
    updateModified(lhsCopy->meetUpdate(rhs.get()));
    //res->meetUpdate(rhs.get());
    setLattice(sgn, lhsCopy);
    //setLattice(sgn, res);
    modified = true;
  }
  
  void visit(SgPntrArrRefExp *sgn) {
    Dbg::dbg << "<b>VariableStrateTransfer::visit(SgPntrArrRefExp *sgn)" << endl;
    // Copy data from the memory location identified by the array index expression to the
    // expression object of the SgPntrArrRefExp.
    MemLocObjectPtrPair p = composer->Expr2MemLoc(sgn, part, analysis);
    assert(p.mem);
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Getting "<<p.mem->str("")<<endl;
    LatticePtr dataLat = getLattice(AbstractObjectPtr(p.mem));
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;Setting "<<p.expr->str("")<<endl;
    Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;to "<<dataLat->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    setLattice(AbstractObjectPtr(p.expr), dataLat);
    modified = true;
    Dbg::dbg << "</b>"<<endl;
  }

  void visit(SgCompoundAssignOp *sgn) {
    LatticePtr lhs, rhs, res;
    getLattices(sgn, lhs, rhs, res);
    
    LatticePtr lhsCopy(dynamic_cast<LatticeType*>(lhs->copy()));
    updateModified(lhsCopy->meetUpdate(rhs.get()));
    //updateModified(lhs->meetUpdate(rhs.get()));
    setLattice(sgn->get_lhs_operand(), lhsCopy);
    //setLattice(sgn->get_lhs_operand(), lhs);
    
    LatticePtr lhsCopy2(dynamic_cast<LatticeType*>(lhs->copy()));
    setLattice(sgn, lhsCopy2);
    //setLattice(sgn, lhs);
    modified = true;
  }

  void visit(SgCommaOpExp *sgn)
  {
    LatticePtr lhsLat, rhsLat, resLat;
    getLattices(sgn, lhsLat, rhsLat, resLat);
    
    setLattice(sgn, rhsLat);
    modified = true;
  }

  void visit(SgConditionalExp *sgn)
  {
    LatticePtr condLat  = getLattice(sgn->get_conditional_exp()),
               trueLat  = getLattice(sgn->get_true_exp()),
               falseLat = getLattice(sgn->get_false_exp()),
               resLat   = getLattice(sgn);
    
    LatticePtr condLatCopy(dynamic_cast<LatticeType*>(condLat->copy()));
    //resLat->copy(condLat.get());
    updateModified(condLatCopy->meetUpdate(trueLat.get()));
    //resLat->meetUpdate(trueLat.get());
    updateModified(condLatCopy->meetUpdate(falseLat.get()));
    //resLat->meetUpdate(falseLat.get());
    setLattice(sgn, condLatCopy);
    //setLattice(sgn, resLat);
    modified = true;
  }

  void visit(SgScopeOp *)
  {
    // Documentation says this is no longer used, so explicitly fail if we see it
    assert(0);
  }

  void visit(SgBitComplementOp *sgn)
  {
    setLattice(sgn, getLattice(sgn->get_operand()));
    modified = true;
  }
};

}; //namespace dataflow
#endif
