#include "live_dead_analysis.h"
#include "compose.h"
#include <boost/make_shared.hpp>

namespace dataflow {
int liveDeadAnalysisDebugLevel=1;

// ###############################
// ##### LiveDeadMemAnalysis #####
// ###############################

LiveDeadMemAnalysis::LiveDeadMemAnalysis(funcSideEffectUses* fseu): 
fseu(fseu)
{
}

// Generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
void LiveDeadMemAnalysis::genInitState(const Function& func, PartPtr p, const NodeState& state,
                                        vector<Lattice*>& initLattices, vector<NodeFact*>& initFacts)
{
  //ComposerExpr2MemLocPtr ceml(new ComposerExpr2MemLoc(*getComposer(), p, *((ComposedAnalysis*)this)));
  initLattices.push_back(new AbstractObjectSet(/*ceml, */p));
}

/// Visits live expressions - helper to LiveDeadVarsTransfer
class LDMAExpressionTransfer : public ROSE_VisitorPatternDefaultBase
{
    LiveDeadMemTransfer &ldva;

public:
    // Should only be called on expressions
    void visit(SgNode *) { assert(0); }
    // Catch up any other expressions that are not yet handled
    void visit(SgExpression *)
    {
        // Function Reference
        // !!! CURRENTLY WE HAVE NO NOTION OF VARIABLES THAT IDENTIFY FUNCTIONS, SO THIS CASE IS EXCLUDED FOR NOW
        /*} else if(isSgFunctionRefExp(sgn)) {*/
        /*} else if(isSgMemberFunctionRefExp(sgn)) {*/

        // !!! DON'T KNOW HOW TO HANDLE THESE
        /*} else if(isSgStatementExpression(sgn)) {(*/

        // Typeid
        // !!! DON'T KNOW WHAT TO DO HERE SINCE THE RETURN VALUE IS A TYPE AND THE ARGUMENT'S VALUE IS NOT USED
        /*} else if(isSgTypeIdOp(sgn)) {*/
        // Var Args
        // !!! DON'T HANDLE THESE RIGHT NOW. WILL HAVE TO IN THE FUTURE
        /*  SgVarArgOp 
            SgExpression *  get_operand_expr () const 
            SgVarArgCopyOp
            SgExpression *  get_lhs_operand () const
            SgExpression *  get_rhs_operand () const  
            SgVarArgEndOp 
            SgExpression *  get_operand_expr 
            SgVarArgStartOneOperandOp 
            SgExpression *  get_operand_expr () const 
            SgVarArgStartOp 
            SgExpression *  get_lhs_operand () const
            SgExpression *  get_rhs_operand () const */
        // !!! WHAT IS THIS?
        /*  SgVariantExpression*/


        // TODO: Make this assert(0), because unhandled expression types are likely to give wrong results
    }
    // Plain assignment: lhs = rhs
    void visit(SgAssignOp *sgn) {
        ldva.assign(sgn->get_lhs_operand());
                                
        // If the lhs of the assignment is a complex expression (i.e. it refers to a variable that may be live) OR
        // if is a known expression that is known to may-be-live
        // THIS CODE ONLY APPLIES TO RHSs THAT ARE SIDE-EFFECT-FREE AND WE DON'T HAVE AN ANALYSIS FOR THAT YET
        /*if(!isVarExpr(sgn->get_lhs_operand()) || 
          (isVarExpr(sgn->get_lhs_operand()) && 
          liveLat->isLiveVar(SgExpr2Var(sgn->get_lhs_operand()))))
          { */
        ldva.use(sgn->get_rhs_operand());
    }
    // Initializer for a variable
    void visit(SgAssignInitializer *sgn) {
      /*Dbg::dbg << "LDMAExpressionTransfer::visit(SgAssignInitializer *sgn)"<<endl;
      Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;sgn=["<<Dbg::escape(sgn->unparseToString())<<" | "<<sgn->class_name()<<"]"<<endl;
      Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;sgn->get_operand()=["<<Dbg::escape(sgn->get_operand()->unparseToString())<<" | "<<sgn->get_operand()->class_name()<<"]"<<endl;*/
        ldva.use(sgn->get_operand());
    }
    // Initializer for a function arguments
    void visit(SgConstructorInitializer *sgn) {
        SgExprListExp* exprList = sgn->get_args();
        for(SgExpressionPtrList::iterator expr=exprList->get_expressions().begin();
            expr!=exprList->get_expressions().end(); expr++)
            ldva.use(*expr);
    }
    // Initializer that captures internal stucture of structs or arrays ("int x[2] = {1,2};", it is the "1,2")
    // NOTE: Should this use abstractMemory interface ?
    void visit(SgAggregateInitializer *sgn) {
        SgExprListExp* exprList = sgn->get_initializers();
        for(SgExpressionPtrList::iterator expr=exprList->get_expressions().begin();
            expr!=exprList->get_expressions().end(); expr++)
            ldva.use(*expr);
    }
    // Designated Initializer 
    void visit(SgDesignatedInitializer *sgn) {
        SgExprListExp* exprList = sgn->get_designatorList();
        for(SgExpressionPtrList::iterator expr=exprList->get_expressions().begin();
            expr!=exprList->get_expressions().end(); expr++)
            ldva.use(*expr);
    }
    // Binary Operations
    void visit(SgBinaryOp *sgn) {
        // Self-update expressions, where the lhs is assigned
        if(isSgCompoundAssignOp(sgn)) {
            ldva.assign(sgn->get_lhs_operand());
        }
        // Both the lhs and rhs are used
        ldva.use(sgn->get_lhs_operand());
        ldva.use(sgn->get_rhs_operand());
    }
    // Unary Operations
    void visit(SgUnaryOp *sgn) {
        // If this is an auto-update operation
        if(isSgMinusMinusOp(sgn) || isSgPlusPlusOp(sgn)) {
            // The argument is defined
            ldva.assign(sgn->get_operand());
        }
        // The argument is used
        ldva.use(sgn->get_operand());
    }
    // Conditionals (condE ? trueE : falseE)
    void visit(SgConditionalExp *sgn) {
        // The arguments are used
        ldva.use(sgn->get_conditional_exp());
        ldva.use(sgn->get_true_exp());
        ldva.use(sgn->get_false_exp());
    }
    // Delete
    void visit(SgDeleteExp *sgn) {
        // Delete expressions return nothing
        // The arguments are used
        ldva.use(sgn->get_variable());
    }
    // New
    void visit(SgNewExp *sgn) {
        // The placement arguments are used
        SgExprListExp* exprList = sgn->get_placement_args();
        // NOTE: placement args are optional
        // exprList could be NULL
        // check for NULL before adding to used set
        if(exprList) {
            for(SgExpressionPtrList::iterator expr=exprList->get_expressions().begin();
                expr!=exprList->get_expressions().end(); expr++)
                ldva.use(*expr);
        }
                                
        // The placement arguments are used
        // check for NULL before adding to used set
        // not sure if this check is required for get_constructor_args()
        exprList = sgn->get_constructor_args()->get_args();
        if(exprList) {
            for(SgExpressionPtrList::iterator expr=exprList->get_expressions().begin();
                expr!=exprList->get_expressions().end(); expr++)
                ldva.use(*expr);
        }
                                
        // The built-in arguments are used (DON'T KNOW WHAT THESE ARE!)
        // check for NULL before adding to used set
        // not sure if this check is required for get_builtin_args()
        if(sgn->get_builtin_args()) {
            ldva.use(sgn->get_builtin_args());
        }
    }
    // Function Calls
    void visit(SgFunctionCallExp *sgn) {
        // !!! CURRENTLY WE HAVE NO NOTION OF VARIABLES THAT IDENTIFY FUNCTIONS, SO THIS CASE IS EXCLUDED FOR NOW
        /*// The expression that identifies the called function is used
          ldva.use(sgn->get_function());*/
                                
        // The function call's arguments are used
        SgExprListExp* exprList = sgn->get_args();
        for(SgExpressionPtrList::iterator expr=exprList->get_expressions().begin();
            expr!=exprList->get_expressions().end(); expr++)
            ldva.use(*expr);
                                
        // If this function has no definition and the user provided a class to provide 
        // the variables that are used by such functions
        if(sgn->getAssociatedFunctionDeclaration() && 
           sgn->getAssociatedFunctionDeclaration()->get_definition()==NULL &&
           ldva.fseu) {
            set<MemLocObjectPtr> funcUsedVars = ldva.fseu->usedVarsInFunc(Function(sgn->getAssociatedFunctionDeclaration()), ldva.part, ldva.nodeState);
            //ldva.use(funcUsedVars.begin(), funcUsedVars.end());
            for(set<MemLocObjectPtr>::iterator used=funcUsedVars.begin(); used!=funcUsedVars.end(); used++)
            ldva.use(*used);
        }
    }
    // Sizeof
    void visit(SgSizeOfOp *sgn) {
        // XXX: The argument is NOT used, but its type is
        // NOTE: get_operand_expr() returns NULL when sizeof(type)
        // FIX: use get_operand_expr() only when sizeof() involves expr
        // ldva.use(sgn->get_operand_expr());
        if(sgn->get_operand_expr()) {
            ldva.use(sgn->get_operand_expr());
        }
    }
    // This
    void visit(SgThisExp *sgn) {
    }
    // Variable Reference (we know this expression is live)
    void visit(SgVarRefExp *sgn) {
//  Liao, 4/5/2012. We cannot decide if a SgVarRefExp is read or written
//    without its context information: for example, in  a = b; both a and b are represented as
//    SgVarRefExp. But a is written and b is read.
//    We should let the ancestor node (like SgAssignOp) decide on the READ/Written of SgVarRefExp.
//    This is already done.   
//    ldva.use(sgn); 
    }

    LDMAExpressionTransfer(LiveDeadMemTransfer &base)
    : ldva(base)
    { }
};

// Note that the variable corresponding to this expression is assigned
void LiveDeadMemTransfer::assign(SgExpression *sgn)
{
  //Dbg::dbg << "LiveDeadMemTransfer::assign(sgn=<"<<sgn->unparseToString()<<" | "<<sgn->class_name()<<">"<<endl;
  MemLocObjectPtrPair p(ceml->Expr2Obj(sgn));
  //return boost::dynamic_pointer_cast<AbstractObject>(cpMap->get(ml));
  if(p.expr) assigned.insert(p.expr);
  if(p.mem)  assigned.insert(p.mem);
}
void LiveDeadMemTransfer::assign(AbstractObjectPtr mem)
{
    assigned.insert(mem);
}

// Note that the variable corresponding to this expression is used
void LiveDeadMemTransfer::use(SgExpression *sgn)
{
  //Dbg::dbg << "LiveDeadMemTransfer::use(sgn=["<<Dbg::escape(sgn->unparseToString())<<" | "<<sgn->class_name()<<"]"<<endl;
  MemLocObjectPtrPair p = ceml->Expr2Obj(sgn);
  if(p.expr) used.insert(p.expr);
  if(p.mem)  used.insert(p.mem);
}
void LiveDeadMemTransfer::use(AbstractObjectPtr mem)
{
    used.insert(mem);
}

void LiveDeadMemTransfer::visit(SgExpression *sgn)
{
  //AbstractMemoryObject::ObjSet* objset = SgExpr2ObjSet(sgn);
  MemLocObjectPtrPair p = ceml->Expr2Obj(sgn);
  /*Dbg::dbg << "LiveDeadMemTransfer::visit(sgn=["<<Dbg::escape(sgn->unparseToString())<<" | "<<sgn->class_name()<<"]"<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;mem="<<p.str("&nbsp;&nbsp;&nbsp;&nbsp;")<<endl;*/
  bool isLive = (p.expr ? liveLat->containsMay(p.expr) : false) ||
                (p.mem  ? liveLat->containsMay(p.mem)  : false);
  /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;isLive="<<isLive<<endl;
  if(liveDeadAnalysisDebugLevel>=1)
    Dbg::dbg << indent << (isLive ? "Live Expression" : "Dead Expression") <<endl;*/

  if(isLive) {
    LDMAExpressionTransfer helper(*this);
    sgn->accept(helper);
  }

  // Remove the expression object itself since it has no uses above itself.
  // Do not remove the memory location object since it has just been used.
  /*if(!isSgVarRefExp(sgn) && !isSgPntrArrRefExp(sgn)) // Liao 4/5/2012, we should not remove SgVarRef or SgPntrArrRefExp since it may have uses above itself
  {
    //if(liveDeadAnalysisDebugLevel>=1) Dbg::dbg << "   Removing "<< mem.str("         ") <<endl;
    //modified = liveLat->remove(mem) || modified;
    if(assigned.insert(mem); /// ????
  }*/
  if(p.expr) assigned.insert(p.expr);
}

void LiveDeadMemTransfer::visit(SgInitializedName *sgn) {
    // If this is the instance of SgInitializedName that occurs immediately after the declaration's initializer AND
    // this declaration has an initializer, add it as a use
    if(sgn->get_initializer())
      use(sgn->get_initializer());
  
  SgVarRefExp* exp = SageBuilder::buildVarRefExp(sgn);
  /*Dbg::dbg << "LiveDeadMemTransfer::visit(SgInitializedName: sgn=["<<Dbg::escape(sgn->unparseToString())<<" | "<<sgn->class_name()<<"]"<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;exp="<<exp<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;exp=["<<Dbg::escape(exp->unparseToString())<<" | "<<exp->class_name()<<"]"<<endl;*/
  MemLocObjectPtrPair p(ceml->Expr2Obj(exp));
  //return boost::dynamic_pointer_cast<AbstractObject>(cpMap->get(ml));
  if(p.expr) assigned.insert(p.expr);
  if(p.mem)  assigned.insert(p.mem);
}

void LiveDeadMemTransfer::visit(SgReturnStmt *sgn) {
    use(sgn->get_expression());
}
void LiveDeadMemTransfer::visit(SgExprStatement *sgn) {
    use(sgn->get_expression());
}
void LiveDeadMemTransfer::visit(SgCaseOptionStmt *sgn) {
    use(sgn->get_key());
    use(sgn->get_key_range_end());
}
void LiveDeadMemTransfer::visit(SgIfStmt *sgn) {
    //Dbg::dbg << "SgIfStmt"<<endl;
    ROSE_ASSERT(isSgExprStatement(sgn->get_conditional()));
    //Dbg::dbg << "    conditional stmt="<<Dbg::escape(isSgExprStatement(sgn->get_conditional())->unparseToString()) << " | " << isSgExprStatement(sgn->get_conditional())->class_name()<<endl;
    //Dbg::dbg << "    conditional expr="<<Dbg::escape(isSgExprStatement(sgn->get_conditional())->get_expression()->unparseToString()) << " | " << isSgExprStatement(sgn->get_conditional())->get_expression()->class_name()<<endl;
    //Dbg::dbg << "    conditional var="<<SgExpr2Var(isSgExprStatement(sgn->get_conditional())->get_expression())<<endl;
    use(isSgExprStatement(sgn->get_conditional())->get_expression());
}
void LiveDeadMemTransfer::visit(SgForStatement *sgn) {
    //Dbg::dbg << "test="<<Dbg::escape(sgn->get_test()->unparseToString()) << " | " << sgn->get_test()->class_name()<<endl;
    //Dbg::dbg << "increment="<<Dbg::escape(sgn->get_increment()->unparseToString()) << " | " << sgn->get_increment()->class_name()<<endl;
                        
    ROSE_ASSERT(isSgExprStatement(sgn->get_test()));
    use(isSgExprStatement(sgn->get_test())->get_expression());
    use(sgn->get_increment());
}
void LiveDeadMemTransfer::visit(SgWhileStmt *sgn) {
    ROSE_ASSERT(isSgExprStatement(sgn->get_condition()));
    //Dbg::dbg << "condition="<<Dbg::escape(sgn->get_condition()->unparseToString()) << " | " << sgn->get_condition()->class_name()<<endl;
    use(isSgExprStatement(sgn->get_condition())->get_expression());
}
void LiveDeadMemTransfer::visit(SgDoWhileStmt *sgn) {
    ROSE_ASSERT(isSgExprStatement(sgn->get_condition()));
    //Dbg::dbg << "condition="<<Dbg::escape(sgn->get_condition()->unparseToString()) << " | " << sgn->get_condition()->class_name()<<endl;
    use(isSgExprStatement(sgn->get_condition())->get_expression());
}

bool LiveDeadMemTransfer::finish()
{
    // First process assignments, then uses since we may assign and use the same variable
    // and in the end we want to first remove it and then re-insert it.
        
    if(liveDeadAnalysisDebugLevel>=1) {
      Dbg::dbg << indent << "    used=[";
      for(AbstractObjectSet::const_iterator asgn=used.begin(); asgn!=used.end(); ) {
        Dbg::dbg << "        "<<(*asgn)->str("            ");
        asgn++;
        if(asgn==used.end()) Dbg::dbg << "]";
        else                 Dbg::dbg << endl;
      }
      Dbg::dbg << endl;
      
      
      Dbg::dbg << indent << "    assigned=[";
      for(AbstractObjectSet::const_iterator asgn=assigned.begin(); asgn!=assigned.end(); ) {
        Dbg::dbg << "        "<<(*asgn)->str("            ") << endl;
        asgn++;
        if(asgn==used.end()) Dbg::dbg << "]";
        else                 Dbg::dbg << endl;
      }
      Dbg::dbg << endl;
      
      Dbg::dbg << indent << "    liveLat="<<liveLat->str(indent)<<endl;
    }

    /* Live-In (node) = use(node) + (Live-Out (node) - Assigned (b))  
     * Live-Out (node) is the lattice after merging ???
     * */         
    // Record for each assigned expression:
    //    If the expression corresponds to a variable, record that the variable is dead.
    //    Otherwise, record that the expression that computes the assigned memory location is live
    for(AbstractObjectSet::const_iterator asgn=assigned.begin(); asgn!=assigned.end(); asgn++) {
        // If the lhs is a variable reference, remove it from live variables unless we also use this variable
        //if(isVarExpr(*asgn)) {
        // if(usedVars.find(SgExpr2Var(*asgn)) != usedVars.end()) // found in use?  Wrong condition!!
        if(!used.containsMay(*asgn)) // if not found in use, then remove it, Liao 4/5/2012
        {
            // if(liveDeadAnalysisDebugLevel>=1) {
            //     Dbg::dbg << indent << "    removing assigned expr <" << (*asgn)->class_name() <<":"<<(*asgn)->unparseToString();
            //     Dbg::dbg << ">"<<endl;
            // }
            modified = liveLat->remove(*asgn) || modified; 
        }
        else 
        {
            modified = liveLat->insert(*asgn) || modified;
            // if(liveDeadAnalysisDebugLevel>=1) {
            //     Dbg::dbg << indent << "    add assigned expr as live <" << (*asgn)->class_name() <<":"<<(*asgn)->unparseToString();
            // }
        }
        //} // end isVarExpr()
    } // end for

    // Record that the used variables are live
    for(AbstractObjectSet::const_iterator var=used.begin(); var!=used.end(); var++)
        modified = liveLat->insert(*var) || modified;
        
    if(liveDeadAnalysisDebugLevel>=1) Dbg::dbg << indent << "    #used="<<used.size()<<" #assigned="<<assigned.size()<<endl;
        
    return modified;
}

/*******************************
 ***** LiveDeadMemAnalysis *****
 *******************************/

// Maps the given SgNode to an implementation of the MemLocObject abstraction.
MemLocObjectPtr LiveDeadMemAnalysis::Expr2MemLoc(SgNode* n, PartPtr part)
{
  MemLocObjectPtrPair p = composer->Expr2MemLoc(n, part, this);
  if(p.mem) return createLDMemLocObjectCategory(p.mem, this, part);
  else      return p.expr;
}

/**************************
 ***** LDMemLocObject *****
 **************************/
LDMemLocObject::LDMemLocObject(MemLocObjectPtr parent_, LiveDeadMemAnalysis* ldva, PartPtr p)
  : parent(parent_), ldva(ldva), part(p)
{
  //Dbg::dbg << "LDMemLocObject::LDMemLocObject(parent="<<(parent ? parent->str("") : "NULL")<<")"<<endl;
  //iAmLive = isLiveMay(parent, ldva, p, *NodeState::getNodeState(part), "");
}

LDMemLocObject::LDMemLocObject(const LDMemLocObject& that) : parent(that.parent), ldva(that.ldva), part(that.part)
{}

bool LDMemLocObject::mayEqualML(MemLocObjectPtr o, PartPtr part) const
{
  LDMemLocObjectPtr that = boost::dynamic_pointer_cast<LDMemLocObject>(o);
  //ROSE_ASSERT(that);
  bool isThisLive = isLiveMay(      parent, ldva, part, *NodeState::getNodeState(part), "");
  bool isThatLive = isLiveMay(that->parent, ldva, part, *NodeState::getNodeState(part), "");

  /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;LDMemLocObject::mayEqual"<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;this (live="<<isThisLive<<")="<<str("")<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;that (live="<<isThatLive<<")="<<o->str("")<<endl;*/
  
  if(!that) { /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;==>FALSE"<<endl;*/ return false; }
  //Dbg::dbg << "    isThisLive="<<isThisLive<<" isThisLive="<<isThisLive<<endl;
  // If both objects may be live, use the parents' equality operator
  if(isThisLive && isThatLive) {
    bool tmp=parent->mayEqual(that->parent, part);
    //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;==>"<<(tmp?"TRUE":"FALSE")<<endl; 
    return tmp;
  // If both objects are definitely not live, they're counted as being equal
  } else if(!isThisLive && !isThatLive) {
     //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;==>TRUE"<<endl; 
     return true;
  // Otherwise, they're in different classes and thus unequal
  } else
  { /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;==>FALSE"<<endl;*/ return false; }
}

bool LDMemLocObject::mustEqualML(MemLocObjectPtr o, PartPtr part) const
{
  //bool isThatLive = isLiveMay(o, ldva, n, *NodeState::getNodeState(n), "");
  LDMemLocObjectPtr that = boost::dynamic_pointer_cast<LDMemLocObject>(o);
  bool isThisLive = isLiveMay(      parent, ldva, part, *NodeState::getNodeState(part), "");
  bool isThatLive = isLiveMay(that->parent, ldva, part, *NodeState::getNodeState(part), "");
	
  /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;LDMemLocObject::mustEqual"<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;this (live="<<isThisLive<<")="<<str("")<<endl;
  Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;that (live="<<isThatLive<<")="<<o->str("")<<endl;/*/
	
  if(!that) { /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;==>FALSE"<<endl;*/ return false; }
  // If both objects may be live, use the parents' equality operator
  if(isThisLive && isThisLive) {
    bool tmp=parent->mustEqual(that->parent, part);
    //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;==>"<<(tmp?"TRUE":"FALSE")<<endl; 
    return tmp;
  // If both objects are definitely not live, they're counted as being equal
  } else if(!isThisLive && !isThatLive) {
    //Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;==>TRUE"<<endl; 
    return true;
  // Otherwise, they're in different classes and thus unequal
  } else
  { /*Dbg::dbg << "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;==>FALSE"<<endl;*/ return false; }
}

// pretty print for the object
std::string LDMemLocObject::str(std::string indent) const
{
  ostringstream oss;
  
  // Choose the string description to use based on the sub-type of this LDMemLocObject
  string name = "";
       if(dynamic_cast<const LDScalar*>(this))         name = "LDScalar";
  else if(dynamic_cast<const LDFunctionMemLoc*>(this)) name = "LDFunctionMemLoc";
  else if(dynamic_cast<const LDArray*>(this))          name = "LDArray";
  else if(dynamic_cast<const LDPointer*>(this))        name = "LDPointer";
  
  oss << "["<<name<<": "<<parent->str("    ")<<"]";
  return oss.str();
}

std::string LDMemLocObject::strp(PartPtr part, std::string indent)
{
  ostringstream oss;
  if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    oss << "[LDMemLocObject: LIVE: "<<parent->str("    ")<<"]";
  else
    oss << "[LDMemLocObject: DEAD]";
  return oss.str();
}

// Allocates a copy of this object and returns a pointer to it
MemLocObjectPtr LDMemLocObject::copyML() const
{
  return boost::make_shared<LDMemLocObject>(*this);
}

// Creates an instance of an LDMemLocObject that belongs to one of the MemLocObject categories
// (LDMemLocObject sub-classes): LDScalar, LDFunctionMemLoc, LDLabeledAggregate, LDArray or LDPointer.
LDMemLocObjectPtr createLDMemLocObjectCategory(MemLocObjectPtr parent, LiveDeadMemAnalysis* ldva, PartPtr p)
{
  if(MemLocObject::isScalar(parent)) {
    //Dbg::dbg << "LiveDeadMemAnalysis::createLDMemLocObjectCategory() Scalar"<<endl;
    return boost::make_shared<LDScalar>(parent, ldva, p);
  } else if(MemLocObject::isFunctionMemLoc(parent)) {
    //Dbg::dbg << "LiveDeadMemAnalysis::createLDMemLocObjectCategory() FunctionMemLoc"<<endl;
    return boost::make_shared<LDFunctionMemLoc>(parent, ldva, p);
  } else if(MemLocObject::isLabeledAggregate(parent)) {
    //Dbg::dbg << "LiveDeadMemAnalysis::createLDMemLocObjectCategory() LabeledAggregate"<<endl;
    return boost::make_shared<LDLabeledAggregate>(parent, ldva, p);
  } else if(MemLocObject::isArray(parent)) {
    //Dbg::dbg << "LiveDeadMemAnalysis::createLDMemLocObjectCategory() Array"<<endl;
    return boost::make_shared<LDArray>(parent, ldva, p);
  } else if(MemLocObject::isPointer(parent)) {
    //Dbg::dbg << "LiveDeadMemAnalysis::createLDMemLocObjectCategory() Pointer"<<endl;
    return boost::make_shared<LDPointer>(parent, ldva, p);
  }
  // Control should not reach here
  assert(0);
}

LDScalar::LDScalar(MemLocObjectPtr parent, LiveDeadMemAnalysis* ldva, PartPtr p)
  : LDMemLocObject(parent, ldva, p)
{ /*Dbg::dbg << "LDScalar::LDScalar(parent="<<(parent ? parent->str("") : "NULL")<<")"<<endl;*/ }

LDFunctionMemLoc::LDFunctionMemLoc(MemLocObjectPtr parent, LiveDeadMemAnalysis* ldva, PartPtr p)
  : LDMemLocObject(parent, ldva, p)
{ /*Dbg::dbg << "LDFunctionMemLoc::LDFunctionMemLoc(parent="<<(parent ? parent->str("") : "NULL")<<")"<<endl;*/ }

LDLabeledAggregate::LDLabeledAggregate(MemLocObjectPtr parent, LiveDeadMemAnalysis* ldva, PartPtr p)
  : LDMemLocObject(parent, ldva, p)
{/* Dbg::dbg << "LDLabeledAggregate::LDLabeledAggregate(parent="<<(parent ? parent->str("") : "NULL")<<")"<<endl;*/ }

size_t LDLabeledAggregate::fieldCount()
{
  //if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    return MemLocObject::isLabeledAggregate(parent)->fieldCount();
  //return 0;
}

std::vector<boost::shared_ptr<LabeledAggregateField> > LDLabeledAggregate::getElements() const
{
  //if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    return MemLocObject::isLabeledAggregate(parent)->getElements();
  /*else {
    std::vector<boost::shared_ptr<LabeledAggregateField> > ret;
    return ret;
  }*/
}

LDArray::LDArray(MemLocObjectPtr parent, LiveDeadMemAnalysis* ldva, PartPtr p)
  : LDMemLocObject(parent, ldva, p)
{ /*Dbg::dbg << "LDArray::LDArray(parent="<<(parent ? parent->str("") : "NULL")<<")"<<endl;*/ }

// Returns a memory object that corresponds to all the elements in the given array
MemLocObjectPtr LDArray::getElements()
{
  //if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    return createLDMemLocObjectCategory(MemLocObject::isArray(parent)->getElements(), ldva, part);
  //else return MemLocObjectPtr();
}

// Returns the memory object that corresponds to the elements described by the given abstract index, 
// which represents one or more indexes within the array
MemLocObjectPtr LDArray::getElements(IndexVectorPtr ai)
{
  //if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    return createLDMemLocObjectCategory(MemLocObject::isArray(parent)->getElements(ai), ldva, part);
  //else return MemLocObjectPtr();
}

// number of dimensions of the array
size_t LDArray::getNumDims()
{
  if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    return MemLocObject::isArray(parent)->getNumDims();
  else return 0;
}

//--- pointer like semantics
// support dereference of array object, similar to the dereference of pointer
// Return the element object: array[0]
MemLocObjectPtr LDArray::getDereference()
{
  //if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    return createLDMemLocObjectCategory(MemLocObject::isArray(parent)->getDereference(), ldva, part);
  //else return MemLocObjectPtr();
}

LDPointer::LDPointer(MemLocObjectPtr parent, LiveDeadMemAnalysis* ldva, PartPtr p)
  : LDMemLocObject(parent, ldva, p)
{ /*Dbg::dbg << "LDPointer::LDPointer(parent="<<(parent ? parent->str("") : "NULL")<<")"<<endl;*/ }

MemLocObjectPtr LDPointer::getDereference()
{
  //if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    return createLDMemLocObjectCategory(MemLocObject::isPointer(parent)->getDereference(), ldva, part);
  //else return MemLocObjectPtr();
}

// Returns true if this pointer refers to the same abstract object as that pointer.
bool LDPointer::equalPoints(const Pointer & that)
{
  //if(isLiveMay(parent, ldva, part, *NodeState::getNodeState(part), "")) 
    return MemLocObject::isPointer(parent)->equalPoints(that);
  //else return false;
}

// Initialize vars to hold all the variables and expressions that are live at PartPtr p
void getAllLiveMemAt(LiveDeadMemAnalysis* ldva, PartPtr part, const NodeState& state, set<AbstractObjectPtr>& vars, string indent)
{
    //Dbg::dbg << "getAllLiveVarsAt() n="<<Dbg::escape(n.getNode()->unparseToString()) << " | " << n.getNode()->class_name()<<" | "<<n.getIndex()<<endl;
    //Dbg::dbg << "    state.getLatticeAbove(ldva): #="<<state.getLatticeAbove(ldva).size()<<endl;
    //for(vector<Lattice*>::const_iterator lat=state.getLatticeAbove(ldva).begin(); lat!=state.getLatticeAbove(ldva).end(); lat++) {
    //      Dbg::dbg <<"        lat="<<*lat<<endl;
    //      Dbg::dbg <<"        lat="<<(*lat)->str("            ")<<endl;
    //}
    //Dbg::dbg << "    state.getLatticeBelow(ldva): #="<<state.getLatticeBelow(ldva).size()<<endl;
    //for(vector<Lattice*>::const_iterator lat=state.getLatticeBelow(ldva).begin(); lat!=state.getLatticeBelow(ldva).end(); lat++) {
    //      Dbg::dbg <<"        lat="<<*lat<<endl;
    //      Dbg::dbg <<"        lat="<<(*lat)->str("            ")<<endl;
    //}
    //Dbg::dbg << "    state = "<<state.str(ldva, "        ")<<endl;
    //Dbg::dbg.flush();
        
    AbstractObjectSet* liveLAbove = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeAbove(ldva).begin()));
    AbstractObjectSet* liveLBelow = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeBelow(ldva).begin()));

    // The set of live vars AT this node is the union of vars that are live above it and below it
    for(AbstractObjectSet::const_iterator var=liveLAbove->begin(); var!=liveLAbove->end(); var++)
        vars.insert(*var);
    for(AbstractObjectSet::const_iterator var=liveLBelow->begin(); var!=liveLBelow->end(); var++)
        vars.insert(*var);
}

// Returns the set of variables and expressions that are live at PartPtr p
set<AbstractObjectPtr> getAllLiveMemAt(LiveDeadMemAnalysis* ldva, PartPtr part, const NodeState& state, string indent)
{
    set<AbstractObjectPtr> vars;
    getAllLiveMemAt(ldva, part, state, vars, indent);
    return vars;
}

// Returns true if the given MemLocObject must be live at the given PartPtr p
bool isLiveMust(MemLocObjectPtr mem, LiveDeadMemAnalysis* ldva, PartPtr part, const NodeState& state, string indent)
{
    AbstractObjectSet* liveLAbove = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeAbove(ldva).begin()));
    AbstractObjectSet* liveLBelow = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeBelow(ldva).begin()));
    
    //Dbg::dbg << "isLiveMust: liveLAbove="<<liveLAbove->str("")<<endl;
    //Dbg::dbg << "isLiveMust: liveLBelow="<<liveLAbove->str("")<<endl;
    
    if(liveLAbove->containsMust(mem)) return true;
    if(liveLBelow->containsMust(mem)) return true;
    
    return false;
}

// Returns true if the given MemLocObject may be live at the given PartPtr p
bool isLiveMay(MemLocObjectPtr mem, LiveDeadMemAnalysis* ldva, PartPtr part, const NodeState& state, string indent)
{
    //Dbg::dbg << "isLiveMay(mem="<<mem->str("")<<")"<<endl;
    
    AbstractObjectSet* liveLAbove = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeAbove(ldva).begin()));
    AbstractObjectSet* liveLBelow = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeBelow(ldva).begin()));
    
    //Dbg::dbg << "isLiveMay: liveLAbove="<<liveLAbove->str("")<<endl;
    //Dbg::dbg << "isLiveMay: liveLBelow="<<liveLAbove->str("")<<endl;
    
    if(liveLAbove->containsMay(mem)) return true;
    if(liveLBelow->containsMay(mem)) return true;

    return false;
}

}; // namespace dataflow