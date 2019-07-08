//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSIdentityProvider.h"
#import "AWSIdentityProviderManager.h"

@class AWSTask, NSString;

@protocol AWSCognitoCredentialsProviderHelper <AWSIdentityProvider, AWSIdentityProviderManager>
@property(readonly, nonatomic) id <AWSIdentityProviderManager> identityProviderManager;
@property(retain, nonatomic) NSString *identityId;
@property(readonly, nonatomic) NSString *identityPoolId;
- (void)clear;
- (_Bool)isAuthenticated;
- (AWSTask *)getIdentityId;
@end

