//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIApplication;

@protocol FBSDKURLOpening <NSObject>
- (_Bool)isAuthenticationURL:(NSURL *)arg1;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (_Bool)canOpenURL:(NSURL *)arg1 forApplication:(UIApplication *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
@end

