#include "sccCompileTimeAssertion.h"
#include "Utility.h"

using namespace std;
using namespace scc_private;

bool is_constant_analysis_assertion(SgFunctionCallExp * call) {
    SgFunctionDeclaration * decl = call->getAssociatedFunctionDeclaration();
    SgName name = decl->get_name();
    SgExpressionPtrList call_args = call->get_args()->get_expressions();
    return name.getString() == "assert_constant";
}

void check_constant_analysis_assertion(ConstantAnalysis * scc, SgFunctionCallExp * call) {
    SgExpressionPtrList call_args = call->get_args()->get_expressions();
    ROSE_ASSERT(call_args.size() == 2);
    //check_constant(value, expected)
    //value should have been annotated with a constant
    SgExpression * value = call_args[0];
    //expected is a constant we need to check against
    SgExpression * expected = call_args[1];
    LatticeArith * valueLattice =
            dynamic_cast<LatticeArith*>(scc->getLattice(value));
    if (valueLattice == NULL) {
        printf("ERROR: constant propagation failed: no look-aside information for '%s'\n", value->unparseToString().c_str());
        ROSE_ASSERT(false);
    }
    // For now we want types to be equal to avoid conversion complication
    //TODO 2x how to compare rose types
    ROSE_ASSERT(value->get_type()->unparseToString() == expected->get_type()->unparseToString());
    // Create a dummy lattice from the expected constant expression
    LatticeArith * expectedLattice = buildConstantLattice(expected);
    bool result = (dynamic_cast<BoolLatticeArith *>(*valueLattice == expectedLattice))->getValue();
    if (!result) {
        Sg_File_Info * info = call->get_file_info();
        printf("ERROR: constant propagation failed: '%s' should have value '%s'\n",
                value->unparseToString().c_str(), expected->unparseToString().c_str());
        printf("   Compile-time assertion : %s:%d:%d '%s'\n",
                info->get_filenameString().c_str(), info->get_line(), info->get_col(),
                call->unparseToString().c_str());
        printf("   Variable's lattice     : '%s'\n", valueLattice->str("").c_str());
        printf("   Expected lattice       : '%s'\n", expectedLattice->str("").c_str());
    }
    ROSE_ASSERT(result);
}


void scc_check_ct_assertion(SgProject * project, ConstantAnalysis * scc) {
    SgFilePtrList & ptr_list = project->get_fileList();

    for (SgFilePtrList::iterator iter = ptr_list.begin(); iter!=ptr_list.end(); iter++) {
        SgFile* sageFile = (*iter);
        SgSourceFile * sfile = isSgSourceFile(sageFile);
        ROSE_ASSERT(sfile);
        SgGlobal *root = sfile->get_globalScope();
        SgDeclarationStatementPtrList& declList = root->get_declarations ();

        //For each function body in the scope of the file
        for (SgDeclarationStatementPtrList::iterator p = declList.begin(); p != declList.end(); ++p) {
            SgFunctionDeclaration *func = isSgFunctionDeclaration(*p);
            if (func == NULL)  continue;
            SgFunctionDefinition *defn = func->get_definition();
            if (defn == NULL)  continue;
            //ignore functions in system headers, Can keep them to test robustness
            if (defn->get_file_info()->get_filename()!=sageFile->get_file_info()->get_filename())
                continue;

            SgBasicBlock *body = defn->get_body();
            // Retrieve function calls and filter compile-time assertion
            vector<SgFunctionCallExp*> calls = SageInterface::querySubTree<SgFunctionCallExp>(body, V_SgFunctionCallExp);
            for (vector<SgFunctionCallExp*>::iterator iter = calls.begin(); iter!=calls.end(); iter++) {
                SgFunctionCallExp* call = (*iter);
                if (is_constant_analysis_assertion(call)) {
                    check_constant_analysis_assertion(scc, call);
                }
            }
        }
    }
}
