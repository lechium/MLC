//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSCognitoIdentityGetOpenIdTokenForDeveloperIdentityResponse : AWSModel
{
    NSString *_identityId;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bdf300
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
- (void).cxx_destruct;	// IMP=0x0000000100bdf3dc

@end

