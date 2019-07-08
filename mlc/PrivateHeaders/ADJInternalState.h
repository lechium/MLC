//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADJInternalState : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _offline;	// 9 = 0x9
    _Bool _background;	// 10 = 0xa
    _Bool _delayStart;	// 11 = 0xb
    _Bool _updatePackages;	// 12 = 0xc
    _Bool _firstLaunch;	// 13 = 0xd
    _Bool _sessionResponseProcessed;	// 14 = 0xe
}

@property(nonatomic) _Bool sessionResponseProcessed; // @synthesize sessionResponseProcessed=_sessionResponseProcessed;
@property(nonatomic) _Bool firstLaunch; // @synthesize firstLaunch=_firstLaunch;
@property(nonatomic) _Bool updatePackages; // @synthesize updatePackages=_updatePackages;
@property(nonatomic) _Bool delayStart; // @synthesize delayStart=_delayStart;
@property(nonatomic) _Bool background; // @synthesize background=_background;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)hasSessionResponseNotBeenProcessed;	// IMP=0x000000010076a954
- (_Bool)isFirstLaunch;	// IMP=0x000000010076a948
- (_Bool)itHasToUpdatePackages;	// IMP=0x000000010076a93c
- (_Bool)isNotInDelayedStart;	// IMP=0x000000010076a91c
- (_Bool)isInDelayedStart;	// IMP=0x000000010076a910
- (_Bool)isInForeground;	// IMP=0x000000010076a8f0
- (_Bool)isInBackground;	// IMP=0x000000010076a8e4
- (_Bool)isOnline;	// IMP=0x000000010076a8c4
- (_Bool)isOffline;	// IMP=0x000000010076a8b8
- (_Bool)isDisabled;	// IMP=0x000000010076a898
- (_Bool)isEnabled;	// IMP=0x000000010076a88c
- (id)init;	// IMP=0x000000010076a824

@end

