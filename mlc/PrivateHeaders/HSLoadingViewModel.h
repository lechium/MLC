//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSUserSetupStateListener.h"

@class HSReachability, NSString;

@interface HSLoadingViewModel : NSObject <HSUserSetupStateListener>
{
    id <HSLoadingRenderer> _renderer;	// 8 = 0x8
    HSReachability *_reachability;	// 16 = 0x10
}

@property(retain, nonatomic) HSReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) __weak id <HSLoadingRenderer> renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;	// IMP=0x0000000101461228
- (void)onNetworkUnavailable;	// IMP=0x0000000101461194
- (void)onNetworkAvailable;	// IMP=0x0000000101460fe4
- (void)setUpRechability;	// IMP=0x0000000101460f2c
- (void)handleNetworkChange:(id)arg1;	// IMP=0x0000000101460edc
- (void)userSetupStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forUser:(id)arg3;	// IMP=0x0000000101460d60
- (void)handleAuthenticationFailure:(id)arg1;	// IMP=0x0000000101460d20
- (void)setup;	// IMP=0x0000000101460bec
- (void)dealloc;	// IMP=0x0000000101460b14
- (id)initWithRenderer:(id)arg1;	// IMP=0x0000000101460a90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

