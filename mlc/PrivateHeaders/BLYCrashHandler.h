//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLYCrashHandler : NSObject
{
}

+ (void)detectiveHandlerRunning;	// IMP=0x000000010072abd8
+ (void)uninstallHandlerByCrashType:(long long)arg1;	// IMP=0x000000010072aad4
+ (long long)installHandlerWithCrashType:(long long)arg1;	// IMP=0x000000010072a98c
+ (id)sharedHandler;	// IMP=0x000000010072a8d4
- (void)uninstallHandler;	// IMP=0x000000010072ac64
- (_Bool)installHandler;	// IMP=0x000000010072ac5c
- (id)init;	// IMP=0x000000010072a954

@end

