//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsConversationDM, HsConversationInboxDM, HsSDKConfigurationDM;

@interface HsCreatePreIssueDM : NSObject
{
    long long onceToken;	// 8 = 0x8
    id <HsNewConversationListener> _conversationListner;	// 16 = 0x10
    HsConversationInboxDM *_conversationInboxDM;	// 24 = 0x18
    HsConversationDM *_conversationDM;	// 32 = 0x20
    HsSDKConfigurationDM *_configurationDM;	// 40 = 0x28
}

@property(retain) HsSDKConfigurationDM *configurationDM; // @synthesize configurationDM=_configurationDM;
@property(retain) HsConversationDM *conversationDM; // @synthesize conversationDM=_conversationDM;
@property(retain) HsConversationInboxDM *conversationInboxDM; // @synthesize conversationInboxDM=_conversationInboxDM;
@property __weak id <HsNewConversationListener> conversationListner; // @synthesize conversationListner=_conversationListner;
- (void).cxx_destruct;	// IMP=0x00000001013c506c
- (void)execute;	// IMP=0x00000001013c4c58
- (id)initWithConversationInboxDM:(id)arg1 conversationDM:(id)arg2 sdkConfigurationDM:(id)arg3 newCoversationListner:(id)arg4;	// IMP=0x00000001013c4b54

@end
