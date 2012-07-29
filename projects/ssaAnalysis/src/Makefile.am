include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs

AM_CPPFLAGS = $(ROSE_INCLUDES) -I$(srcdir) \
         -I$(top_srcdir)/src/midend/programAnalysis/staticSingleAssignment \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/analysis \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/cfgUtils \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/variables \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/lattice \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/state \
         -I$(top_srcdir)/src/midend/abstractMemoryObject \
         -I$(top_srcdir)/projects/ssaAnalysis/include

bin_PROGRAMS = ssaAnalysis
#bin_PROGRAMS = ssaAnalysis assertTestDriver

# assertTestDriver_SOURCES = \
#	assertTestDriver.C

ssaAnalysis_SOURCES = \
	sccTestHarness.C

#include_HEADERS = \
#        constantAnalysis.h 
 
noinst_LIBRARIES = libssaanalysis.a

libssaanalysis_a_SOURCES = \
	constantAnalysis.C heapSSA.C heapReachingDef.C HeapSSALattice.C LatticeArith.C heapDefsAndUsesTraversal.C constantAnalysisTransfer.C valueNumbering.C

libssaanalysis_a_includedir = $(includedir)/src \
	 -I$(top_srcdir)/midend/programAnalysis/staticSingleAssignment

# headers to install
libssaanalysis_a_include_HEADERS = \
	../include/constantAnalysis.h \
        ../include/valueNumbering.h \
				../include/defaultLattice.h

LDADD = \
	$(LIBS_WITH_RPATH) \
	$(ROSE_LIBS) \
        libssaanalysis.a

clean-local:
	rm -f *.o a.out rose_*.C
