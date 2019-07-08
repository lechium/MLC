//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsNetworkRequestDAO.h"

@class NSMutableDictionary, NSString;

@interface HsIOSNetworkRequestDAO : NSObject <HsNetworkRequestDAO>
{
    double _serverTimeDelta;	// 8 = 0x8
    id <HSSDKDataDAO> _sdkDataDao;	// 16 = 0x10
    NSMutableDictionary *_etags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010146ef50
- (void)clearSuccessfulRequestIds;	// IMP=0x000000010146ee5c
- (id)getAllSuccessfulRequestIds;	// IMP=0x000000010146ed5c
- (void)storeSuccessfulRequestId:(id)arg1;	// IMP=0x000000010146eb88
- (id)getPendingRequestIdDictionaryForRoute:(id)arg1;	// IMP=0x000000010146ea58
- (id)getPendingRequestIdForRoute:(id)arg1 withMappingKey:(id)arg2;	// IMP=0x000000010146e8b8
- (void)deletePendingRequestIdForRoute:(id)arg1 withMappingKey:(id)arg2;	// IMP=0x000000010146e690
- (void)storePendingRequestId:(id)arg1 forRoute:(id)arg2 withMappingKey:(id)arg3;	// IMP=0x000000010146e410
- (void)removeEtagsForRoutesWithPrefix:(id)arg1;	// IMP=0x000000010146e180
- (void)removeEtagForRoute:(id)arg1;	// IMP=0x000000010146e02c
- (id)etagForRoute:(id)arg1;	// IMP=0x000000010146df90
- (void)storeEtag:(id)arg1 forRoute:(id)arg2;	// IMP=0x000000010146ddc8
- (double)serverTimeDelta;	// IMP=0x000000010146ddb8
- (void)storeServerTimeDelta:(double)arg1;	// IMP=0x000000010146dd74
- (id)initWithPlatform:(id)arg1;	// IMP=0x000000010146db54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
