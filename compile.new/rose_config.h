/* rose_config.h.  Generated from rose_config.h.in by configure.  */
/* rose_config.h.in.  Generated from configure.in by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Major version number of backend C++ compiler. */
#define BACKEND_CXX_COMPILER_MAJOR_VERSION_NUMBER 4

/* Minor version number of backend C++ compiler. */
#define BACKEND_CXX_COMPILER_MINOR_VERSION_NUMBER 4

/* Name of backend C++ compiler excluding path (used to select code generation
   options). */
#define BACKEND_CXX_COMPILER_NAME_WITHOUT_PATH "g++"

/* Name of backend C++ compiler including path (may or may not explicit
   include path; used to call backend). */
#define BACKEND_CXX_COMPILER_NAME_WITH_PATH "g++"

/* Name of backend C compiler including path (may or may not explicit include
   path; used to call backend). */
#define BACKEND_C_COMPILER_NAME_WITH_PATH "gcc"

/* Major version number of backend Fortran compiler. */
#define BACKEND_FORTRAN_COMPILER_MAJOR_VERSION_NUMBER 4

/* Minor version number of backend Fortran compiler. */
#define BACKEND_FORTRAN_COMPILER_MINOR_VERSION_NUMBER 4

/* Name of backend Fortran compiler including path (may or may not explicit
   include path; used to call backend). */
#define BACKEND_FORTRAN_COMPILER_NAME_WITH_PATH "gfortran"

/* Name of backend Java compiler including path (may or may not explicit
   include path; used to call backend). */
#define BACKEND_JAVA_COMPILER_NAME_WITH_PATH "javac"

/* Path to the backend python interpreter */
#define BACKEND_PYTHON_INTERPRETER_NAME_WITH_PATH ""

/* Internal EDG specific consistency tests. */
#define CHECKING 1

/* Always defined and used for checking whether global CPP namespace is
   polluted */
#define CONFIG_ROSE 1

/* Include path for backend C++ compiler. */
#define CXX_INCLUDE_STRING {"g++_HEADERS", "g++_HEADERS/hdrs", "g++_HEADERS/hdrs1", "g++_HEADERS/hdrs2", "g++_HEADERS/hdrs4", "/usr/lib/gcc/x86_64-redhat-linux/4.4.6/../../../../include/c++/4.4.6", "/usr/lib/gcc/x86_64-redhat-linux/4.4.6/../../../../include/c++/4.4.6/x86_64-redhat-linux", "/usr/lib/gcc/x86_64-redhat-linux/4.4.6/../../../../include/c++/4.4.6/backward", "/usr/local/include", "/usr/lib/gcc/x86_64-redhat-linux/4.4.6/include",  "/usr/include"}

/* Is this a GNU compiler being used to compile ROSE. */
#define CXX_IS_GNU_COMPILER 1

/* Is this an Intel compiler being used to compile ROSE. */
/* #undef CXX_IS_INTEL_COMPILER */

/* Is this the ROSE Analizer (part of tests to compile ROSE for analysis only
   using ROSE). */
/* #undef CXX_IS_ROSE_ANALYSIS */

/* Is this the ROSE AST File IO (part of tests to compile ROSE for AST File IO
   only using ROSE). */
/* #undef CXX_IS_ROSE_AST_FILE_IO */

/* Is this the ROSE Code Generator (part of tests to compile ROSE and generate
   code using ROSE). */
/* #undef CXX_IS_ROSE_CODE_GENERATION */

/* Is this the ROSE translator (part of tests to compile ROSE using ROSE). */
/* #undef CXX_IS_ROSE_TRANSLATOR */

/* -D options to hand to EDG C++ front-end. */
#define CXX_SPEC_DEF {"-D__GNUG__=4", "-D__GNUC__=4", "-D__GNUC_MINOR__=4", "-D__GNUC_PATCHLEVEL__=6", "--preinclude", "rose_edg_required_macros_and_functions.h"}

/* Include path for backend C compiler. */
#define C_INCLUDE_STRING {"gcc_HEADERS", "gcc_HEADERS/hdrs", "gcc_HEADERS/hdrs1", "/usr/local/include", "/usr/lib/gcc/x86_64-redhat-linux/4.4.6/include",  "/usr/include"}

/* Location (unquoted) of the GCC 4.4's GOMP OpenMP runtime library. */
/* #undef GCC_GOMP_OPENMP_LIB_PATH */

/* Define to 1 if you have the `argz_add' function. */
#define HAVE_ARGZ_ADD 1

/* Define to 1 if you have the `argz_append' function. */
#define HAVE_ARGZ_APPEND 1

/* Define to 1 if you have the `argz_count' function. */
#define HAVE_ARGZ_COUNT 1

/* Define to 1 if you have the `argz_create_sep' function. */
#define HAVE_ARGZ_CREATE_SEP 1

/* Define to 1 if you have the <argz.h> header file. */
#define HAVE_ARGZ_H 1

/* Define to 1 if you have the `argz_insert' function. */
#define HAVE_ARGZ_INSERT 1

/* Define to 1 if you have the `argz_next' function. */
#define HAVE_ARGZ_NEXT 1

/* Define to 1 if you have the `argz_stringify' function. */
#define HAVE_ARGZ_STRINGIFY 1

/* Define to 1 if you have the <asm/ldt.h> header file. */
#define HAVE_ASM_LDT_H 1

/* define if the Boost library is available */
#define HAVE_BOOST /**/

/* define if the Boost::Date_Time library is available */
#define HAVE_BOOST_DATE_TIME /**/

/* define if the Boost::Filesystem library is available */
#define HAVE_BOOST_FILESYSTEM /**/

/* define if the Boost::PROGRAM_OPTIONS library is available */
#define HAVE_BOOST_PROGRAM_OPTIONS /**/

/* define if the Boost::Regex library is available */
#define HAVE_BOOST_REGEX /**/

/* define if the Boost::System library is available */
#define HAVE_BOOST_SYSTEM /**/

/* define if the Boost::Thread library is available */
#define HAVE_BOOST_THREAD /**/

/* define if the Boost::Wave library is available */
#define HAVE_BOOST_WAVE /**/

/* Define to 1 if you have the <byteswap.h> header file. */
#define HAVE_BYTESWAP_H 1

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define to 1 if you have the <c_asm.h> header file. */
/* #undef HAVE_C_ASM_H */

/* Define to 1 if you have the declaration of `cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Whether <dlfcn.h> and -ldl contain dladdr() */
#define HAVE_DLADDR /**/

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the `dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Define to 1 if you have the <elf.h> header file. */
#define HAVE_ELF_H 1

/* Define to 1 if the system has the type `error_t'. */
#define HAVE_ERROR_T 1

/* Use explicit template instantiation. */
#define HAVE_EXPLICIT_TEMPLATE_INSTANTIATION /**/

/* Define to 1 if you have the <ffi.h> header file. */
/* #undef HAVE_FFI_H */

/* Define to 1 if you have the <gcrypt.h> header file. */
/* #undef HAVE_GCRYPT_H */

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `gethrtime' function. */
/* #undef HAVE_GETHRTIME */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getwd' function. */
#define HAVE_GETWD 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define to 1 if hrtime_t is defined in <sys/time.h> */
/* #undef HAVE_HRTIME_T */

/* Define to 1 if you have the <intrinsics.h> header file. */
/* #undef HAVE_INTRINSICS_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <jni.h> header file. */
/* #undef HAVE_JNI_H */

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define if libdlloader will be built on this platform */
#define HAVE_LIBDLLOADER 1

/* Define to 1 if you have the `gcrypt' library (-lgcrypt). */
/* #undef HAVE_LIBGCRYPT */

/* Define to 1 if you have the `gpg-error' library (-lgpg-error). */
/* #undef HAVE_LIBGPG_ERROR */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/dirent.h> header file. */
/* #undef HAVE_LINUX_DIRENT_H */

/* Define to 1 if you have the <linux/types.h> header file. */
#define HAVE_LINUX_TYPES_H 1

/* Define to 1 if you have the <linux/unistd.h> header file. */
#define HAVE_LINUX_UNISTD_H 1

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
#define HAVE_LONG_DOUBLE_WIDER 1

/* Define this if a modern libltdl is already installed */
/* #undef HAVE_LTDL */

/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef HAVE_MACHINE_ENDIAN_H */

/* Define to 1 if you have the `mach_absolute_time' function. */
/* #undef HAVE_MACH_ABSOLUTE_TIME */

/* Define to 1 if you have the <mach/mach_time.h> header file. */
/* #undef HAVE_MACH_MACH_TIME_H */

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
/* #undef HAVE_MACH_O_DYLD_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if MySQL libraries are available */
/* #undef HAVE_MYSQL */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Support for libnuma a NUMA memory allocation library for many-core
   optimizations */
/* #undef HAVE_NUMA_H */

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Include OpenGL (non-glut) support. */
/* #undef HAVE_OPENGL */

/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1

/* Define if libtool can extract symbol lists from object files. */
#define HAVE_PRELOADED_SYMBOLS 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* If available, contains the Python version number currently in use. */
/* #undef HAVE_PYTHON */

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the `read_real_time' function. */
/* #undef HAVE_READ_REAL_TIME */

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Have the SQLITE3 library */
/* #undef HAVE_SQLITE3 */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcoll' function and it is properly defined.
   */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strcspn' function. */
#define HAVE_STRCSPN 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strspn' function. */
#define HAVE_STRSPN 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtod' function. */
#define HAVE_STRTOD 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the <syscall.h> header file. */
#define HAVE_SYSCALL_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysinfo.h> header file. */
#define HAVE_SYS_SYSINFO_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the `time_base_to_time' function. */
/* #undef HAVE_TIME_BASE_TO_TIME */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Defined if the user_desc type is declared in <asm/ldt.h> */
#define HAVE_USER_DESC /**/

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* This value is set to 1 to indicate that the system argz facility works */
#define HAVE_WORKING_ARGZ 1

/* Define if you have the UNICOS _rtc() intrinsic. */
/* #undef HAVE__RTC */

/* Prefix path for use of IDA. */
/* #undef IDA_PRO_PATH */

/* Path to JVM executable */
#define JAVA_JVM_PATH "/usr/java/jdk1.7.0_04/bin/java"

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the system default library search path. */
/* #undef LT_DLSEARCH_PATH */

/* The archive extension */
#define LT_LIBEXT "a"

/* Define to the extension used for runtime loadable modules, say, ".so". */
/* #undef LT_MODULE_EXT */

/* Define to the name of the environment variable that determines the run-time
   module search path. */
/* #undef LT_MODULE_PATH_VAR */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Location (unquoted) of the Omni OpenMP run time library. */
/* #undef OMNI_OPENMP_LIB_PATH */

/* Name of package */
#define PACKAGE "rose"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "ROSE"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ROSE 0.9.5a"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rose"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.9.5a"

/* "Version of Python selected when building ROSE." */
/* #undef PYTHON_VERSION */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* apple Operating System (OS) being used to build ROSE */
/* #undef ROSE_APPLE_OS_VENDOR */

/* Location (unquoted) of Boost specified on configure line. */
#define ROSE_BOOST_PATH "/home/bronevet/apps/boost"

/* Build ROSE to support the Binary Analysis */
#define ROSE_BUILD_BINARY_ANALYSIS_SUPPORT /**/

/* Build ROSE to support the CUDA langauge */
#define ROSE_BUILD_CUDA_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the C++ langauge */
#define ROSE_BUILD_CXX_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the C langauge */
#define ROSE_BUILD_C_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the Fortran langauge */
#define ROSE_BUILD_FORTRAN_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the Java langauge */
#define ROSE_BUILD_JAVA_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the OpenCL langauge */
#define ROSE_BUILD_OPENCL_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the PHP langauge */
#define ROSE_BUILD_PHP_LANGUAGE_SUPPORT /**/

/* Build ROSE projects directory */
#define ROSE_BUILD_PROJECTS_DIRECTORY_SUPPORT /**/

/* Build ROSE to support the Python langauge */
/* #undef ROSE_BUILD_PYTHON_LANGUAGE_SUPPORT */

/* Build ROSE tests directory */
#define ROSE_BUILD_TESTS_DIRECTORY_SUPPORT /**/

/* Build ROSE tutorial directory */
#define ROSE_BUILD_TUTORIAL_DIRECTORY_SUPPORT /**/

/* CentOS Operating System (OS) being used to build ROSE */
#define ROSE_CENTOS_OS_VENDOR 

/* Location of ROSE Compile Tree. */
#define ROSE_COMPILE_TREE_PATH "/home/bronevet/Downloads/rose/compile"

/* Debian Operating System (OS) being used to build ROSE */
/* #undef ROSE_DEBIAN_OS_VENDOR */

/* EDG major version number */
#define ROSE_EDG_MAJOR_VERSION_NUMBER 3

/* EDG minor version number */
#define ROSE_EDG_MINOR_VERSION_NUMBER 3

/* Defined when the Yices SMT-Solver library is present and should be used. */
/* #undef ROSE_HAVE_LIBYICES */

/* Location (unquoted) of the top directory path to which ROSE is installed.
   */
#define ROSE_INSTALLATION_PATH "/home/bronevet/apps/rose"

/* OFP class path for Jave Virtual Machine */
#define ROSE_OFP_CLASSPATH /home/bronevet/Downloads/rose/compile/../src/3rdPartyLibraries/antlr-jars/antlr-3.3-complete.jar:/home/bronevet/Downloads/rose/compile/../src/3rdPartyLibraries/fortran-parser/OpenFortranParser-20111001.jar

/* OFP jar file */
#define ROSE_OFP_JAR_FILE OpenFortranParser-20111001.jar

/* OFP major version number */
#define ROSE_OFP_MAJOR_VERSION_NUMBER 0

/* OFP minor version number */
#define ROSE_OFP_MINOR_VERSION_NUMBER 8

/* OFP patch version number */
#define ROSE_OFP_PATCH_VERSION_NUMBER 3

/* OFP version number */
#define ROSE_OFP_VERSION_NUMBER 20111001

/* RedHat Operating System (OS) being used to build ROSE */
/* #undef ROSE_REDHAT_OS_VENDOR */

/* Git SCM version information for ROSE: commit identifier. */
#define ROSE_SCM_VERSION_ID "c8d5530fa602e005c81a1092b92cb0a0c582aec7"

/* Git SCM version information for ROSE: commit date (Unix timestamp). */
#define ROSE_SCM_VERSION_UNIX_DATE 1343427736

/* Variable like LD_LIBRARY_PATH */
#define ROSE_SHLIBPATH_VAR "LD_LIBRARY_PATH"

/* Location of ROSE Source Tree. */
#define ROSE_SOURCE_TREE_PATH "/home/bronevet/Downloads/rose"

/* Define to __thread keyword for thread local storage. */
#define ROSE_THREAD_LOCAL_STORAGE __thread

/* Ubuntu Operating System (OS) being used to build ROSE */
/* #undef ROSE_UBUNTU_OS_VENDOR */

/* Whether to use Candl support or not within ROSE */
/* #undef ROSE_USE_CANDL */

/* Use Clang for parsing C/C++-like languages */
/* #undef ROSE_USE_CLANG_FRONTEND */

/* Whether to use Cloog support or not within ROSE */
/* #undef ROSE_USE_CLOOG */

/* Whether to use CUDA language support or not within ROSE */
/* #undef ROSE_USE_CUDA_SUPPORT */

/* Whether to use the new EDG version 4.x */
/* #undef ROSE_USE_EDG_VERSION_4 */

/* Whether to use the new EDG version 4.3 */
/* #undef ROSE_USE_EDG_VERSION_4_3 */

/* Defined if Ether from Georgia Tech is available. */
/* #undef ROSE_USE_ETHER */

/* Whether to use the new interface to EDG */
/* #undef ROSE_USE_NEW_EDG_INTERFACE */

/* Whether to use OpenCL language support or not within ROSE */
/* #undef ROSE_USE_OPENCL_SUPPORT */

/* Whether to use Parma Polyhedral Library (PPL) support or not within ROSE */
/* #undef ROSE_USE_PPL */

/* Whether to use ScopLib support or not within ROSE */
/* #undef ROSE_USE_SCOPLIB */

/* Whether to use smaller (but more numerous) generated files for the ROSE IR
   */
/* #undef ROSE_USE_SMALLER_GENERATED_FILES */

/* Support for an advanced uniform warning level for ROSE development */
/* #undef ROSE_USE_UNIFORM_ADVANCED_WARNINGS_SUPPORT */

/* Use Valgrind calls in ROSE */
/* #undef ROSE_USE_VALGRIND */

/* Whether to use the new graph IR nodes compatability option with older API
   */
/* #undef ROSE_USING_GRAPH_IR_NODES_FOR_BACKWARD_COMPATABILITY */

/* Simple preprocessor as default in ROSE */
#define ROSE_WAVE_DEFAULT false

/* Location (unquoted) of Wave specified on configure line. */
#define ROSE_WAVE_PATH "/home/bronevet/apps/boost/wave"

/* Absolute name of yices executable, or the empty string. */
/* #undef ROSE_YICES */

/* Control use of SAGE within EDG. */
#define SAGE_TRANSFORM 1

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long double', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE 16

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Mark that GFORTRAN is available */
#define USE_GFORTRAN_IN_ROSE 1

/* Link-time support for Insure. */
/* #undef USE_INSURE */

/* Support for Purify */
/* #undef USE_PURIFY */

/* Support for Purify API (Compiling with the Purify library). */
/* #undef USE_PURIFY_API */

/* Link-time support for Purify. */
/* #undef USE_PURIFY_LINKER */

/* Controls use of ROSE support for bddbddb (Binary decision diagrams (BDD)
   BDD-Based Deductive DataBase. */
/* #undef USE_ROSE_BDDBDDB_SUPPORT */

/* Controls use of BOOST WAVE support in ROSE. */
#define USE_ROSE_BOOST_WAVE_SUPPORT 1

/* Controls use of ROSE support for Dwarf (libdwarf) library. */
/* #undef USE_ROSE_DWARF_SUPPORT */

/* Controls if EDG Union/Struct debugging support is to be used. */
#define USE_ROSE_EDG_DEBUGGING_SUPPORT 1

/* Use of GCC OpenMP in ROSE. */
/* #undef USE_ROSE_GCC_OMP */

/* Controls use of ROSE support for GLUT library. */
/* #undef USE_ROSE_GLUT_SUPPORT */

/* Controls use of ROSE support for OpenMP Translator targeting GCC 4.4 's
   GOMP OpenMP RTL. */
/* #undef USE_ROSE_GOMP_OPENMP_LIBRARY */

/* Controls use of IDA support for disassembling. */
/* #undef USE_ROSE_IDA_SUPPORT */

/* Controls use of ROSE support for Intel Pin Dynamic Instrumentation Package.
   */
/* #undef USE_ROSE_INTEL_PIN_SUPPORT */

/* Controls use of ROSE support for Java. */
#define USE_ROSE_INTERNAL_JAVA_SUPPORT /**/

/* Controls use of ROSE support for Java. */
#define USE_ROSE_JAVA_SUPPORT /**/

/* Controls use of ROSE support for LLVM. */
/* #undef USE_ROSE_LLVM_SUPPORT */

/* Controls use of ROSE support for Maple Symbolic Algebra Package. */
/* #undef USE_ROSE_MAPLE_SUPPORT */

/* Controls use of ROSE support for OpenMP Translator targeting Omni RTL. */
/* #undef USE_ROSE_OMNI_OPENMP_SUPPORT */

/* Controls use of ROSE support for PHP. */
/* #undef USE_ROSE_PHP_SUPPORT */

/* Controls use of ROSE support for Python. */
/* #undef USE_ROSE_PYTHON_SUPPORT */

/* Controls use of ROSE support for RTED library. */
/* #undef USE_ROSE_RTED_SUPPORT */

/* Controls use of ROSE support for internal Satisfiability (SAT) Solver. */
/* #undef USE_ROSE_SAT_SUPPORT */

/* Controls use of ROSE support for SSL (libssl -- MD5) library (incompatable
   with Java, so disables Fortran support). */
/* #undef USE_ROSE_SSL_SUPPORT */

/* Controls use of ROSE support in Backstroke project for ROSS Discrete Event
   Simulator. */
/* #undef USE_ROSE_SUPPORT_BACKSTROKE_ROSS */

/* Controls use of ROSE support in Backstroke project for SPEEDES Discrete
   Event Simulator. */
/* #undef USE_ROSE_SUPPORT_BACKSTROKE_SPEEDES */

/* Wine provides access to Windows header files for analysis of windows
   applications under Linux. */
/* #undef USE_ROSE_WINDOWS_ANALYSIS_SUPPORT */

/* Support for PURIFY debugging software. */
/* #undef USING_PURIFY */

/* Version number of package */
#define VERSION "0.9.5a"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif

/* Define so that glibc/gnulib argp.h does not typedef error_t. */
/* #undef __error_t_defined */

/* Define to a type to use for `error_t' if it is not otherwise available. */
/* #undef error_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
