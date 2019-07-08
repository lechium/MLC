//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADInAppPurchaseProductCache : NSObject
{
    NSMutableDictionary *_validProductIDs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lockQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001009c4308
- (void).cxx_destruct;	// IMP=0x00000001009c49e4
- (void)requestProductsWithProductIdentifiers:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001009c4618
- (id)cachedProductForProductID:(id)arg1;	// IMP=0x00000001009c4430
- (id)init;	// IMP=0x00000001009c4388

@end
