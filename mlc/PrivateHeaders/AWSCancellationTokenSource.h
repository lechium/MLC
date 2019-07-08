//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSCancellationToken;

@interface AWSCancellationTokenSource : NSObject
{
    AWSCancellationToken *_token;	// 8 = 0x8
}

+ (id)cancellationTokenSource;	// IMP=0x0000000100b8e44c
@property(readonly, nonatomic) AWSCancellationToken *token; // @synthesize token=_token;
- (void).cxx_destruct;	// IMP=0x0000000100b8e4e0
- (void)dispose;	// IMP=0x0000000100b8e4b8
- (void)cancelAfterDelay:(int)arg1;	// IMP=0x0000000100b8e4a0
- (void)cancel;	// IMP=0x0000000100b8e488
@property(readonly, nonatomic, getter=isCancellationRequested) _Bool cancellationRequested;
- (id)init;	// IMP=0x0000000100b8e3c4

@end

