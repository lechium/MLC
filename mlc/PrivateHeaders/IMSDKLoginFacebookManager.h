//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKLoginDelegate.h"

@class NSString;

@interface IMSDKLoginFacebookManager : NSObject <IMSDKLoginDelegate>
{
    NSString *_channel;	// 8 = 0x8
}

+ (id)new;	// IMP=0x0000000100676a74
+ (id)sharedInstance;	// IMP=0x000000010067679c
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;	// IMP=0x0000000100678650
- (void)handleBecomeActive:(id)arg1;	// IMP=0x0000000100678608
- (void)handleOpenUrl:(id)arg1;	// IMP=0x00000001006783fc
- (void)convertLoginResult:(id)arg1 facebookLoginReulst:(id)arg2 handle:(CDUnknownBlockType)arg3;	// IMP=0x0000000100677f00
- (void)loginIMSDKWithFBInfo:(id)arg1 state:(long long)arg2 handle:(CDUnknownBlockType)arg3;	// IMP=0x0000000100677714
- (void)loginFacebookWithPermissions:(id)arg1 state:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100677100
- (void)initFacebook;	// IMP=0x0000000100676e10
- (_Bool)isSupportApi;	// IMP=0x0000000100676e08
- (_Bool)isInstalled;	// IMP=0x0000000100676e00
- (void)logout;	// IMP=0x0000000100676d84
- (void)bindWithSubChannel:(id)arg1 extra:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100676b98
- (void)checkAndLoginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100676b30
- (void)loginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100676ac8
- (id)channelID;	// IMP=0x0000000100676a9c
- (id)init;	// IMP=0x0000000100676a18
- (id)initSingleton;	// IMP=0x000000010067681c
- (void)dealloc;	// IMP=0x00000001006766dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
