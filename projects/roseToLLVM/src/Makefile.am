include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs

#############################################################################
SUBDIRS 		= rosetollvm

if ROSE_USE_LLVM

#############################################################################
#MAINTAINERCLEANFILES	= Makefile.in

INCLUDES = 	-I$(srcdir)/rosetollvm/include \
			$(ROSE_INCLUDES) \
			$(ROSE_LLVM_INCLUDES) 
#############################################################################

EXTRA_DIST		 =

#############################################################################

noinst_HEADERS		=

bin_PROGRAMS		= rose2llvm

rose2llvm_SOURCES	=		\
	translator.cpp

rose2llvm_CPPFLAGS = -D__STDC_LIMIT_MACROS -D__STDC_CONSTANT_MACROS -Wno-deprecated

#rose2llvm_CFLAGS		= 					\
#	$(ROSE_CPPFLAGS) $(LLVM_CPPFLAGS)

rose2llvm_LDADD		= rosetollvm/librosetollvm.la

endif


#############################################################################
