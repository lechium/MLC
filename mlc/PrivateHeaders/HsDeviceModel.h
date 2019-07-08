//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsPropertyValue, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface HsDeviceModel : NSObject
{
    HsPropertyValue *_properties[11];	// 8 = 0x8
    id <HsDevice> _device;	// 96 = 0x60
    NSString *_deviceId;	// 104 = 0x68
    NSArray *_deviceKeys;	// 112 = 0x70
    id <HsPropertyStorage> _storage;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_workerQueue;	// 128 = 0x80
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) id <HsPropertyStorage> storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSArray *deviceKeys; // @synthesize deviceKeys=_deviceKeys;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;	// IMP=0x000000010147aa40
- (void)setDevelopmentPlatform:(id)arg1;	// IMP=0x000000010147a998
- (void)setDevice:(id)arg1;	// IMP=0x000000010147a984
- (_Bool)getPushOptIn;	// IMP=0x000000010147a96c
- (id)propertyForKey:(short)arg1;	// IMP=0x000000010147a7ec
- (void)setSyncStatus:(short)arg1 forProperties:(id)arg2;	// IMP=0x000000010147a49c
- (void)checkAndMarkPropertiesAsSynced:(id)arg1;	// IMP=0x000000010147a00c
- (id)syncedAndUnsyncedProperties;	// IMP=0x0000000101479d40
- (id)unsyncedProperties;	// IMP=0x0000000101479a88
- (_Bool)shouldDevicePropertySyncImmediately:(long long)arg1;	// IMP=0x0000000101479a64
- (void)deregisterDeviceToken;	// IMP=0x0000000101479a4c
- (id)getPushToken;	// IMP=0x0000000101479a30
- (void)setPushToken:(id)arg1;	// IMP=0x0000000101479950
- (void)rescanDevice;	// IMP=0x00000001014796c0
- (void)setLongLongProperty:(short)arg1 toValue:(long long)arg2;	// IMP=0x00000001014794dc
- (void)setBoolProperty:(short)arg1 toValue:(_Bool)arg2;	// IMP=0x00000001014792ec
- (void)setStringProperty:(short)arg1 toValue:(id)arg2;	// IMP=0x0000000101479024
- (void)setProperty:(short)arg1 withSetBlock:(CDUnknownBlockType)arg2 andInitBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000101478e38
- (id)initWithDevice:(id)arg1 fromPropertyStorage:(id)arg2 usingProfileStorage:(id)arg3 andWorkerQueue:(id)arg4;	// IMP=0x00000001014787f8

@end
