
#include <iostream>

#include "rose.h"
#include "staticSingleAssignment.h"
#include "heapSSA.h"

#include "sageplus.h"

typedef StaticSingleAssignment::VarName VarName;
typedef ReachingDef::ReachingDefPtr     ReachingDefPtr;
typedef std::set<ReachingDefPtr>        SSARep;
typedef std::set<VarName>               SSAData;

struct SSARepCreator
{
  typedef StaticSingleAssignment::NodeReachingDefTable NodeReachingDefTable;

  const NodeReachingDefTable& defs;
  SSARep                      res;

  explicit
  SSARepCreator(const NodeReachingDefTable& ssadefs)
  : defs(ssadefs), res()
  {}

  void operator()(const VarName& e)
  {
    NodeReachingDefTable::const_iterator pos = defs.find(e);
    if (pos == defs.end()) return;

    res.insert(pos->second);
  }

  operator SSARep() const { return res; }
};

SSARep validRep(const SSAData& data, const SSARepCreator::NodeReachingDefTable& defs)
{
  return std::for_each(data.begin(), data.end(), SSARepCreator(defs));
}


static inline
std::ostream& operator<<(std::ostream& os, ReachingDef::ReachingDefPtr ptr)
{
  return os << ptr->getDefinitionNode()->unparseToString() << "@" << ptr->getRenamingNumber()
            << (ptr->isPhiFunction() ? "(p)" : "");
}

struct SSAPrinter : public AstSimpleProcessing
{
    explicit
    SSAPrinter(hssa_private::HeapSSA& ssa)
    : myssa(ssa), valid(false)
    {}

    virtual void visit ( SgNode* n ) ;
    virtual void atTraversalEnd() ;

    SSARep varsUsed(SgNode* n)
    {
      return validRep(myssa.getVarsUsedInSubtree(n), myssa.getReachingDefsAtNode_(n));
    }

    hssa_private::HeapSSA& myssa;
    bool                   valid;
};


void SSAPrinter::visit(SgNode* n)
{
  if (isSgGlobal(n)) { valid = true; return; }
  if (!valid) return;

  SSARep ssanames = varsUsed(n);

  std::cout << n->unparseToString() << ": " << sg::foreach(ssanames, sg::prn)
            << std::endl;
}

void SSAPrinter::atTraversalEnd()
{}

int main (int argc, char** argv)
{
  SgProject* project = frontend(argc, argv);
  ROSE_ASSERT (project != NULL);

  initAnalysis(project);

  Dbg::init("Some Test", ".", "index.html");

  hssa_private::HeapSSA hssa(project);
  SSAPrinter            ssadumper(hssa);

  hssa.build(false, true);

  std::cerr << "------------------------------" << std::endl;

  ssadumper.traverseInputFiles(project, preorder);
  return 0 ;
}
