//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface XGMTAEnv : NSObject
{
    NSString *_deviceid;	// 8 = 0x8
    NSString *_app_version;	// 16 = 0x10
    NSString *_sdk_version;	// 24 = 0x18
    NSUUID *_ifv;	// 32 = 0x20
}

@property(retain, nonatomic) NSUUID *ifv; // @synthesize ifv=_ifv;
@property(retain, nonatomic) NSString *sdk_version; // @synthesize sdk_version=_sdk_version;
@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
- (void).cxx_destruct;	// IMP=0x00000001014f9200

@end
