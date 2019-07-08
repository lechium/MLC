//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSData, NSMutableDictionary, NSString, NSURLSession;

@interface HSDownloadNetworkManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    _Bool _hasResumeData;	// 8 = 0x8
    NSMutableDictionary *_requestResponseQueue;	// 16 = 0x10
    NSData *_resumeData;	// 24 = 0x18
    NSURLSession *_foregroundSession;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010147e8ac
@property(retain, nonatomic) NSURLSession *foregroundSession; // @synthesize foregroundSession=_foregroundSession;
@property(nonatomic) _Bool hasResumeData; // @synthesize hasResumeData=_hasResumeData;
@property(retain, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property(retain, nonatomic) NSMutableDictionary *requestResponseQueue; // @synthesize requestResponseQueue=_requestResponseQueue;
- (void).cxx_destruct;	// IMP=0x000000010147f2c0
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010147ef98
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x000000010147eda0
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000010147ea88
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000010147ea70
- (id)init;	// IMP=0x000000010147ea58
- (id)initCuston;	// IMP=0x000000010147e92c
- (void)resumeDownloadUsingData:(id)arg1;	// IMP=0x000000010147e860
- (id)downloadTaskWithURL:(id)arg1 orResumeData:(id)arg2;	// IMP=0x000000010147e788
- (void)pauseDownloadsForURL:(id)arg1;	// IMP=0x000000010147e494
- (void)cancelDownloadsForURL:(id)arg1;	// IMP=0x000000010147e334
- (void)downloadResourceForURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 andProgressBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010147e0c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
