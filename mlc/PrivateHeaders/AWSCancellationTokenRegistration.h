//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSCancellationToken;

@interface AWSCancellationTokenRegistration : NSObject
{
    _Bool _disposed;	// 8 = 0x8
    AWSCancellationToken *_token;	// 16 = 0x10
    CDUnknownBlockType _cancellationObserverBlock;	// 24 = 0x18
    NSObject *_lock;	// 32 = 0x20
}

+ (id)registrationWithToken:(id)arg1 delegate:(CDUnknownBlockType)arg2;	// IMP=0x0000000100baf65c
@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType cancellationObserverBlock; // @synthesize cancellationObserverBlock=_cancellationObserverBlock;
@property(nonatomic) __weak AWSCancellationToken *token; // @synthesize token=_token;
- (void).cxx_destruct;	// IMP=0x0000000100baf994
- (void)throwIfDisposed;	// IMP=0x0000000100baf8fc
- (void)notifyDelegate;	// IMP=0x0000000100baf868
- (void)dispose;	// IMP=0x0000000100baf778
- (id)init;	// IMP=0x0000000100baf6f0

@end

