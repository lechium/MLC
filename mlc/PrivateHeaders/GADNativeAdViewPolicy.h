//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADActiveViewMonitorDelegate.h"
#import "GADAdViewActiveViewMonitoring.h"
#import "GADImpressionMonitorDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class GADActiveViewMonitor, GADAdExposureMonitor, GADGestureRecognizer, GADImpressionMonitor, GADNativeAd<GADNativeAdSourceAttributing><GADOverlayViewSource>, GADNativeAdTapGestureRecognizer, GADOverlayView, GADSDKCoreWebView, NSMapTable, NSMutableArray, NSMutableSet, NSString, UIView;

@interface GADNativeAdViewPolicy : NSObject <GADImpressionMonitorDelegate, UIGestureRecognizerDelegate, GADActiveViewMonitorDelegate, GADAdViewActiveViewMonitoring>
{
    UIView *_adChoicesContentView;	// 8 = 0x8
    UIView *_weakAdChoicesViewFromPublisher;	// 16 = 0x10
    UIView *_adView;	// 24 = 0x18
    GADOverlayView *_overlayView;	// 32 = 0x20
    NSMapTable *_assetViewAssetNames;	// 40 = 0x28
    NSMutableSet *_clickableAssetNames;	// 48 = 0x30
    NSMapTable *_clickableAssetViews;	// 56 = 0x38
    NSMapTable *_nonclickableAssetViews;	// 64 = 0x40
    NSString *_adChoicesViewAssetName;	// 72 = 0x48
    NSString *_attributionIconAssetName;	// 80 = 0x50
    NSString *_attributionTextAssetName;	// 88 = 0x58
    NSString *_backgroundAssetName;	// 96 = 0x60
    long long _adChoicesViewCorner;	// 104 = 0x68
    GADImpressionMonitor *_impressionMonitor;	// 112 = 0x70
    NSMutableArray *_adChoicesViewConstraints;	// 120 = 0x78
    _Bool _shouldAllowPublisherRenderAdChoices;	// 128 = 0x80
    GADAdExposureMonitor *_adExposureMonitor;	// 136 = 0x88
    GADNativeAdTapGestureRecognizer *_singleTap;	// 144 = 0x90
    GADGestureRecognizer *_touchGestureRecognizer;	// 152 = 0x98
    _Bool _isAdViewOwnedByPublisher;	// 160 = 0xa0
    GADActiveViewMonitor *_activeViewMonitor;	// 168 = 0xa8
    unsigned long long _activeViewID;	// 176 = 0xb0
    GADSDKCoreWebView *_SDKCoreWebView;	// 184 = 0xb8
    id _appWillResignActiveObserver;	// 192 = 0xc0
    id _appBecameActiveObserver;	// 200 = 0xc8
    _Bool _adChoicesViewClickable;	// 208 = 0xd0
    GADNativeAd<GADNativeAdSourceAttributing><GADOverlayViewSource> *_nativeAd;	// 216 = 0xd8
}

@property(nonatomic) _Bool adChoicesViewClickable; // @synthesize adChoicesViewClickable=_adChoicesViewClickable;
@property(retain, nonatomic) GADNativeAd<GADNativeAdSourceAttributing><GADOverlayViewSource> *nativeAd; // @synthesize nativeAd=_nativeAd;
- (void).cxx_destruct;	// IMP=0x000000010096c878
- (void)activeViewMonitoringDidStop:(unsigned long long)arg1;	// IMP=0x000000010096c830
- (_Bool)activeViewMonitoringStarted:(unsigned long long)arg1;	// IMP=0x000000010096c828
- (void)activeViewVisibilityChanged:(_Bool)arg1;	// IMP=0x000000010096c824
- (void)activeViewMonitorDidRefresh:(id)arg1;	// IMP=0x000000010096c7fc
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010096c6f0
- (void)impressionMonitorDidMonitorImpression:(id)arg1;	// IMP=0x000000010096c6e4
- (_Bool)isViewTracked:(id)arg1;	// IMP=0x000000010096c69c
- (id)activeViewJSCommandWithParams:(id)arg1;	// IMP=0x000000010096c5fc
- (void)enqueueJSCommandWithUnloaded:(_Bool)arg1;	// IMP=0x000000010096c54c
- (void)finishActiveViewReporting;	// IMP=0x000000010096c400
- (void)startActiveViewReportingIfEnabled;	// IMP=0x000000010096bfec
- (void)createActiveViewMonitor;	// IMP=0x000000010096bf04
- (_Bool)monitoredViewIsSubviewOfDeviceScreen;	// IMP=0x000000010096beac
- (_Bool)nativeAdHasVideo;	// IMP=0x000000010096bdec
- (void)beginObservingVideoClickNotifications;	// IMP=0x000000010096bc98
- (void)recordImpression;	// IMP=0x000000010096bc0c
- (void)stopImpressionMonitoring;	// IMP=0x000000010096bbcc
- (void)startImpressionMonitoring;	// IMP=0x000000010096bb0c
- (void)checkForImpression;	// IMP=0x000000010096baa0
- (void)adViewDidMoveToSuperview;	// IMP=0x000000010096ba1c
- (void)adViewDidLayoutSubviews;	// IMP=0x000000010096b9d0
- (void)handleImpressionTracking;	// IMP=0x000000010096b908
- (void)orderViews;	// IMP=0x000000010096b75c
- (void)replaceAssetWithName:(id)arg1 withAssetView:(id)arg2 weakReferencePointer:(id *)arg3;	// IMP=0x000000010096b560
- (void)updateAdChoicesView;	// IMP=0x000000010096b408
- (void)updateAdChoicesContentView;	// IMP=0x000000010096b250
- (void)updateOverlay;	// IMP=0x000000010096b174
- (void)finishAdExposureMonitoring;	// IMP=0x000000010096b15c
- (id)signalDictionaryWithAssetView:(id)arg1 assetName:(id)arg2 adView:(id)arg3;	// IMP=0x000000010096a824
- (id)nativeAdSignalDictionary;	// IMP=0x000000010096a1a0
- (id)tapHandlingEnvironmentWithTapLocation:(struct CGPoint)arg1 tappedViewName:(id)arg2;	// IMP=0x0000000100969f90
- (void)handleVideoClickNotification:(id)arg1;	// IMP=0x0000000100969c40
- (void)handleTap:(id)arg1;	// IMP=0x0000000100969658
- (void)addUserInteractionToAdView;	// IMP=0x000000010096939c
- (void)constrainAdChoicesViewToCorner;	// IMP=0x0000000100968e2c
- (void)dealloc;	// IMP=0x0000000100968d5c
- (void)setClickableAssetViews:(id)arg1 nonclickableAssetViews:(id)arg2;	// IMP=0x000000010096877c
- (void)unregisterAdView;	// IMP=0x0000000100968590
- (id)initWithAdView:(id)arg1 adChoicesViewAssetName:(id)arg2 attributionIconAssetName:(id)arg3 attributionTextAssetName:(id)arg4 backgroundAssetName:(id)arg5 isAdViewOwnedByPublisher:(_Bool)arg6;	// IMP=0x00000001009682a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

