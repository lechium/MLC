//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasIAPPayDelegate.h"

@class NSString;

@interface MidasNetCallbackHanlder : NSObject <MidasIAPPayDelegate>
{
    struct MidasGetProductCallback *_mProductCB;	// 8 = 0x8
    struct MidasGetIntroPriceCallback *_mIntroPriceCB;	// 16 = 0x10
    struct MidasGetInfoCallback *mShortOpenidBack;	// 24 = 0x18
}

- (void)onResp:(id)arg1;	// IMP=0x00000001019064d4
- (void)needLogin;	// IMP=0x0000000101906338
- (void)setShortOpenidCallback:(struct MidasGetInfoCallback *)arg1;	// IMP=0x0000000101906328
- (void)setIntroPriceCallback:(struct MidasGetIntroPriceCallback *)arg1;	// IMP=0x0000000101906318
- (void)setLocalPriceCallback:(struct MidasGetProductCallback *)arg1;	// IMP=0x0000000101906308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
