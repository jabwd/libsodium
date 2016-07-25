This readme describes the procedure to generate the `confdefs.h` prefix header that's intended to be used in the Xcode project for Sodium.framework. Generating this header file is required in order to build the framework with the best performance. While a preconfigured and generated `confdefs.h` file is already included in the git repository, it may need to be updated from time to time.


First run the autogen.sh script, then use the following scripts to generate the output to put into a "confdefs.h" header file to use as a prefix header in the Xcode project:

xcode-ios-simulator32.sh
xcode-ios-simulator64.sh
xcode-ios32.sh
xcode-ios64.sh

The ../builds/xcode/Sodium/confdefsTemplate.h file can be used as a template.

Run each configure script shown above to generate output into the `config.log` file. The tail end of the config.log file will contain output like the following:

## ----------- ##
## confdefs.h. ##
## ----------- ##

/* confdefs.h */
#define PACKAGE_NAME "libsodium"
#define PACKAGE_TARNAME "libsodium"
#define PACKAGE_VERSION "1.0.11"
#define PACKAGE_STRING "libsodium 1.0.11"
#define PACKAGE_BUGREPORT "https://github.com/jedisct1/libsodium/issues"
#define PACKAGE_URL "https://github.com/jedisct1/libsodium"
#define PACKAGE "libsodium"
#define VERSION "1.0.11"
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_PTHREAD 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define __EXTENSIONS__ 1
#define _ALL_SOURCE 1
#define _GNU_SOURCE 1
#define _POSIX_PTHREAD_SEMANTICS 1
#define _TANDEM_SOURCE 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define HAVE_MMINTRIN_H 1
#define HAVE_EMMINTRIN_H 1
#define HAVE_PMMINTRIN_H 1
#define HAVE_TMMINTRIN_H 1
#define HAVE_SMMINTRIN_H 1
#define HAVE_AVXINTRIN_H 1
#define HAVE_AVX2INTRIN_H 1
#define HAVE_WMMINTRIN_H 1
#define HAVE_SYS_MMAN_H 1
#define NATIVE_LITTLE_ENDIAN 1
#define HAVE_CPUID 1
#define ASM_HIDE_SYMBOL .private_extern
#define HAVE_WEAK_SYMBOLS 1
#define CPU_UNALIGNED_ACCESS 1
#define HAVE_ARC4RANDOM 1
#define HAVE_ARC4RANDOM_BUF 1
#define HAVE_MMAP 1
#define HAVE_MLOCK 1
#define HAVE_MADVISE 1
#define HAVE_MPROTECT 1
#define HAVE_NANOSLEEP 1
#define HAVE_POSIX_MEMALIGN 1
#define HAVE_GETPID 1
#define CONFIGURED 1


Copy this output and paste it into the confdefsTemplate.h file for each respective run through the configure scripts.
