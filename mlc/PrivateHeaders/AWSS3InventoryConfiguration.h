//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3InventoryDestination, AWSS3InventoryFilter, AWSS3InventorySchedule, NSArray, NSNumber, NSString;

@interface AWSS3InventoryConfiguration : AWSModel
{
    AWSS3InventoryDestination *_destination;	// 8 = 0x8
    AWSS3InventoryFilter *_filter;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    long long _includedObjectVersions;	// 32 = 0x20
    NSNumber *_isEnabled;	// 40 = 0x28
    NSArray *_optionalFields;	// 48 = 0x30
    AWSS3InventorySchedule *_schedule;	// 56 = 0x38
}

+ (id)scheduleJSONTransformer;	// IMP=0x0000000100c05520
+ (id)includedObjectVersionsJSONTransformer;	// IMP=0x0000000100c053dc
+ (id)filterJSONTransformer;	// IMP=0x0000000100c05398
+ (id)destinationJSONTransformer;	// IMP=0x0000000100c05354
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c05248
@property(retain, nonatomic) AWSS3InventorySchedule *schedule; // @synthesize schedule=_schedule;
@property(retain, nonatomic) NSArray *optionalFields; // @synthesize optionalFields=_optionalFields;
@property(retain, nonatomic) NSNumber *isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) long long includedObjectVersions; // @synthesize includedObjectVersions=_includedObjectVersions;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AWSS3InventoryFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) AWSS3InventoryDestination *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;	// IMP=0x0000000100c0565c

@end

