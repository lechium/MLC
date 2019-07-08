//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ADJDeviceInfo : NSObject
{
    _Bool _trackingEnabled;	// 8 = 0x8
    NSString *_idForAdvertisers;	// 16 = 0x10
    NSString *_fbAttributionId;	// 24 = 0x18
    NSString *_vendorId;	// 32 = 0x20
    NSString *_clientSdk;	// 40 = 0x28
    NSString *_bundeIdentifier;	// 48 = 0x30
    NSString *_bundleVersion;	// 56 = 0x38
    NSString *_bundleShortVersion;	// 64 = 0x40
    NSString *_deviceType;	// 72 = 0x48
    NSString *_deviceName;	// 80 = 0x50
    NSString *_osName;	// 88 = 0x58
    NSString *_systemVersion;	// 96 = 0x60
    NSString *_languageCode;	// 104 = 0x68
    NSString *_countryCode;	// 112 = 0x70
    NSString *_machineModel;	// 120 = 0x78
    NSString *_cpuSubtype;	// 128 = 0x80
    NSString *_installReceiptBase64;	// 136 = 0x88
    NSString *_osBuild;	// 144 = 0x90
}

+ (id)deviceInfoWithSdkPrefix:(id)arg1;	// IMP=0x0000000100784480
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *installReceiptBase64; // @synthesize installReceiptBase64=_installReceiptBase64;
@property(copy, nonatomic) NSString *cpuSubtype; // @synthesize cpuSubtype=_cpuSubtype;
@property(copy, nonatomic) NSString *machineModel; // @synthesize machineModel=_machineModel;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *osName; // @synthesize osName=_osName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundeIdentifier; // @synthesize bundeIdentifier=_bundeIdentifier;
@property(copy, nonatomic) NSString *clientSdk; // @synthesize clientSdk=_clientSdk;
@property(copy, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
@property(nonatomic) _Bool trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
@property(copy, nonatomic) NSString *fbAttributionId; // @synthesize fbAttributionId=_fbAttributionId;
@property(copy, nonatomic) NSString *idForAdvertisers; // @synthesize idForAdvertisers=_idForAdvertisers;
- (void).cxx_destruct;	// IMP=0x0000000100784ddc
- (void)injectInstallReceipt:(id)arg1;	// IMP=0x0000000100784adc
- (id)initWithSdkPrefix:(id)arg1;	// IMP=0x00000001007844e8

@end

