#include "live_dead_analysis.h"
#include "compose.h"

namespace dataflow {
int liveDeadAnalysisDebugLevel=1;

// ################################
// ##### LiveDeadVarsAnalysis #####
// ################################

LiveDeadMemAnalysis::LiveDeadMemAnalysis(funcSideEffectUses* fseu): 
fseu(fseu)
{
	cout << "LiveDeadMemAnalysis::LiveDeadMemAnalysis"<<endl;
}

// Generates the initial lattice state for the given dataflow node, in the given function, with the given NodeState
void LiveDeadMemAnalysis::genInitState(const Function& func, const DataflowNode& n, const NodeState& state,
                                        vector<Lattice*>& initLattices, vector<NodeFact*>& initFacts)
{
  ComposerExpr2MemLocPtr ceml(new ComposerExpr2MemLoc(*getComposer(), (Part&)n, *((ComposedAnalysis*)this)));
    initLattices.push_back(new AbstractObjectSet(ceml));
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
            set<MemLocObjectPtr> funcUsedVars = ldva.fseu->usedVarsInFunc(Function(sgn->getAssociatedFunctionDeclaration()), ldva.dfNode, ldva.nodeState);
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
    AbstractObjectPtr mem(ceml->Expr2Obj(sgn));
    //return boost::dynamic_pointer_cast<AbstractObject>(cpMap->get(ml));
    ROSE_ASSERT(mem);
    assigned.insert(mem);
}
void LiveDeadMemTransfer::assign(AbstractObjectPtr mem)
{
    assigned.insert(mem);
}

// Note that the variable corresponding to this expression is used
void LiveDeadMemTransfer::use(SgExpression *sgn)
{
    AbstractObjectPtr mem = ceml->Expr2Obj(sgn);
    ROSE_ASSERT(mem);
    used.insert(mem);
}
void LiveDeadMemTransfer::use(AbstractObjectPtr mem)
{
    used.insert(mem);
}

void LiveDeadMemTransfer::visit(SgExpression *sgn)
{
    //AbstractMemoryObject::ObjSet* objset = SgExpr2ObjSet(sgn);
    AbstractObjectPtr mem = ceml->Expr2Obj(sgn);
    ROSE_ASSERT(mem);
    
    bool isLive = liveLat->containsMay(mem);
    if(liveDeadAnalysisDebugLevel>=1)
        Dbg::dbg << indent << (isLive ? "Live Expression" : "Dead Expression") <<endl;
    
    if(isLive) {
        LDMAExpressionTransfer helper(*this);
        sgn->accept(helper);
    }

    // Remove the expression itself since it has no uses above itself
    if(!isSgVarRefExp(sgn)) // Liao 4/5/2012, we should not remove SgVarRef since it may have uses above itself
    {
        //if(liveDeadAnalysisDebugLevel>=1) Dbg::dbg << "   Removing "<< mem.str("         ") <<endl;
        //modified = liveLat->remove(mem) || modified;
        assigned.insert(mem); /// ????
    }
}

void LiveDeadMemTransfer::visit(SgInitializedName *sgn) {
    // varID var(sgn);
    // assignedMem.insert(var);
    // // If this is the instance of SgInitializedName that occurrs immediately after the declaration's initializer AND
    // // this declaration has an initializer, add it as a use
    // if(dfNode.getIndex()==1 && sgn->get_initializer())
    //     use(sgn->get_initializer());
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
      Dbg::dbg << indent << "    used=<";
      for(AbstractObjectSet::const_iterator asgn=used.begin(); asgn!=used.end(); ) {
        Dbg::dbg << "        "<<(*asgn)->str("            ");
        asgn++;
        if(asgn==used.end()) Dbg::dbg << ">";
        Dbg::dbg << endl;
      }
      
      
      Dbg::dbg << indent << "    assigned=<";
      for(AbstractObjectSet::const_iterator asgn=assigned.begin(); asgn!=assigned.end(); ) {
        Dbg::dbg << "        "<<(*asgn)->str("            ") << endl;
        asgn++;
        if(asgn==used.end()) Dbg::dbg << ">";
        Dbg::dbg << endl;
      }
      
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
MemLocObjectPtr LiveDeadMemAnalysis::Expr2MemLoc(SgNode* n, const Part& p)
{
  MemLocObjectPtr parent = composer->Expr2MemLoc(n, p, this);
  LDMemLocObjectPtr o(new LDMemLocObject(parent, this, ((DataflowNode&)p)));
  return boost::dynamic_pointer_cast<MemLocObject>(o);
}

/**************************
 ***** LDMemLocObject *****
 **************************/
LDMemLocObject::LDMemLocObject(MemLocObjectPtr parent_, LiveDeadMemAnalysis* ldva, 
                             const DataflowNode& n)
: parent(parent_), ldva(ldva), n(n)
{ 
  iAmLive = isLiveMay(parent, ldva, n, *NodeState::getNodeState(n), "");
}

bool LDMemLocObject::mayEqual(MemLocObjectPtr o) const
{
	LDMemLocObjectPtr that = boost::dynamic_pointer_cast<LDMemLocObject>(o);
	//ROSE_ASSERT(that);
	//bool isThatLive = isLiveMay(that->parent, ldva, n, *NodeState::getNodeState(n), "");
	
	Dbg::dbg << "LDMemLocObject::mayEqual this="<<str("")<<endl;
  Dbg::dbg << "                         o="<<o->str("")<<endl;
  
  if(!that) { return false; }
  Dbg::dbg << "    iAmLive="<<iAmLive<<" that->iAmLive="<<that->iAmLive<<endl;
  // If both objects may be live, use the parents' equality operator
  if(iAmLive && that->iAmLive)
    return parent->mayEqual(that->parent);
  // If both objects are definitely not live, they're counted as being equal
  else if(!iAmLive && that->iAmLive)
     return true;
  // Otherwise, they're in different classes and thus unequal
  else
     return false;
}

bool LDMemLocObject::mustEqual(MemLocObjectPtr o) const
{
	//bool isThatLive = isLiveMay(o, ldva, n, *NodeState::getNodeState(n), "");
  LDMemLocObjectPtr that = boost::dynamic_pointer_cast<LDMemLocObject>(o);
  
  if(!that) { return false; }
  // If both objects may be live, use the parents' equality operator
  if(iAmLive && that->iAmLive)
    return parent->mustEqual(that->parent);
  // If both objects are definitely not live, they're counted as being equal
  else if(!iAmLive && !that->iAmLive)
    return true;
  // Otherwise, they're in different classes and thus unequal
  else
  return false;
}

// pretty print for the object
std::string LDMemLocObject::str(std::string indent) const
{
  ostringstream oss;
  if(iAmLive) oss << "[LDMemLocObject: LIVE: "<<parent->str("    ")<<"]";
  else        oss << "[LDMemLocObject: DEAD]";  
  return oss.str();
}

// Initialize vars to hold all the variables and expressions that are live at DataflowNode n
void getAllLiveMemAt(LiveDeadMemAnalysis* ldva, const DataflowNode& n, const NodeState& state, set<AbstractObjectPtr>& vars, string indent)
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

// Returns the set of variables and expressions that are live at DataflowNode n
set<AbstractObjectPtr> getAllLiveMemAt(LiveDeadMemAnalysis* ldva, const DataflowNode& n, const NodeState& state, string indent)
{
    set<AbstractObjectPtr> vars;
    getAllLiveMemAt(ldva, n, state, vars, indent);
    return vars;
}

// Returns true if the given MemLocObject must be live at the given DataflowNode
bool isLiveMust(MemLocObjectPtr mem, LiveDeadMemAnalysis* ldva, const DataflowNode& n, const NodeState& state, string indent)
{
    AbstractObjectSet* liveLAbove = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeAbove(ldva).begin()));
    if(liveLAbove->containsMust(mem)) return true;
    AbstractObjectSet* liveLBelow = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeBelow(ldva).begin()));
    if(liveLBelow->containsMust(mem)) return true;
    
    return false;
}

// Returns true if the given MemLocObject may be live at the given DataflowNode
bool isLiveMay(MemLocObjectPtr mem, LiveDeadMemAnalysis* ldva, const DataflowNode& n, const NodeState& state, string indent)
{
    Dbg::dbg << "isLiveMay(mem="<<mem->str("")<<")"<<endl;
    
    AbstractObjectSet* liveLAbove = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeAbove(ldva).begin()));
    if(liveLAbove->containsMay(mem)) return true;
    AbstractObjectSet* liveLBelow = dynamic_cast<AbstractObjectSet*>(*(state.getLatticeBelow(ldva).begin()));
    if(liveLBelow->containsMay(mem)) return true;

    return false;
}

}; // namespace dataflow