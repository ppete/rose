#include "printAnalysisStates.h"
#include "compose.h"

namespace dataflow {

printAnalysisStates::printAnalysisStates(ComposedAnalysis* creator, vector<int>& factNames, vector<int>& latticeNames, ab latSide) :
UnstructuredPassIntraAnalysis(creator), latticeNames(latticeNames), factNames(factNames), latSide(latSide)
{ }

void printAnalysisStates::visit(const Function& func, PartPtr part, NodeState& state)
{
  ostringstream funcName; funcName<< "function "<<func.get_name().getString()<<"() part=["<<part->str()<<" state="<<(&state)<<" analysis="<<analysis->str();
  Dbg::region reg(1, 1, Dbg::region::topLevel, funcName.str());
  //const vector<Lattice*>* masterLat;
  //if(latSide==above) masterLat = &(state.getLatticeAbove(creator));
  //else         masterLat = &(state.getLatticeBelow(creator));
  //printf("    creator=%p, state=%p, masterLat.size()=%lu\n", creator, &state, (unsigned long)(masterLat->size()));
  for(vector<int>::iterator it = factNames.begin(); it!=factNames.end(); it++)
  {
    NodeFact* fact = state.getFact((Analysis*)analysis, *it);
    if(fact)
      Dbg::dbg << "    fact"<<*it<<" = \n"<<fact->str("    ")<<"\n";
    else
      Dbg::dbg << "    fact"<<*it<<" = None\n";
  }

#if OBSOLETE_CODE
  for(vector<int>::iterator it = latticeNames.begin(); it!=latticeNames.end(); it++)
  {
#endif /* OBSOLETE_CODE */
    ConstLatticePtr lat = (latSide==above ? state.getLatticeAbove((Analysis*)analysis)
                                          : state.getLatticeBelow((Analysis*)analysis));

    if(lat.get())
      Dbg::dbg << "    lattice = \n"<<lat->str("    ")<<"\n";
    else
      Dbg::dbg << "    lattice = None\n";

#if OBSOLETE_CODE
  }
#endif /* OBSOLETE_CODE */
}

} // namespace dataflow
