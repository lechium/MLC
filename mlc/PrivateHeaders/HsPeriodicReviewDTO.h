//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsPeriodicReviewDTO : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    int _interval;	// 12 = 0xc
    int _type;	// 16 = 0x10
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) int interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithEnabled:(_Bool)arg1 interval:(int)arg2 type:(int)arg3;	// IMP=0x000000010148c404

@end

