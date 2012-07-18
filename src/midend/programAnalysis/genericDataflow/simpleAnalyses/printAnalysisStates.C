#include "printAnalysisStates.h"

printAnalysisStates::printAnalysisStates(Analysis* creator, vector<int>& factNames, ab latSide, string indent="")
{
        // vector<int>& latticeNames
        this->creator = creator;
        this->factNames = factNames;
        // this->latticeNames = latticeNames;
        this->latSide = latSide;
        this->indent = indent;
}

void printAnalysisStates::visit(const Function& func, const DataflowNode& n, NodeState& state)
{
        ostringstream funcName; funcName<< "function "<<func.get_name().getString()<<"() node=["<<n.getNode()->class_name()<<" | "<<Dbg::escape(n.getNode()->unparseToString())<<" | "<<n.getIndex()<<"] state="<<(&state)<<" n="<<(&n)<<" sgn="<<n.getNode()<<" creator="<<creator;
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

        ConstLatticePtr lat = (latSide==above) ? state.getLatticeAbove(creator)
                                               : state.getLatticeBelow(creator);
        //  was: if lat != NULL
        if (lat.get())
                Dbg::dbg << indent << "    lattice"<<" = \n"<<lat->str(indent+"    ")<<"\n";
        else
                Dbg::dbg << indent << "    lattice"<<" = None\n";

        //printf("    creator=%p, masterLat.size()=%lu\n", creator, (unsigned long)(masterLat->size()));
        Dbg::exitFunc(funcName.str());
}
