//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Grantee;

@interface AWSS3TargetGrant : AWSModel
{
    AWSS3Grantee *_grantee;	// 8 = 0x8
    long long _permission;	// 16 = 0x10
}

+ (id)permissionJSONTransformer;	// IMP=0x0000000100c12e04
+ (id)granteeJSONTransformer;	// IMP=0x0000000100c12dc0
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c12d2c
@property(nonatomic) long long permission; // @synthesize permission=_permission;
@property(retain, nonatomic) AWSS3Grantee *grantee; // @synthesize grantee=_grantee;
- (void).cxx_destruct;	// IMP=0x0000000100c12fd8

@end

