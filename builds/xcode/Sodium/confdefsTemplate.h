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



/* iOS Simulator 32 bit (i386) */
#if TARGET_OS_SIMULATOR && TARGET_CPU_X86
#pragma mark - iOS Simulator 32 bit (i386)

/* INSERT tail output of xcode-ios-simulator32.sh here */


/* iOS Simulator 64 bit (x86_64) */
#elif TARGET_OS_SIMULATOR && TARGET_CPU_X86_64
#pragma mark - iOS Simulator 64 bit (x86_64)

/* INSERT tail output of xcode-ios-simulator64.sh here */


/* iOS 32 bit (arm) */
#elif TARGET_OS_IOS && TARGET_CPU_ARM
#pragma mark - iOS 32 bit (armv7)

/* INSERT tail output of xcode-ios32.sh here */


/* iOS 64 bit (arm64) */
#elif TARGET_OS_IOS && TARGET_CPU_ARM64
#pragma mark - iOS 64 bit (arm64)

/* INSERT tail output of xcode-ios64.sh here */


#else
	#error config not right!
#endif


#endif /* confdefs_h */
