//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsCampaignsNetworkUtil : NSObject
{
}

+ (id)storeEtagFromResponse:(id)arg1 orThrowError:(id *)arg2;	// IMP=0x0000000101333a14
+ (id)storeServerTimeFromResponse:(id)arg1 orThrowError:(id *)arg2;	// IMP=0x00000001013337ec
+ (void)restoreBackgroundSessionForIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000101333698
+ (id)apiPathFromUrl:(id)arg1;	// IMP=0x0000000101333560
+ (short)methodFromString:(id)arg1;	// IMP=0x00000001013334b4
+ (id)buildNetworkQueryForRequest:(id)arg1;	// IMP=0x0000000101333058
+ (id)parseNetworkResponse:(id)arg1 andReturnData:(id)arg2;	// IMP=0x0000000101332dcc

@end

