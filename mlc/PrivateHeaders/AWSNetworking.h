//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSURLSessionManager;

@interface AWSNetworking : NSObject
{
    AWSURLSessionManager *_networkManager;	// 8 = 0x8
}

@property(retain, nonatomic) AWSURLSessionManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;	// IMP=0x0000000100be130c
- (id)sendRequest:(id)arg1;	// IMP=0x0000000100be1264
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000100be11c4
- (id)init;	// IMP=0x0000000100be1180
- (void)dealloc;	// IMP=0x0000000100be10cc

@end
