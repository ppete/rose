include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs

AM_CPPFLAGS = $(ROSE_INCLUDES) -I$(srcdir) \
         -I$(top_srcdir)/src/midend/programAnalysis/staticSingleAssignment \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/analysis \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/cfgUtils \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/variables \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/lattice \
         -I$(top_srcdir)/src/midend/programAnalysis/genericDataflow/state \
         -I$(top_srcdir)/projects/ssaAnalysis/include

bin_PROGRAMS = sccAnalysis

sccAnalysis_SOURCES = \
	sccTestHarness.C sccCompileTimeAssertion.C

#include_HEADERS = \
#        constantAnalysis.h 
 
noinst_LIBRARIES = libsccanalysis.a

libsccanalysis_a_SOURCES = \
	constantAnalysis.C LatticeArith.C

libsccanalysis_a_includedir = $(includedir)/src \
	 -I$(top_srcdir)/midend/programAnalysis/staticSingleAssignment

# headers to install
libsccanalysis_a_include_HEADERS = \
	../include/constantAnalysis.h

LDADD = \
	$(LIBS_WITH_RPATH) \
	$(ROSE_LIBS) \
        libsccanalysis.a

clean-local:
	rm -f *.o a.out rose_*.C
