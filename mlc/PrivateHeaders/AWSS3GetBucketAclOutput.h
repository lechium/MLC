//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Owner, NSArray;

@interface AWSS3GetBucketAclOutput : AWSModel
{
    NSArray *_grants;	// 8 = 0x8
    AWSS3Owner *_owner;	// 16 = 0x10
}

+ (id)ownerJSONTransformer;	// IMP=0x0000000100bfeab8
+ (id)grantsJSONTransformer;	// IMP=0x0000000100bfea74
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bfe9e0
@property(retain, nonatomic) AWSS3Owner *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSArray *grants; // @synthesize grants=_grants;
- (void).cxx_destruct;	// IMP=0x0000000100bfeb44

@end

