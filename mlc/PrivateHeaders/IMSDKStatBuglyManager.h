//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMSDKStatBuglyManager : NSObject
{
}

+ (_Bool)getDetection;	// IMP=0x000000010067c990
+ (id)getAppId;	// IMP=0x000000010067c8d8
+ (void)reportAutoExceptionReport:(_Bool)arg1;	// IMP=0x000000010067c85c
+ (void)reportCrash:(_Bool)arg1;	// IMP=0x000000010067c7e0
+ (void)speedTestWithDomainList:(id)arg1;	// IMP=0x000000010067c7c0
+ (void)speedTest:(id)arg1;	// IMP=0x000000010067c7a0
+ (void)trackPageEnd:(id)arg1;	// IMP=0x000000010067c780
+ (void)trackPageBegin:(id)arg1;	// IMP=0x000000010067c760
+ (void)trackEventEnd:(id)arg1 eventBody:(id)arg2;	// IMP=0x000000010067c740
+ (void)trackEventBegin:(id)arg1 eventBody:(id)arg2;	// IMP=0x000000010067c720
+ (void)reportPurchase:(id)arg1 currentCode:(id)arg2 expense:(id)arg3 isRealTime:(_Bool)arg4;	// IMP=0x000000010067c700
+ (void)reportEvent:(id)arg1 params:(id)arg2 isRealtime:(_Bool)arg3;	// IMP=0x000000010067c6e0
+ (void)reportEvent:(id)arg1 eventBody:(id)arg2 isRealtime:(_Bool)arg3;	// IMP=0x000000010067c6c0
+ (void)start;	// IMP=0x000000010067c364

@end
