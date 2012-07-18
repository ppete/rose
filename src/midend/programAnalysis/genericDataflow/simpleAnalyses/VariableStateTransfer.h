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
  const Part& part;

  //FiniteVarsExprsProductLattice* prodLat;
  AbstractObjectMap* prodLat;

  LatticePtr getLattice(SgExpression *sgn) {
    ROSE_ASSERT(sgn);
    AbstractObjectPtr o = AbstractObjectPtr(composer->Expr2MemLoc(sgn, part, analysis));
    return getLattice(o);
    // GB: As I understand it, o should be deallocated here
  }
  LatticePtr getLattice(const AbstractObjectPtr o) {
    LatticePtr l = boost::dynamic_pointer_cast<LatticeType>(prodLat->get(o));
    ROSE_ASSERT(l);
    return l;
  }
  
  // Adds the sgn->lat mapping to prodLat. Returns true if this causes prodLat to change
  // and false otherwise.
  bool setLattice(SgNode *sgn, LatticePtr lat) {
    ROSE_ASSERT(sgn);
    MemLocObjectPtr mem = composer->Expr2MemLoc(sgn, part, analysis);
    Dbg::dbg << "setLattice(mem="<<mem->str("")<<", lat="<<lat->str("")<<endl;
    AbstractObjectPtr o = AbstractObjectPtr(mem);
    
    return setLattice(o, lat);
  }
  bool setLattice(const AbstractObjectPtr o, LatticePtr lat) {
    Dbg::dbg << "setLattice(o="<<o->str("")<<", lat="<<lat->str("")<<endl;
    return prodLat->insert(o, lat);
  }


  //! create three lattices from a binary operation: lhs, rhs, and result lattices
  bool getLattices(const SgBinaryOp *sgn, LatticeType* &arg1Lat, LatticeType* &arg2Lat, LatticeType* &resLat) {
    arg1Lat = getLattice(sgn->get_lhs_operand());
    arg2Lat = getLattice(sgn->get_rhs_operand());
    resLat = getLattice(sgn);

    //Dbg::dbg << "transfer B, resLat="<<resLat<<"\n";

    return (arg1Lat && arg2Lat && resLat);
  }
  


  bool getLattices(const SgUnaryOp *sgn,  LatticeType* &arg1Lat, LatticeType* &arg2Lat, LatticeType* &resLat) {
    arg1Lat = getLattice(sgn->get_operand());
    resLat = getLattice(sgn);

    // Unary Update
    if(isSgMinusMinusOp(sgn) || isSgPlusPlusOp(sgn)) {
      // GB: This will not work for general lattices
      arg2Lat = (LatticePtr)(new LatticeType(1));
    }
    //Dbg::dbg << "res="<<res.str()<<" arg1="<<arg1.str()<<" arg1Lat="<<arg1Lat<<", arg2Lat="<<arg2Lat<<"\n";
    //Dbg::dbg << "transfer B, resLat="<<resLat<<"\n";

    return (arg1Lat && arg2Lat && resLat);
  }

public:
  VariableStateTransfer(const Function& func, 
                        const DataflowNode& n, NodeState& state, const std::vector<Lattice*>& dfInfo, 
                        // A pointer to a default example lattice that can be duplicated
                        // via defaultLat->copy() to make more instances of this Lattice type.
                        LatticePtr defaultLat_,
                        Composer* composer_, ComposedAnalysis* analysis_, const Part& part_, 
                        const int &debugLevel_) : 
    IntraDFTransferVisitor(func, n, state, dfInfo), 
    modified(false),
    debugLevel(debugLevel_), 
    defaultLat(defaultLat_),
    composer(composer_), analysis(analysis_), part(part_),
    prodLat(dynamic_cast<AbstractObjectMap*>(*(dfInfo.begin())))
  {
    //Dbg::dbg << "transfer A prodLat="<<prodLat<<"="<<prodLat->str("    ")<<"\n";
    // Make sure that all the lattices are initialized
    /*const std::vector<Lattice*>& lattices = prodLat->getLattices();
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
    LatticePtr rhsLatCopy(dynamic_cast<LatticeType*>(rhsLat->copy()));
    setLattice(sgn->get_lhs_operand(), rhsLatCopy);
    modified = true;
  }

  void visit(SgAssignInitializer *sgn)
  {
    LatticePtr asgnLat = getLattice(sgn->get_operand());
    LatticePtr resLat  = getLattice(sgn);

    if(debugLevel>=1) {
      Dbg::dbg << "asgnLat=    "<<asgnLat->str("    ")<<"\n";
      Dbg::dbg << "resLat=    " <<resLat->str("    ") <<"\n";
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
      res->copy(getLattice(inits[0]).get());
      modified = true;
      for (size_t i = 1; i < inits.size(); ++i)
        res->meetUpdate(getLattice(inits[i]).get());
    }
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
    Dbg::dbg << "visit(SgInitializedName *initName)()\n";
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

  void visit(SgBinaryOp *sgn) {
    LatticePtr lhs, rhs, res;
    getLattices(sgn, lhs, rhs, res);
    res->copy(lhs.get());
    res->meetUpdate(rhs.get());
    setLattice(sgn, res);
      modified = true;
    }

  void visit(SgCompoundAssignOp *sgn) {
    LatticePtr lhs, rhs, res;
    getLattices(sgn, lhs, rhs, res);
    
    updateModified(lhs->meetUpdate(rhs.get()));
    setLattice(sgn->get_lhs_operand(), lhs);
    
    setLattice(sgn, lhs);
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

    resLat->copy(condLat.get());
    resLat->meetUpdate(trueLat.get());
    resLat->meetUpdate(falseLat.get());
    setLattice(sgn, resLat);
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
