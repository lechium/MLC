//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TWTRTweetEntity.h"

#import "NSCoding.h"
#import "TWTRJSONConvertible.h"

@class NSString;

@interface TWTRTweetUserMentionEntity : TWTRTweetEntity <NSCoding, TWTRJSONConvertible>
{
    NSString *_userID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_screenName;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;	// IMP=0x0000000100854688
- (id)accessibilityValue;	// IMP=0x000000010085464c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100854510
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001008543a4
- (id)initWithJSONDictionary:(id)arg1;	// IMP=0x0000000100854224

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

