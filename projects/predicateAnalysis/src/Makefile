# Example Makefile for ROSE users
# This makefile is provided as an example of how to use ROSE when ROSE is
# installed (using "make install").  This makefile is tested as part of the
# "make distcheck" rule (run as part of tests before any CVS checkin).
# The test of this makefile can also be run by using the "make installcheck"
# rule (run as part of "make distcheck").


# Location of include directory after "make install"

# change the directory to reflect the actual structure of
#   source and build dir
ROSE_SOURCE_DIR=$(HOME)/sources/ROSE
ROSE_BUILD_DIR=$(HOME)/build/rose-bin

# -isystem avoid warning in header files by declaring them to be system header files
# This allows to effictively use -Wall -Wextra for client code

ROSE_INCLUDES = \
     -isystem $(ROSE_BUILD_DIR)/src/roseSupport \
     -isystem $(ROSE_BUILD_DIR)/src/frontend/SageIII \
     -isystem $(ROSE_SOURCE_DIR)/src \
     -isystem $(ROSE_BUILD_DIR) \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/astFixup \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/astPostProcessing \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/astMerge \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/astVisualization \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/astFileIO \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/sageInterface \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/virtualCFG \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/astTokenStream \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/astHiddenTypeAndDeclarationLists \
     -isystem $(ROSE_BUILD_DIR)/src/frontend/SageIII/astFileIO \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/astFromString \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/SageIII/includeDirectivesProcessing \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/OpenFortranParser_SAGE_Connection \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/ECJ_ROSE_Connection \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/PHPFrontend \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/PythonFrontend \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/BinaryDisassembly \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/BinaryFormats \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/BinaryLoader \
     -isystem $(ROSE_SOURCE_DIR)/src/frontend/Disassemblers \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/unparser \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/unparser/formatSupport \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/unparser/languageIndependenceSupport \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/unparser/CxxCodeGeneration \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/unparser/JavaCodeGeneration \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/unparser/FortranCodeGeneration \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/unparser/PHPCodeGeneration \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/unparser/PythonCodeGeneration \
     -isystem $(ROSE_SOURCE_DIR)/src/backend/asmUnparser \
     -isystem $(ROSE_SOURCE_DIR)/src/util \
     -isystem $(ROSE_SOURCE_DIR)/src/util/support \
     -isystem $(ROSE_SOURCE_DIR)/src/util/graphs  \
     -isystem $(ROSE_SOURCE_DIR)/src/util/stringSupport \
     -isystem $(ROSE_SOURCE_DIR)/src/util/commandlineProcessing \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/abstractHandle \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/abstractMemoryObject \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astDiagnostics \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programTransformation/astInlining \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programTransformation/astOutlining  \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astProcessing \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astQuery \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astRewriteMechanism \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astUtil/annotation \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astUtil/astInterface \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astUtil/astSupport \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astUtil/symbolicVal \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/binaryAnalyses \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/binaryAnalyses/dataflowanalyses \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/binaryAnalyses/instructionSemantics \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/genericDataflow \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/genericDataflow/simpleAnalyses \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/genericDataflow/cfgUtils \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/genericDataflow/variables \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/genericDataflow/analysis \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/genericDataflow/lattice \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/genericDataflow/state \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/annotationLanguageParser \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programTransformation/ompLowering \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/CFG \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/staticSingleAssignment \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/ssaUnfilteredCfg \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/systemDependenceGraph \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/systemDependenceGraph \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/CallGraphAnalysis \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/OAWrap \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/bitvectorDataflow \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/VirtualFunctionAnalysis \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/defUseAnalysis \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/distributedMemoryAnalysis \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/dominanceAnalysis \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/graphAnalysis \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/pointerAnal \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/staticInterproceduralSlicing \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/valuePropagation \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programAnalysis/variableRenaming \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programTransformation/partialRedundancyElimination \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programTransformation/finiteDifferencing \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programTransformation/functionCallNormalization \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programTransformation/constantFolding \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/programTransformation/implicitCodeGeneration \
     -isystem $(ROSE_SOURCE_DIR)/src/roseSupport \
     -isystem $(ROSE_SOURCE_DIR)/src/3rdPartyLibraries/MSTL \
     -isystem $(ROSE_SOURCE_DIR)/src/3rdPartyLibraries/libharu-2.1.0/include \
     -isystem $(ROSE_BUILD_DIR)/src/3rdPartyLibraries/libharu-2.1.0/include \
     -isystem $(ROSE_SOURCE_DIR)/src/3rdPartyLibraries/qrose/Framework \
     -isystem $(ROSE_SOURCE_DIR)/src/3rdPartyLibraries/qrose/Widgets  \
     -isystem $(ROSE_SOURCE_DIR)/src/util/graphs \
     -isystem $(ROSE_SOURCE_DIR)/src/midend/astUtil/astInterface \
     -isystem $(ROSE_SOURCE_DIR)/libltdl \
     -isystem $(ROSE_SOURCE_DIR)/projects/ssaAnalysis/include

# Location of Boost include directory
BOOST_CPPFLAGS = -pthread -I/usr/include

CC                    = gcc
CXX                   = g++
CPPFLAGS              =
#CXXCPPFLAGS           = @CXXCPPFLAGS@
CXXFLAGS              = -Wall -Wextra
LDFLAGS               =

# Location of library directory after "make install"
ROSE_LIB_DIR = $(ROSE_BUILD_DIR)/src

ROSE_LIBS = $(ROSE_LIB_DIR)/librose.la
LIBTOOL = $(ROSE_BUILD_DIR)/libtool
SSALIB = $(ROSE_BUILD_DIR)/projects/ssaAnalysis/src/libssaanalysis.a

.PHONY: default all check

# Default make rule to use
default: edgeflow.exe
	@if [ x$${ROSE_IN_BUILD_TREE:+present} = xpresent ]; then echo "ROSE_IN_BUILD_TREE should not be set" >&2; exit 1; fi

all: edgeflow.exe
	@if [ x$${ROSE_IN_BUILD_TREE:+present} = xpresent ]; then echo "ROSE_IN_BUILD_TREE should not be set" >&2; exit 1; fi

# Example suffix rule for more experienced makefile users
# .C.o:
#	g++ -c -isystem $(ROSE_INCLUDE_DIR) -o $@ $(@:.o=.C)

# Compile the exampleTranslator using the file identityTranslator.C
%.lo: %.cpp predflow.h sageplus.h sagePredicate.h ssaPredicate.h vnPredicate.h
	$(LIBTOOL) --tag=CXX --mode=compile $(CXX) $(CXXFLAGS) -ggdb -Wall $(CPPFLAGS) $(ROSE_INCLUDES) $(BOOST_CPPFLAGS) -c -o $@ $<

ssadump.exe: ssadump.lo
	$(LIBTOOL) --tag=CXX --mode=link $(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^ $(ROSE_LIBS) $(SSALIB)

edgeflow.exe: edgeflow.lo sagePredicate.lo sageplus.lo ssaPredicate.lo vnPredicate.lo
	$(LIBTOOL) --tag=CXX --mode=link $(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^ $(ROSE_LIBS) $(SSALIB)

# Rule used by make installcheck to verify correctness of installed libraries
#check:
#	./inductionVariables -c $(ROSE_SOURCE_DIR)/testCode.C
