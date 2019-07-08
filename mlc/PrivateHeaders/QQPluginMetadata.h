//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString;

@interface QQPluginMetadata : NSObject <NSCoding>
{
    int _ApiVersion;	// 8 = 0x8
    NSString *_scheme;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSString *_version;	// 40 = 0x28
    NSDictionary *_iconFiles;	// 48 = 0x30
}

@property(retain, nonatomic) NSDictionary *iconFiles; // @synthesize iconFiles=_iconFiles;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) int ApiVersion; // @synthesize ApiVersion=_ApiVersion;
- (id)description;	// IMP=0x0000000100b34a34
- (void)dealloc;	// IMP=0x0000000100b34990
- (id)init;	// IMP=0x0000000100b34930
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100b347a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100b3468c

@end
