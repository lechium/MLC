//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

#import "NSURLConnectionDelegate.h"

@class NSArray, NSString, NSThread, NSURL, NSURLConnection;

@interface GADURLProtocol : NSURLProtocol <NSURLConnectionDelegate>
{
    NSURL *_substituteURL;	// 16 = 0x10
    NSURLConnection *_connection;	// 24 = 0x18
    NSThread *_clientThread;	// 32 = 0x20
    NSString *_adRequestIdentifier;	// 40 = 0x28
    NSArray *_requestIdentifiers;	// 48 = 0x30
}

+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x00000001009bb498
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x00000001009bb204
- (void).cxx_destruct;	// IMP=0x00000001009bc190
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00000001009bbfb8
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001009bbd64
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000001009bbc44
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000001009bbb6c
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001009bbab4
- (void)stopLoading;	// IMP=0x00000001009bba78
- (void)startLoading;	// IMP=0x00000001009bb6ac
- (void)configureMRAIDLocationWithRequest:(id)arg1;	// IMP=0x00000001009bb554
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x00000001009bb4b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
