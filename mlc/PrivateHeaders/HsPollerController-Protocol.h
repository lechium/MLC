//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsDomain;

@protocol HsPollerController <NSObject>
@property(readonly, nonatomic) unsigned long long currentPollerType;
- (void)eventOccured:(unsigned long long)arg1;
- (void)switchToPollerType:(unsigned long long)arg1;
- (void)addListener:(id <HsPollListener>)arg1;
- (void)setDomain:(HsDomain *)arg1;
- (id)initWithPlatform:(id <HsPlatform>)arg1 domain:(HsDomain *)arg2 pollListener:(id <HsPollListener>)arg3;
@end

