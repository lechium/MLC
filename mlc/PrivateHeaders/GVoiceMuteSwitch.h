//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GVoiceMuteSwitch : NSObject
{
    double soundDuration;	// 8 = 0x8
    double detecTime;	// 16 = 0x10
    struct GCloudVoiceEngine *pVoiceEngine;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001011840e8
- (_Bool)detectMuteSwitch;	// IMP=0x000000010118428c
- (void)incrementTimer;	// IMP=0x000000010118426c
- (void)playbackComplete;	// IMP=0x0000000101184190
- (void)setNotify:(struct GCloudVoiceEngine *)arg1;	// IMP=0x0000000101184180
- (id)init;	// IMP=0x0000000101184148

@end

