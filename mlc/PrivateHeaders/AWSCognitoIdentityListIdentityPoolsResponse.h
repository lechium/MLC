//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSCognitoIdentityListIdentityPoolsResponse : AWSModel
{
    NSArray *_identityPools;	// 8 = 0x8
    NSString *_nextToken;	// 16 = 0x10
}

+ (id)identityPoolsJSONTransformer;	// IMP=0x0000000100be0300
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100be026c
@property(retain, nonatomic) NSString *nextToken; // @synthesize nextToken=_nextToken;
@property(retain, nonatomic) NSArray *identityPools; // @synthesize identityPools=_identityPools;
- (void).cxx_destruct;	// IMP=0x0000000100be038c

@end

