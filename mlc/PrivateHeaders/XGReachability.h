//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XGReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;	// 8 = 0x8
}

+ (id)reachabilityForInternetConnection;	// IMP=0x00000001014ecd18
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;	// IMP=0x00000001014ecc98
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x00000001014ecbe8
- (long long)currentReachabilityStatus;	// IMP=0x00000001014ecf78
- (_Bool)connectionRequired;	// IMP=0x00000001014ecf40
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x00000001014ecf0c
- (void)dealloc;	// IMP=0x00000001014eceac
- (void)stopNotifier;	// IMP=0x00000001014ece68
- (_Bool)startNotifier;	// IMP=0x00000001014ecd78

@end
