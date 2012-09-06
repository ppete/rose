#ifndef SAVEDOT_ANALYSIS_H
#define SAVEDOT_ANALYSIS_H

#include "genericDataflowCommon.h"
#include "VirtualCFGIterator.h"
#include "cfgUtils.h"
#include "CallGraphTraverse.h"
#include "analysisCommon.h"
#include "analysis.h"
#include "dataflow.h"
#include "latticeFull.h"


extern int divAnalysisDebugLevel;

namespace dataflow {
/***********************
 *** SaveDotAnalysis ***
 ***********************/
// The SaveDotAnalysis saves its target function's CFG into a file
class SaveDotAnalysis: virtual public IntraProceduralAnalysis
{
        public:
        
        void runAnalysis(const Function& func, NodeState* state);
};


// Saves the CFGs of all the functions into their own files
// Precondition: initAnalysis() has been called
void saveCFGsToDots();

}; // namespace dataflow
#endif
