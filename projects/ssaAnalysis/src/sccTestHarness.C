#include <boost/foreach.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/operators.hpp>
#include <new>
#include <iostream>
#include "rose.h"
#include "CallGraph.h"
#include "constantAnalysis.h"
#include "sccCompileTimeAssertion.h"

#define foreach BOOST_FOREACH
using namespace std;
using namespace boost;
using namespace scc_private;

bool check_ct_assertion = false;
bool generate_rt_assertion = false;
bool scc_dump_lattices = false;

void check_options(Rose_STL_Container<string> args) {
    check_ct_assertion = CommandlineProcessing::isOption (args, "--", "scc:ct", true);
    generate_rt_assertion = CommandlineProcessing::isOption (args, "--", "scc:rt", true);
    scc_private::scc_debug = CommandlineProcessing::isOption (args, "--", "scc:debug", true);
    scc_dump_lattices = CommandlineProcessing::isOption (args, "--", "scc:dump", true);
}

int main(int argc, char** argv) {
  // check option
  Rose_STL_Container<string> args =
          CommandlineProcessing::generateArgListFromArgcArgv (argc,argv);
  check_options(args);

  SgProject* project = frontend(argc, argv);
  AstTests::runAllTests(project);

  ConstantAnalysis * scc = runScc(project);

  if (scc_dump_lattices) {
      scc->dumpLattices();
  }

  // check compile-time assertion
  if (check_ct_assertion) {
      scc_check_ct_assertion(project, scc);
  }

  // insert runtime assertion to check scc
  if(generate_rt_assertion) {

  }

  generatePDF((const SgProject&)(* project)) ;
  AstTests::runAllTests(project);
  return 0;
  // Generate source code from AST and call the vendor's compiler      
  // return backend(project);
}
