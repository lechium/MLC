//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AWSDDASLLogCapture : NSObject
{
}

+ (void)captureAslLogs;	// IMP=0x0000000100ba6e64
+ (void)aslMessageReceived:(struct __asl_object_s *)arg1;	// IMP=0x0000000100ba6c0c
+ (void)configureAslQuery:(struct __asl_object_s *)arg1;	// IMP=0x0000000100ba6bb4
+ (void)setCaptureLevel:(unsigned long long)arg1;	// IMP=0x0000000100ba6ba8
+ (unsigned long long)captureLevel;	// IMP=0x0000000100ba6b9c
+ (void)stop;	// IMP=0x0000000100ba6b90
+ (void)start;	// IMP=0x0000000100ba6ae8
+ (void)initialize;	// IMP=0x0000000100ba6ae4

@end

