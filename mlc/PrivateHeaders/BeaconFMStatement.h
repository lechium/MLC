//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BeaconFMStatement : NSObject
{
    struct sqlite3_stmt *_statement;	// 8 = 0x8
    NSString *_query;	// 16 = 0x10
    long long _useCount;	// 24 = 0x18
    _Bool _inUse;	// 32 = 0x20
}

@property _Bool inUse; // @synthesize inUse=_inUse;
@property long long useCount; // @synthesize useCount=_useCount;
@property(retain) NSString *query; // @synthesize query=_query;
@property struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (void).cxx_destruct;	// IMP=0x00000001007a023c
- (id)description;	// IMP=0x00000001007a010c
- (void)reset;	// IMP=0x00000001007a00d0
- (void)close;	// IMP=0x00000001007a0090
- (void)dealloc;	// IMP=0x00000001007a0040
- (void)finalize;	// IMP=0x000000010079fff0

@end

