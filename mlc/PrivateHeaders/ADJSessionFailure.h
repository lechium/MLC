//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface ADJSessionFailure : NSObject <NSCopying>
{
    _Bool _willRetry;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSString *_timeStamp;	// 24 = 0x18
    NSString *_adid;	// 32 = 0x20
    NSDictionary *_jsonResponse;	// 40 = 0x28
}

+ (id)sessionFailureResponseData;	// IMP=0x000000010078b2fc
@property(retain, nonatomic) NSDictionary *jsonResponse; // @synthesize jsonResponse=_jsonResponse;
@property(nonatomic) _Bool willRetry; // @synthesize willRetry=_willRetry;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x000000010078b6b8
- (id)description;	// IMP=0x000000010078b4fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010078b32c
- (id)init;	// IMP=0x000000010078b294

@end

