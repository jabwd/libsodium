//
//  confdefs.h
//  Sodium
//
//  Created by Mark Douma on 7/22/2016.
//  Copyright © 2016 Mark Douma. All rights reserved.
//

#ifndef confdefs_h
#define confdefs_h

#import <TargetConditionals.h>


#define PACKAGE_NAME "libsodium"
#define PACKAGE_TARNAME "libsodium"
#define PACKAGE_VERSION "1.0.11"
#define PACKAGE_STRING "libsodium 1.0.11"
#define PACKAGE_BUGREPORT "https://github.com/jedisct1/libsodium/issues"
#define PACKAGE_URL "https://github.com/jedisct1/libsodium"
#define PACKAGE "libsodium"
#define VERSION "1.0.11"
#define LT_OBJDIR ".libs/"


/* iOS Simulator 32 bit (i386) */
#if TARGET_OS_SIMULATOR && TARGET_CPU_X86

#warning iOS Simulator 32 bit (i386)
#pragma mark - iOS Simulator 32 bit (i386)

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


/* iOS Simulator 64 bit (x86_64) */
#elif TARGET_OS_SIMULATOR && TARGET_CPU_X86_64

#warning iOS Simulator 64 bit (x86_64)
#pragma mark - iOS Simulator 64 bit (x86_64)

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
#define HAVE_AMD64_ASM 1
#define HAVE_AVX_ASM 1
#define HAVE_TI_MODE 1
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


/* iOS 32 bit (arm) */
#elif TARGET_OS_IOS && TARGET_CPU_ARM

#warning iOS 32 bit (armv7)
#pragma mark - iOS 32 bit (armv7)

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
#define HAVE_SYS_MMAN_H 1
#define NATIVE_LITTLE_ENDIAN 1
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


/* iOS 64 bit (arm64) */
#elif TARGET_OS_IOS && TARGET_CPU_ARM64

#warning iOS 64 bit (arm64)
#pragma mark - iOS 64 bit (arm64)

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
#define HAVE_SYS_MMAN_H 1
#define NATIVE_LITTLE_ENDIAN 1
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


#else

#error config not right!

#endif


#endif /* confdefs_h */
