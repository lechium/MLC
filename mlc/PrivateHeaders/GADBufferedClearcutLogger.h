//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface GADBufferedClearcutLogger : NSObject
{
    long long _bufferedCommandSize;	// 8 = 0x8
    NSMutableArray *_bufferedCommands;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lockQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010094ed2c
- (void)reportBufferedEventsToLogger:(id)arg1;	// IMP=0x000000010094eb28
- (void)bufferParameters:(id)arg1;	// IMP=0x000000010094ea10
- (void)bufferEvent:(id)arg1;	// IMP=0x000000010094e944
- (id)init;	// IMP=0x000000010094e818

@end
