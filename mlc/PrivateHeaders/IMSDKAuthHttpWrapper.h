//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMSDKAuthHttpWrapper : NSObject
{
}

+ (id)queryWithLoginReuslt;	// IMP=0x00000001006092cc
+ (void)requestwithBaseUrl:(id)arg1 withQuery:(id)arg2 withChannelId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x0000000100608dc4
+ (void)getConnectInfoWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100608c8c
+ (void)migrateWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100608af8
+ (void)getMigrateCodeWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100608964
+ (void)getMigrateInfoWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x00000001006087d0
+ (void)deleteAllAccountWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100608698
+ (void)deleteDeviceAccountWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100608560
+ (void)disconnectWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x00000001006083cc
+ (void)recoverWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100608234
+ (void)restoreWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x00000001006080a0
+ (void)reconnectWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100607f0c
+ (void)connectWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100607d78
+ (void)authWithQuery:(id)arg1 withChannelId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000100607c68

@end

