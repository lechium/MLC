//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3S3KeyFilter;

@interface AWSS3NotificationConfigurationFilter : AWSModel
{
    AWSS3S3KeyFilter *_key;	// 8 = 0x8
}

+ (id)keyJSONTransformer;	// IMP=0x0000000100c0ba24
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0b9ac
@property(retain, nonatomic) AWSS3S3KeyFilter *key; // @synthesize key=_key;
- (void).cxx_destruct;	// IMP=0x0000000100c0ba8c

@end
