//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3InventoryConfiguration, NSString;

@interface AWSS3PutBucketInventoryConfigurationRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    AWSS3InventoryConfiguration *_inventoryConfiguration;	// 24 = 0x18
}

+ (id)inventoryConfigurationJSONTransformer;	// IMP=0x0000000100c0d274
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0d1c8
@property(retain, nonatomic) AWSS3InventoryConfiguration *inventoryConfiguration; // @synthesize inventoryConfiguration=_inventoryConfiguration;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c0d324

@end

