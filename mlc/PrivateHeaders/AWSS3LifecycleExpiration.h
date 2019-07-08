//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSDate, NSNumber;

@interface AWSS3LifecycleExpiration : AWSModel
{
    NSDate *_date;	// 8 = 0x8
    NSNumber *_days;	// 16 = 0x10
    NSNumber *_expiredObjectDeleteMarker;	// 24 = 0x18
}

+ (id)dateJSONTransformer;	// IMP=0x0000000100c06088
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c05fdc
@property(retain, nonatomic) NSNumber *expiredObjectDeleteMarker; // @synthesize expiredObjectDeleteMarker=_expiredObjectDeleteMarker;
@property(retain, nonatomic) NSNumber *days; // @synthesize days=_days;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;	// IMP=0x0000000100c06154

@end

