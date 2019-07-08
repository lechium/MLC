//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIRNetworkReachabilityDelegate.h"

@class FIRNetwork, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface FIRClearcutLogger : NSObject <FIRNetworkReachabilityDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    // Error parsing type: AQ, name: _backgroundTaskId
    NSObject *_pendingRequestsLock;	// 24 = 0x18
    _Bool _sendScheduled;	// 32 = 0x20
    int _uploadRetriesRemaining;	// 36 = 0x24
    NSString *_applicationBuild;	// 40 = 0x28
    unsigned long long _maxRequestNumBytes;	// 48 = 0x30
    NSString *_installIdentifier;	// 56 = 0x38
    NSURL *_serverURL;	// 64 = 0x40
    NSString *_zwiebackCookie;	// 72 = 0x48
    long long _fetcherCookieStorageMethod;	// 80 = 0x50
    id <FIRClearcutLoggerDelegate> _delegate;	// 88 = 0x58
    NSString *_logDirectory;	// 96 = 0x60
    NSMutableDictionary *_accounts;	// 104 = 0x68
    long long _sendDelayMillis;	// 112 = 0x70
    FIRNetwork *_network;	// 120 = 0x78
    NSMutableArray *_pendingRequests;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x00000001009061fc
@property(readonly, copy, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) FIRNetwork *network; // @synthesize network=_network;
@property(nonatomic) _Bool sendScheduled; // @synthesize sendScheduled=_sendScheduled;
@property(nonatomic) int uploadRetriesRemaining; // @synthesize uploadRetriesRemaining=_uploadRetriesRemaining;
@property(nonatomic) long long sendDelayMillis; // @synthesize sendDelayMillis=_sendDelayMillis;
@property(readonly, copy, nonatomic) NSMutableDictionary *accounts; // @synthesize accounts=_accounts;
@property(copy, nonatomic) NSString *logDirectory; // @synthesize logDirectory=_logDirectory;
@property(nonatomic) __weak id <FIRClearcutLoggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long fetcherCookieStorageMethod; // @synthesize fetcherCookieStorageMethod=_fetcherCookieStorageMethod;
@property(copy) NSString *zwiebackCookie; // @synthesize zwiebackCookie=_zwiebackCookie;
@property(copy) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy) NSString *installIdentifier; // @synthesize installIdentifier=_installIdentifier;
@property unsigned long long maxRequestNumBytes; // @synthesize maxRequestNumBytes=_maxRequestNumBytes;
@property(copy) NSString *applicationBuild; // @synthesize applicationBuild=_applicationBuild;
- (void).cxx_destruct;	// IMP=0x0000000100908114
@property(nonatomic) unsigned long long backgroundTaskId; // @dynamic backgroundTaskId;
- (void)reachabilityDidChange;	// IMP=0x0000000100907ecc
- (void)sendNextPendingRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001009078b0
- (void)scheduleNextSend;	// IMP=0x0000000100907700
- (id)nextPendingRequest;	// IMP=0x0000000100907628
- (void)sendLogsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001009073cc
- (void)updatePendingRequests;	// IMP=0x0000000100906eb0
- (void)flushWriters;	// IMP=0x0000000100906e58
- (id)logRequestFromPath:(id)arg1 logSource:(int)arg2;	// IMP=0x0000000100906b48
- (id)accountDataForAccount:(id)arg1;	// IMP=0x00000001009069f0
- (void)logEvent:(id)arg1 logSource:(int)arg2 account:(id)arg3;	// IMP=0x0000000100906744
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100906624
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100906614
- (void)dealloc;	// IMP=0x000000010090657c
- (id)init;	// IMP=0x00000001009062b0

@end
