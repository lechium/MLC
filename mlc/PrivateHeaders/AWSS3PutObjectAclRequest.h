//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3AccessControlPolicy, NSString;

@interface AWSS3PutObjectAclRequest : AWSRequest
{
    long long _ACL;	// 8 = 0x8
    AWSS3AccessControlPolicy *_accessControlPolicy;	// 16 = 0x10
    NSString *_bucket;	// 24 = 0x18
    NSString *_contentMD5;	// 32 = 0x20
    NSString *_grantFullControl;	// 40 = 0x28
    NSString *_grantRead;	// 48 = 0x30
    NSString *_grantReadACP;	// 56 = 0x38
    NSString *_grantWrite;	// 64 = 0x40
    NSString *_grantWriteACP;	// 72 = 0x48
    NSString *_key;	// 80 = 0x50
    long long _requestPayer;	// 88 = 0x58
    NSString *_versionId;	// 96 = 0x60
}

+ (id)requestPayerJSONTransformer;	// IMP=0x0000000100c0ed54
+ (id)accessControlPolicyJSONTransformer;	// IMP=0x0000000100c0ed10
+ (id)ACLJSONTransformer;	// IMP=0x0000000100c0ea4c
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0e8d0
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *grantWriteACP; // @synthesize grantWriteACP=_grantWriteACP;
@property(retain, nonatomic) NSString *grantWrite; // @synthesize grantWrite=_grantWrite;
@property(retain, nonatomic) NSString *grantReadACP; // @synthesize grantReadACP=_grantReadACP;
@property(retain, nonatomic) NSString *grantRead; // @synthesize grantRead=_grantRead;
@property(retain, nonatomic) NSString *grantFullControl; // @synthesize grantFullControl=_grantFullControl;
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) AWSS3AccessControlPolicy *accessControlPolicy; // @synthesize accessControlPolicy=_accessControlPolicy;
@property(nonatomic) long long ACL; // @synthesize ACL=_ACL;
- (void).cxx_destruct;	// IMP=0x0000000100c0efd4

@end

