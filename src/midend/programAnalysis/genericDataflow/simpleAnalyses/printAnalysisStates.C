#include "printAnalysisStates.h"

namespace dataflow {

printAnalysisStates::printAnalysisStates(Analysis* creator, vector<int>& factNames, vector<int>& latticeNames, ab latSide, string indent="")
{
        this->creator = creator;
        this->factNames = factNames;
        this->latticeNames = latticeNames;
        this->latSide = latSide;
        this->indent = indent;
}

void printAnalysisStates::visit(const Function& func, PartPtr p, NodeState& state)
{
        ostringstream funcName; funcName<< "function "<<func.get_name().getString()<<"() node=["<<p.getNode()->class_name()<<" | "<<Dbg::escape(p.getNode()->unparseToString())<<" | "<<p.getIndex()<<"] state="<<(&state)<<" sgn="<<p.getNode()<<" creator="<<creator;
        Dbg::enterFunc(funcName.str());
        //const vector<Lattice*>* masterLat;
        //if(latSide==above) masterLat = &(state.getLatticeAbove(creator));
        //else               masterLat = &(state.getLatticeBelow(creator));
        //printf("    creator=%p, state=%p, masterLat.size()=%lu\n", creator, &state, (unsigned long)(masterLat->size()));
        for(vector<int>::iterator it = factNames.begin(); it!=factNames.end(); it++)
        {
                NodeFact* fact = state.getFact(creator, *it);
                if(fact)
                        Dbg::dbg << indent << "    fact"<<*it<<" = \n"<<fact->str(indent+"    ")<<"\n";
                else
                        Dbg::dbg << indent << "    fact"<<*it<<" = None\n";
        }
        
        for(vector<int>::iterator it = latticeNames.begin(); it!=latticeNames.end(); it++)
        {
                Lattice* lat;
                if(latSide==above) lat = state.getLatticeAbove(creator, *it);
                else               lat = state.getLatticeBelow(creator, *it);
                if(lat)
                        Dbg::dbg << indent << "    lattice"<<*it<<" = \n"<<lat->str(indent+"    ")<<"\n";
                else
                        Dbg::dbg << indent << "    lattice"<<*it<<" = None\n";
        }
        //printf("    creator=%p, masterLat.size()=%lu\n", creator, (unsigned long)(masterLat->size()));
        Dbg::exitFunc(funcName.str());
}
}; // namespace dataflow
