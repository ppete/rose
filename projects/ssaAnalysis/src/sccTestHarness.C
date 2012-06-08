#include "constantAnalysis.h"
#include "valueNumbering.h"
#include "heapSSA.h"
#include "rose.h"
#include <boost/foreach.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/operators.hpp>
#include <new>
#include "CallGraph.h"
#include <iostream>
 
#define foreach BOOST_FOREACH
using namespace std;
using namespace boost;
using namespace scc_private;
using namespace hssa_private;

int main(int argc, char** argv)
{
  SgProject* project = frontend(argc, argv);
  AstTests::runAllTests(project);
      
  // Initialize the analysis
  initAnalysis(project);
  analysisDebugLevel = 0;
  // Init the debug environment
  Dbg::init("SSA Analysis Test", ".", "index.html");
   
  // Invoke SSA constructor with inter-procedural configure
  // StaticSingleAssignment ssa(project);
  // Invoke Heap SSA constructor with inter-procedural configure
  HeapSSA hssa(project);
  // No inter-procedural analysis for SSA and treat pointer as structure, i.e. p->x as p.x
  hssa.build(false, true);

  // Create Value Numbering
  ValueNumbering vn(project, &hssa);
  ContextInsensitiveInterProceduralDataflow ciIPD1(&vn, getCallGraph());
  // Invoke VN based on call graph traversal     
  ciIPD1.runAnalysis();
 
  // Create SCC by using SSA as input
  ConstantAnalysis scc(project, &hssa);
  // scc.run(false);
  ContextInsensitiveInterProceduralDataflow ciIPD(&scc, getCallGraph());
  // Invoke SCC based on call graph traversal
  ciIPD.runAnalysis();
  scc.dumpLattices();
  
  generatePDF((const SgProject&)(* project)) ;
  AstTests::runAllTests(project);
  return 0;
  // Generate source code from AST and call the vendor's compiler      
  // return backend(project);
}
