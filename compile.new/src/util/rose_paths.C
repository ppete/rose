#include <string>

/* Use the same header file to declare these variables as is used to reference them so that they will be globally available (and not local). */
#include "rose_paths.h"

/* These paths will be absolute or relative depending on how the configure script is called (called with an absolute or relative path). */
const std::string ROSE_GFORTRAN_PATH          = "/usr/bin/gfortran";
const std::string ROSE_AUTOMAKE_TOP_SRCDIR    = "/home/bronevet/Downloads/rose";
const std::string ROSE_AUTOMAKE_TOP_BUILDDIR  = "/home/bronevet/Downloads/rose/compile";
const std::string ROSE_AUTOMAKE_PREFIX        = "/home/bronevet/apps/rose";
const std::string ROSE_AUTOMAKE_DATADIR       = "/home/bronevet/apps/rose/share";
const std::string ROSE_AUTOMAKE_BINDIR        = "/home/bronevet/apps/rose/bin";
const std::string ROSE_AUTOMAKE_INCLUDEDIR    = "/home/bronevet/apps/rose/include";
const std::string ROSE_AUTOMAKE_INFODIR       = "/home/bronevet/apps/rose/share/info";
const std::string ROSE_AUTOMAKE_LIBDIR        = "/home/bronevet/apps/rose/lib";
const std::string ROSE_AUTOMAKE_LIBEXECDIR    = "/home/bronevet/apps/rose/libexec";
const std::string ROSE_AUTOMAKE_LOCALSTATEDIR = "/home/bronevet/apps/rose/var";
const std::string ROSE_AUTOMAKE_MANDIR        = "/home/bronevet/apps/rose/share/man";

/* This will always be an absolute path, while paths above are dependent on how the configure script is called (called with an absolute or relative path). */
const std::string ROSE_AUTOMAKE_ABSOLUTE_PATH_TOP_SRCDIR = "/home/bronevet/Downloads/rose";

/* Additional interesting data to provide. */
const std::string ROSE_CONFIGURE_DATE     = "Friday July 27 15:54:01 2012";
const std::string ROSE_AUTOMAKE_BUILD_OS  = "linux-gnu";
const std::string ROSE_AUTOMAKE_BUILD_CPU = "x86_64";
const std::string ROSE_OFP_VERSION_STRING = "20111001";

/* Numeric form of ROSE version -- assuming ROSE version x.y.zL (where */
/* x, y, and z are numbers, and L is a single lowercase letter from a to j), */
/* the numeric value is x * 1000000 + y * 10000 + z * 100 + (L - 'a'). */
const int ROSE_NUMERIC_VERSION = 90500;
