//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADGCacheURLLoader;

@interface GADGCacheGMSGHandler : GADGMSGHandler
{
    GADGCacheURLLoader *_gcacheURLLoader;	// 8 = 0x8
}

+ (id)subActionBlockDictionary;	// IMP=0x0000000100947990
+ (id)actionBlockDictionary;	// IMP=0x000000010094782c
- (void).cxx_destruct;	// IMP=0x0000000100947cf8
- (void)adView:(id)arg1 didReceiveStartCacheAction:(id)arg2;	// IMP=0x0000000100947be0
- (void)adView:(id)arg1 didReceiveGCacheAction:(id)arg2;	// IMP=0x0000000100947af4
- (id)init;	// IMP=0x00000001009477ac

@end
