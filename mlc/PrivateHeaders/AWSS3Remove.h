//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber;

@interface AWSS3Remove : AWSModel
{
    NSArray *_objects;	// 8 = 0x8
    NSNumber *_quiet;	// 16 = 0x10
}

+ (id)objectsJSONTransformer;	// IMP=0x0000000100bfc668
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bfc5d4
@property(retain, nonatomic) NSNumber *quiet; // @synthesize quiet=_quiet;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;	// IMP=0x0000000100bfc6f4

@end
