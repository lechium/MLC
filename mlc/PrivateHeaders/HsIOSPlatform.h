//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsPlatform.h"

@class HSConfigPlist, HSUserDBHelper, HsConversationPersistentStorage, NSString;

@interface HsIOSPlatform : NSObject <HsPlatform>
{
    id <HSLegacyProfileDataMigrationDAO> _legacyProfileDataMigrationDAO;	// 8 = 0x8
    id <HsCoreDevice> _coreDevice;	// 16 = 0x10
    id <HsNetworkRequestDAO> _networkRequestDAO;	// 24 = 0x18
    id <HSUserManagerDAO> _userManagerDAO;	// 32 = 0x20
    id <HSUserDAO> _userDAO;	// 40 = 0x28
    id <HSClearedUserDAO> _clearedUserDAO;	// 48 = 0x30
    id <HSRedactionDAO> _redactionDAO;	// 56 = 0x38
    id <HsConversationDAO> _conversationDAO;	// 64 = 0x40
    id <HsConversationInboxDAO> _conversationInboxDAO;	// 72 = 0x48
    id <HsMetaDataDAO> _metaDataDAO;	// 80 = 0x50
    id <HSSDKDataDAO> _sdkDataDAO;	// 88 = 0x58
    id <HsAnalyticsDao> _analyticsDAO;	// 96 = 0x60
    id <HsDomainKVStore> _sharedKVStore;	// 104 = 0x68
    id <HsKVStore> _sdkConfigKVStore;	// 112 = 0x70
    id <HsUINavigator> _uiNavigator;	// 120 = 0x78
    id <HsUserResourceManagerInterface> _resourceProvider;	// 128 = 0x80
    id <HsSDKState> _sdkState;	// 136 = 0x88
    HsConversationPersistentStorage *_conversationStorage;	// 144 = 0x90
    HSConfigPlist *_plistConfig;	// 152 = 0x98
    id <HsPollerController> _conversationInboxPollerController;	// 160 = 0xa0
    id <HSAppLifeCycleEventsHandler> _appLifeCycleEventHandler;	// 168 = 0xa8
    NSString *_apiKey;	// 176 = 0xb0
    NSString *_domainName;	// 184 = 0xb8
    NSString *_appId;	// 192 = 0xc0
    HSUserDBHelper *_userDbHelper;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000101417d8c
- (id)userDBHelper;	// IMP=0x0000000101417cf8
- (void)deleteFileAtRelativePath:(id)arg1;	// IMP=0x0000000101417bb0
- (id)supportDataMigrator;	// IMP=0x0000000101417b8c
- (id)applicationLifeCycleEventHandler;	// IMP=0x0000000101417b7c
- (id)jsonifier;	// IMP=0x0000000101417b4c
- (void)deleteUserAttachmentFileForUserLocalId:(id)arg1;	// IMP=0x000000010141776c
- (id)absoluteUserAttachmentPathForRelativePath:(id)arg1;	// IMP=0x0000000101417658
- (id)relativePathForUserAttachmentFilename:(id)arg1 forUserLocalId:(id)arg2;	// IMP=0x00000001014175c0
- (id)fileExtension:(id)arg1;	// IMP=0x00000001014175ac
- (id)mimeTypeForURL:(id)arg1;	// IMP=0x000000010141747c
- (long long)minimumConversationDescriptionLength;	// IMP=0x0000000101417338
- (id)conversationPollerController;	// IMP=0x000000010141728c
- (id)plistConfig;	// IMP=0x00000001014171ec
- (id)sdkState;	// IMP=0x000000010141714c
- (id)resourceProvider;	// IMP=0x00000001014170ac
- (id)uiNavigator;	// IMP=0x000000010141700c
- (id)campaignPostNetworkForRoute:(id)arg1;	// IMP=0x0000000101416f20
- (id)campaignGetNetworkForRoute:(id)arg1;	// IMP=0x0000000101416e34
- (id)sharedKVStoreWithError:(id *)arg1;	// IMP=0x0000000101416ce0
- (id)analyticsDAOWithError:(id *)arg1;	// IMP=0x0000000101416c34
- (id)sdkDataDAOWithError:(id *)arg1;	// IMP=0x0000000101416b88
- (id)metaDataDAOWithError:(id *)arg1;	// IMP=0x0000000101416adc
- (id)agentSuggestedFaqDAOWithError:(id *)arg1;	// IMP=0x0000000101416ad0
- (id)conversationDAOWithError:(id *)arg1;	// IMP=0x0000000101416a24
- (id)redactionDAO;	// IMP=0x000000010141695c
- (id)legacyProfileDataMigrationDAO;	// IMP=0x0000000101416884
- (id)clearedUserDAO;	// IMP=0x00000001014167ac
- (id)userDAO;	// IMP=0x00000001014166d4
- (id)userManagerDAO;	// IMP=0x0000000101416630
- (id)networkRequestDAO;	// IMP=0x000000010141658c
- (id)transport;	// IMP=0x000000010141655c
- (id)conversationInboxDAOWithError:(id *)arg1;	// IMP=0x00000001014164b0
- (id)SDKConfigurationKVStoreWithError:(id *)arg1;	// IMP=0x00000001014163fc
- (id)responseParser;	// IMP=0x00000001014163cc
- (id)conversationStorageWithError:(id *)arg1;	// IMP=0x0000000101416324
- (id)device;	// IMP=0x0000000101416280
- (id)appId;	// IMP=0x0000000101416270
- (id)domainName;	// IMP=0x0000000101416260
- (id)apiKey;	// IMP=0x0000000101416250
- (id)initWithApiKey:(id)arg1 domainName:(id)arg2 appId:(id)arg3;	// IMP=0x000000010141613c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
