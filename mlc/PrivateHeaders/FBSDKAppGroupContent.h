//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FBSDKAppGroupContent : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSString *_groupDescription;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _privacy;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100720b64
@property(nonatomic) unsigned long long privacy; // @synthesize privacy=_privacy;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
- (void).cxx_destruct;	// IMP=0x0000000100720e3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100720d38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100720c88
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100720b6c
- (_Bool)isEqualToAppGroupContent:(id)arg1;	// IMP=0x0000000100720a3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001007209ac
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
