//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FIRAAdExposureReporter : NSObject
{
    NSMutableDictionary *_adUnitCounts;	// 8 = 0x8
    NSMutableDictionary *_adUnitStartTimes;	// 16 = 0x10
    double _adExposureStartTime;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _reportingEnabled;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001008aaf98
@property(nonatomic, getter=isReportingEnabled) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
- (void).cxx_destruct;	// IMP=0x00000001008ac624
- (void)handleAppWillResignActiveWithScreen:(id)arg1;	// IMP=0x00000001008ac440
- (void)handleAppDidBecomeActive;	// IMP=0x00000001008ac380
- (void)handleEngagementTimer:(id)arg1;	// IMP=0x00000001008ac300
- (void)handleScreenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;	// IMP=0x00000001008ac298
- (void)logAdUnitExposureEventOnSerialQueueWithID:(id)arg1 endTime:(double)arg2 screenParameters:(id)arg3;	// IMP=0x00000001008abffc
- (void)logAdExposureEventOnSerialQueueWithEndTime:(double)arg1 screenParameters:(id)arg2;	// IMP=0x00000001008abe18
- (void)logExposureEventsOnSerialQueueWithEndTime:(double)arg1 screenParameters:(id)arg2;	// IMP=0x00000001008abc7c
- (void)logExposureEventsWithScreenParameters:(id)arg1;	// IMP=0x00000001008abb48
- (void)updateStartTimesOnSerialQueue:(double)arg1;	// IMP=0x00000001008ab9b4
- (double)currentTime;	// IMP=0x00000001008ab904
- (void)endAdUnitExposure:(id)arg1;	// IMP=0x00000001008ab534
- (void)beginAdUnitExposure:(id)arg1;	// IMP=0x00000001008ab1f0
- (void)dealloc;	// IMP=0x00000001008ab174
- (id)init;	// IMP=0x00000001008ab018

@end
