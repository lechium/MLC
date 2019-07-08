//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADMediaContentDisplaying.h"

@class GADMediationNativeAdVideoController, NSString, UIView;

@interface GADMediationNativeAdMediaContent : NSObject <GADMediaContentDisplaying>
{
    UIView *_mediaView;	// 8 = 0x8
    GADMediationNativeAdVideoController *_videoController;	// 16 = 0x10
}

@property(readonly, nonatomic) GADMediationNativeAdVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
- (void).cxx_destruct;	// IMP=0x00000001009ab678
- (void)loadVideoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001009ab5ac
- (id)initWithMediatedUnifiedNativeAd:(id)arg1;	// IMP=0x00000001009ab4bc
- (id)initWithMediatedNativeContentAd:(id)arg1;	// IMP=0x00000001009ab3cc
- (id)initWithMediatedNativeAppInstallAd:(id)arg1;	// IMP=0x00000001009ab2dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

