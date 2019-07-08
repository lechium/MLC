//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableDictionary;

@interface MidasModuleMgr : NSObject
{
    NSMutableDictionary *_modulesDict;	// 8 = 0x8
    NSArray *_allModules;	// 16 = 0x10
    NSData *_moduleSortHint;	// 24 = 0x18
}

+ (id)shareInstance;	// IMP=0x00000001005ba248
@property(copy, nonatomic) NSData *moduleSortHint; // @synthesize moduleSortHint=_moduleSortHint;
@property(copy, nonatomic) NSArray *allModules; // @synthesize allModules=_allModules;
@property(retain, nonatomic) NSMutableDictionary *modulesDict; // @synthesize modulesDict=_modulesDict;
- (void).cxx_destruct;	// IMP=0x00000001005bb278
- (void)sdkPayCallback:(id)arg1;	// IMP=0x00000001005bb0ec
- (void)sdkPayProvide:(id)arg1;	// IMP=0x00000001005baf9c
- (void)sdkPayIAP:(id)arg1;	// IMP=0x00000001005bae4c
- (void)sdkPayOrder:(id)arg1;	// IMP=0x00000001005bacfc
- (void)sdkPaylaunch:(id)arg1;	// IMP=0x00000001005babac
- (_Bool)sdkInit:(id)arg1;	// IMP=0x00000001005ba754
- (void)registerModule:(Class)arg1;	// IMP=0x00000001005ba2c8

@end
