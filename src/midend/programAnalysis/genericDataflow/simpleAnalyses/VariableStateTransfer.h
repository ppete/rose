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
  public:
  typedef boost::shared_ptr<LatticeType> lattice_type;

protected:
  bool modified;
  void updateModified(bool latModified) { modified = latModified || modified; }

  const int debugLevel;
  // A pointer to a default example lattice that can be duplicated
  // via defaultLat->copy() to make more instances of this Lattice type.
  lattice_type defaultLat;
  Composer* composer;
  ComposedAnalysis* analysis;
  PartPtr part;

  //FiniteVarsExprsProductLattice* prodLat;
  AbstractObjectMap* prodLat;

  /// Returns a Lattice object that corresponds to the memory location denoted by sgn in the current part
  lattice_type getLattice(SgExpression *sgn) {
    ROSE_ASSERT(sgn);
    MemLocObjectPtrPair p = composer->Expr2MemLoc(sgn, part->inEdgeFromAny(), analysis);
    Dbg::dbg << "VariableStateTransfer::getLattice() p="<<p.str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    
    return getLatticeCommon(sgn, p);
  }
  
  // Returns a Lattice object that corresponds to the memory location denoted by the given operand of sgn 
  // in the current part
  lattice_type getLatticeOperand(SgNode *sgn, SgExpression* operand) {
    ROSE_ASSERT(sgn);
    MemLocObjectPtrPair p = composer->OperandExpr2MemLoc(sgn, operand, part->inEdgeFromAny(), analysis);
    Dbg::dbg << "VariableStateTransfer::getLatticeOperand() p="<<p.str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    
    return getLatticeCommon(operand, p);
  }
  
  // Common code for getLattice() and getLatticeOperand() that returns either the lattice of the expression 
  // or memory MemLocObject depending on the type of sgn.
  lattice_type getLatticeCommon(SgExpression* sgn, MemLocObjectPtrPair p) {
    // For array index expressions, get the lattice associated with the memory location
    // since the only content of this expression is what's stored in memory, just like with SgVarRefExp
    if(isSgPntrArrRefExp(sgn))
      return getLattice(AbstractObjectPtr(p.expr));
    else
      // Return the lattice associated with n's expression since that is likely to be more precise
      // but if it is not available, used the memory object
      return (p.expr ? getLattice(AbstractObjectPtr(p.expr)) : getLattice(AbstractObjectPtr(p.mem)));
  }
  
  lattice_type getLattice(const AbstractObjectPtr& o) 
  {
    typedef typename lattice_type::element_type under_lattice;

    lattice_type l = boost::dynamic_pointer_cast<under_lattice>(prodLat->get(o));
    ROSE_ASSERT(l.get());

    Dbg::dbg << "getLattice(o="<<o->strp(part, "")<<", l="<<l->strp(part, "")<<endl;
    return l;
  }
  
  // Adds prodLat a mapping of the memory location denoted by sgn in the current part to lat. 
  // Returns true if this causes prodLat to change and false otherwise.
  void setLattice(SgNode *sgn, lattice_type lat) {
    ROSE_ASSERT(sgn);
    MemLocObjectPtrPair p = composer->Expr2MemLoc(sgn, part->inEdgeFromAny(), analysis);
    Dbg::dbg << "setLattice() p="<<p.strp(part->inEdgeFromAny(), "&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    
    setLatticeCommon(sgn, p, lat);
  }
  
  // Adds prodLat a mapping of the memory location denoted by the given operand of node sgn in the current part to lat. 
  // Returns true if this causes prodLat to change and false otherwise.
  void setLatticeOperand(SgNode *sgn, SgExpression* operand, LatticePtr lat) {
    ROSE_ASSERT(sgn);
    MemLocObjectPtrPair p = composer->OperandExpr2MemLoc(sgn, operand, part->inEdgeFromAny(), analysis);
    Dbg::dbg << "setLatticeOperand() p="<<p.strp(part->inEdgeFromAny(), "&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
    
    setLatticeCommon(operand, p, lat);
  }
  
  // Common code for getLattice() and getLatticeOperand() that returns either the lattice of the expression 
  // or memory MemLocObject depending on the type of sgn.
  void setLatticeCommon(SgNode* sgn, MemLocObjectPtrPair p, lattice_type lat) {
    // Set both p.expr and p.mem to lat 
    if(p.expr) {
      //LatticePtr latCopy(dynamic_cast<LatticeType*>(lat->copy()));
      setLattice(p.expr, lat);
    }
    if(p.mem) {
      // If we've already used lat to set p.expr, we need to make a copy of it for p.mem
      if(p.expr) {
        lattice_type latCopy(dynamic_cast<LatticeType*>(lat->copy()));
        lat = latCopy;
      }
      setLattice(p.mem, lat);
    }
  }
  
  void setLattice(const AbstractObjectPtr o, lattice_type lat) {
    //Dbg::dbg << "setLattice(o="<<o->strp(part->inEdgeFromAny(), "")<<", lat="<<lat->strp(part->inEdgeFromAny(), "")<<endl;
    updateModified(prodLat->insert(o, lat));
    //Dbg::dbg << "&nbsp;&nbsp;&nbsp;prodLat="<<prodLat->str("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;
  }

  bool getLattices(SgBinaryOp *sgn, lattice_type& arg1Lat, lattice_type& arg2Lat, lattice_type& resLat) {
    arg1Lat = getLatticeOperand(sgn, sgn->get_lhs_operand());
    arg2Lat = getLatticeOperand(sgn, sgn->get_rhs_operand());
    resLat  = getLattice(sgn);

    //Dbg::dbg << "transfer B, resLat="<<resLat<<"\n";

    return (arg1Lat && arg2Lat && resLat);
  }
  
  bool getLattices(SgUnaryOp *sgn, lattice_type& arg1Lat, lattice_type& arg2Lat, lattice_type& resLat) {
    arg1Lat = getLatticeOperand(sgn, sgn->get_operand());
    resLat = getLattice(sgn);

    // Unary Update
    if(isSgMinusMinusOp(sgn) || isSgPlusPlusOp(sgn)) {
      // GB: This will not work for general lattices
      arg2Lat = lattice_type(new LatticeType(1, part->inEdgeFromAny()));
    }
    //Dbg::dbg << "res="<<res.str()<<" arg1="<<arg1.str()<<" arg1Lat="<<arg1Lat<<", arg2Lat="<<arg2Lat<<"\n";
    //Dbg::dbg << "transfer B, resLat="<<resLat<<"\n";

    return (arg1Lat && arg2Lat && resLat);
  }

public:
  VariableStateTransfer(const Function& func, 
                        NodeState& state, std::map<PartEdgePtr, LatticePtr >& dfInfo, 
                        // A pointer to a default example lattice that can be duplicated
                        // via defaultLat->copy() to make more instances of this Lattice type.
                        lattice_type defaultLat_,
                        Composer* composer_, ComposedAnalysis* analysis_, PartPtr part_,
                        const int &debugLevel_) :
    IntraDFTransferVisitor(func, part_, state, dfInfo),
    modified(false),
    debugLevel(debugLevel_),
    defaultLat(defaultLat_),
    composer(composer_), analysis(analysis_), part(part_),
    prodLat(&dfInfo)
  {
    //Dbg::dbg << "transfer A prodLat="<<prodLat<<"="<<prodLat->str("    ")<<"\n";
    // Make sure that all the lattices are initialized
    /*conVariableStateTransferst std::vector<Lattice*>& lattices = prodLat->getLattices();
    for(std::vector<Lattice*>::const_iterator it = lattices.begin(); it!=lattices.end(); it++)
      (dynamic_cast<LatticeType *>(*it))->initialize();*/
    ROSE_ASSERT(dfInfo.size()==1);
    ROSE_ASSERT(dfInfo[NULLPartEdge].size()==1);
    ROSE_ASSERT(*dfInfo[NULLPartEdge].begin());
    ROSE_ASSERT(dynamic_cast<AbstractObjectMap*>(dfInfo[NULLPartEdge].get()));
  }

  void visit(SgAssignOp *sgn)
  {
    lattice_type lhsLat, rhsLat, resLat;
    getLattices(sgn, lhsLat, rhsLat, resLat);

    if(debugLevel>=1) {
      Dbg::dbg << "resLat=\n"; { Dbg::indent ind; Dbg::dbg << resLat->str("")<<"\n";}
      Dbg::dbg << "lhsLat=\n"; { Dbg::indent ind; Dbg::dbg << lhsLat->str("")<<"\n";}
      Dbg::dbg << "rhsLat=\n"; { Dbg::indent ind; Dbg::dbg << rhsLat->str("")<<"\n"; }
    }

    // Copy the lattice of the right-hand-side to both the left-hand-side variable and to the assignment expression itself
    // We only need to copy rhsLat once since it is a fresh object greated by prodLat->get()
    setLattice(sgn, rhsLat);
    setLatticeOperand(sgn, sgn->get_lhs_operand(), rhsLat);
    modified = true;
  }

  void visit(SgAssignInitializer *sgn)
  {
    lattice_type asgnLat = getLatticeOperand(sgn, sgn->get_operand());
    lattice_type resLat  = getLattice(sgn);
    
    if(debugLevel>=1) {
      Dbg::dbg << "asgnLat="; { Dbg::indent ind; Dbg::dbg << asgnLat->str("")<<"\n"; }
      Dbg::dbg << "resLat=";  { Dbg::indent ind; Dbg::dbg << resLat->str("") <<"\n"; }
    }

    setLattice(sgn, asgnLat); modified = true;
  }

  // XXX: Right now, we take the meet of all of the elements of the
  // initializer. This could be enhanced with an improved memory
  // abstraction to treat each element individually.
  void visit(SgAggregateInitializer *sgn)
  {
    lattice_type res = getLattice(sgn);
    SgExpressionPtrList &inits = sgn->get_initializers()->get_expressions();
    if (inits.size() > 0) {
      lattice_type initsCopy(dynamic_cast<LatticeType*>(getLattice(inits[0])->copy()));
      //res->copy(getLattice(inits[0]).get());
      modified = true;
      for (size_t i = 1; i < inits.size(); ++i)
        updateModified(initsCopy->meetUpdate(getLatticeOperand(sgn, inits[i]).get()));
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
    Dbg::indent ind;
    lattice_type initLat;
    if(initName->get_initializer()) {
      initLat = getLatticeOperand(initName, initName->get_initializer());
      Dbg::dbg << "initializer exists: "<<initLat->str("    ")<<"\n";
    // If there was no initializer, var's lattice is set to the default lattice 
    } else {
        LatticePtr initLat2(defaultLat->copy());
      initLat = boost::dynamic_pointer_cast<LatticeType>(initLat2);
      initLat->setToEmpty();
      Dbg::dbg << "no initializer: "<<initLat->str("    ")<<"\n";
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
    lattice_type lhs, rhs, res;
    getLattices(sgn, lhs, rhs, res);
    lattice_type lhsCopy(lhs->copy());
    //res->copy(lhs.get());
    updateModified(lhsCopy->meetUpdate(rhs.get()));
    //res->meetUpdate(rhs.get());
    setLattice(sgn, lhsCopy);
    //setLattice(sgn, res);
    modified = true;
  }

  void visit(SgPntrArrRefExp *sgn) {
    Dbg::dbg << "<b>VariableStrateTransfer::visit(SgPntrArrRefExp *sgn)" << endl;
    Dbg::indent ind;
    // Copy data from the memory location identified by the array index expression to the
    // expression object of the SgPntrArrRefExp.
    MemLocObjectPtrPair p = composer->Expr2MemLoc(sgn, part->inEdgeFromAny(), analysis);
    lattice_type dataLat;
    // If this is a top-level array access expression
    if(isSgPntrArrRefExp (sgn) &&
       (!isSgPntrArrRefExp (sgn->get_parent()) || !isSgPntrArrRefExp (isSgPntrArrRefExp (sgn->get_parent())->get_lhs_operand())))
    {
      assert(p.mem);
      Dbg::dbg << "Getting "<<p.mem->str("")<<endl;
      dataLat = getLattice(AbstractObjectPtr(p.mem));
    } else {
      Dbg::dbg << "Getting "<<p.expr->str("")<<endl;
      dataLat = getLattice(AbstractObjectPtr(p.expr));
    }
    Dbg::dbg << "Setting "<<p.expr->str("")<<endl;
    Dbg::dbg << "to "<<dataLat->str("")<<endl;
    setLattice(AbstractObjectPtr(p.expr), dataLat);
    modified = true;
    Dbg::dbg << "</b>"<<endl;
  }

  void visit(SgCompoundAssignOp *sgn) {
    lattice_type lhs, rhs, res;
    getLattices(sgn, lhs, rhs, res);

    lattice_type lhsCopy(dynamic_cast<LatticeType*>(lhs->copy()));
    updateModified(lhsCopy->meetUpdate(rhs.get()));
    //updateModified(lhs->meetUpdate(rhs.get()));
    setLatticeOperand(sgn, sgn->get_lhs_operand(), lhsCopy);
    //setLattice(sgn->get_lhs_operand(), lhs);

    lattice_type lhsCopy2(dynamic_cast<LatticeType*>(lhs->copy()));
    setLattice(sgn, lhsCopy2);
    //setLattice(sgn, lhs);
    modified = true;
  }

  void visit(SgCommaOpExp *sgn)
  {
    lattice_type lhsLat, rhsLat, resLat;
    getLattices(sgn, lhsLat, rhsLat, resLat);
    
    setLattice(sgn, rhsLat);
    modified = true;
  }

  void visit(SgConditionalExp *sgn)
  {
    lattice_type condLat  = getLatticeOperand(sgn, sgn->get_conditional_exp());
    lattice_type trueLat  = getLatticeOperand(sgn, sgn->get_true_exp());
    lattice_type falseLat = getLatticeOperand(sgn, sgn->get_false_exp());
    lattice_type resLat   = getLattice(sgn);
    
    lattice_type condLatCopy(dynamic_cast<LatticeType*>(condLat->copy()));
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
    setLattice(sgn, getLatticeOperand(sgn, sgn->get_operand()));
    modified = true;
  }
};

}; //namespace dataflow
#endif
