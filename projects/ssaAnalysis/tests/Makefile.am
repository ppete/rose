include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs

SUBDIRS = .

TESTCODES_REQUIRED_TO_PASS = \
     testConstantChecker0.C \
     testConstantChecker1.C \
     testConstantChecker2.C \
     testConstantChecker3.C \
     testConstantChecker4.C

# test that must fail (to test assertion are correctly executed)
TESTCODE_CURRENTLY_FAILING = 

# Automake's testing mechanism (which defines the "make check" rule) requires passing tests.
TESTCODES = \
$(TESTCODES_REQUIRED_TO_PASS)

ALL_TESTCODES = \
$(TESTCODES_REQUIRED_TO_PASS) \
$(TESTCODE_CURRENTLY_FAILING)

TESTCODE_INCLUDES = -I$(top_srcdir)/projects/ssaAnalysis/include

PASSING_TEST_Objects = ${TESTCODES:.C=.o}
TEST_Objects = ${ALL_TESTCODES:.C=.o}

sccAnalysis=../src/sccAnalysis

$(TEST_Objects): ../src/sccAnalysis
	@echo "Test SCC compile-time assertions"
	../src/sccAnalysis --scc:ct $(ROSE_FLAGS) $(TESTCODE_INCLUDES) -I$(srcdir) -c $(srcdir)/$(@:.o=.C)

../src/sccAnalysis:
	cd ../src; $(MAKE) sccAnalysis

check-local:
	@echo "Tests for SCC"
	@$(MAKE) $(PASSING_TEST_Objects)
	@echo "************************************************************************************************"
	@echo "****** ROSE/projects/ssaAnalysis/tests: make check rule complete (terminated normally) ******"
	@echo "************************************************************************************************"

clean-local:
	rm -f *.o rose_*.[cC] *.dot
