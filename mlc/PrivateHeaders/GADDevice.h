//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPVolumeView, NSArray, NSDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, UISlider;

@interface GADDevice : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    long long _statusBarOrientation;	// 16 = 0x10
    unsigned long long _mainWindowSupportedInterfaceOrientations;	// 24 = 0x18
    unsigned long long _supportedInterfaceOrientationsForKeyWindow;	// 32 = 0x20
    struct CGRect _standardizedMainScreenPortraitBounds;	// 40 = 0x28
    struct CGRect _standardizedMainScreenLandscapeBounds;	// 72 = 0x48
    _Bool _userInterfaceIdiomIsPhone;	// 104 = 0x68
    unsigned long long _bookstores;	// 112 = 0x70
    float _audioVolume;	// 120 = 0x78
    NSArray *_audioRoutePortNames;	// 128 = 0x80
    // Error parsing type: AB, name: _canMakePayments
    NSDictionary *_infoPlist;	// 144 = 0x90
    _Bool _hasCachedStaticParameters;	// 152 = 0x98
    _Bool _hasCachedAdditionalStaticParameters;	// 153 = 0x99
    struct CGSize _standardizedOrientedKeyWindowSize;	// 160 = 0xa0
    MPVolumeView *_volumeView;	// 176 = 0xb0
    UISlider *_volumeSliderView;	// 184 = 0xb8
    NSString *_pseudonymousIdentifier;	// 192 = 0xc0
    id <NSObject> _orientationChangeObserver;	// 200 = 0xc8
    NSString *_deviceModel;	// 208 = 0xd0
    NSString *_systemVersion;	// 216 = 0xd8
    double _mainScreenDensity;	// 224 = 0xe0
    _Bool _isOtherAudioPlaying;	// 232 = 0xe8
    NSNumber *_shouldSilenceAudioValue;	// 240 = 0xf0
    _Bool _canText;	// 248 = 0xf8
    _Bool _canMakePhoneCalls;	// 249 = 0xf9
    CDStruct_f6aba300 _operatingSystemVersion;	// 256 = 0x100
}

+ (id)sharedInstance;	// IMP=0x00000001009fc100
@property(readonly, nonatomic) NSNumber *shouldSilenceAudioValue; // @synthesize shouldSilenceAudioValue=_shouldSilenceAudioValue;
@property(readonly, nonatomic) _Bool isOtherAudioPlaying; // @synthesize isOtherAudioPlaying=_isOtherAudioPlaying;
@property(readonly, nonatomic) _Bool canMakePhoneCalls; // @synthesize canMakePhoneCalls=_canMakePhoneCalls;
@property(readonly, nonatomic) _Bool canText; // @synthesize canText=_canText;
@property(readonly, nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
- (void).cxx_destruct;	// IMP=0x00000001009ffeb4
- (_Bool)isSimulator;	// IMP=0x00000001009ffe4c
@property(readonly, copy, nonatomic) NSArray *audioRoutePortNames;
@property(readonly, nonatomic) float audioVolume;
@property(readonly, nonatomic) struct CGSize standardizedPortraitKeyWindowSize;
@property(readonly, nonatomic) struct CGSize standardizedOrientedKeyWindowSize;
@property(readonly, nonatomic) struct CGRect standardizedOrientedApplicationFrame;
@property(readonly, nonatomic) struct CGRect standardizedOrientedScreenBounds;
@property(readonly, nonatomic) struct CGRect standardizedLandscapeScreenBounds;
@property(readonly, nonatomic) struct CGRect standardizedPortraitScreenBounds;
@property(readonly, nonatomic) _Bool orientationLandscape;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) double mainScreenDensity;
@property(readonly, nonatomic) NSString *deviceSubmodel;
@property(readonly, nonatomic) NSString *deviceModel;
- (id)deviceIdentifier;	// IMP=0x00000001009ff314
- (id)rawDeviceIdentifier;	// IMP=0x00000001009ff1f4
- (id)pseudonymousIdentifier;	// IMP=0x00000001009fefd4
- (void)clearPseudonymousIdentifier;	// IMP=0x00000001009fef38
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) _Bool jailbroken;
@property(readonly, copy, nonatomic) NSString *limitAdTrackingString;
@property(readonly, nonatomic) _Bool limitAdTracking;
- (id)canOpenURLs:(id)arg1;	// IMP=0x00000001009fea98
- (_Bool)OSIsSupported;	// IMP=0x00000001009fea80
- (_Bool)isOSAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;	// IMP=0x00000001009fea2c
- (void)updateOperatingSystemVersionProperties;	// IMP=0x00000001009fe724
- (void)updateCanMakePayments;	// IMP=0x00000001009fe674
- (id)baseSDKVersion;	// IMP=0x00000001009fe48c
- (id)parameters;	// IMP=0x00000001009fd768
- (void)updateAudioPortNames;	// IMP=0x00000001009fd2f8
- (void)updateAudioVolume;	// IMP=0x00000001009fcf0c
- (void)updateAudio;	// IMP=0x00000001009fcde0
- (void)updateOrientedKeyWindowSize;	// IMP=0x00000001009fcc80
- (void)updateBookstores;	// IMP=0x00000001009fca94
- (void)updateOrientation;	// IMP=0x00000001009fc960
- (void)updateDynamicParameters;	// IMP=0x00000001009fc90c
- (void)cacheAdditionalStaticParameters;	// IMP=0x00000001009fc734
- (void)cacheStaticParameters;	// IMP=0x00000001009fc410
- (void)dealloc;	// IMP=0x00000001009fc38c
- (id)init;	// IMP=0x00000001009fc180

@end

