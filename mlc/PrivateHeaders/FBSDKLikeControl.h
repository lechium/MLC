//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "FBSDKLiking.h"

@class FBSDKLikeBoxView, FBSDKLikeButton, NSString, UIColor, UILabel, UIView;

@interface FBSDKLikeControl : UIControl <FBSDKLiking>
{
    _Bool _isExplicitlyDisabled;	// 8 = 0x8
    FBSDKLikeBoxView *_likeBoxView;	// 16 = 0x10
    FBSDKLikeButton *_likeButton;	// 24 = 0x18
    UIView *_likeButtonContainer;	// 32 = 0x20
    UILabel *_socialSentenceLabel;	// 40 = 0x28
    UIColor *_foregroundColor;	// 48 = 0x30
    unsigned long long _likeControlAuxiliaryPosition;	// 56 = 0x38
    unsigned long long _likeControlHorizontalAlignment;	// 64 = 0x40
    unsigned long long _likeControlStyle;	// 72 = 0x48
    double _preferredMaxLayoutWidth;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x0000000100720f7c
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) unsigned long long likeControlStyle; // @synthesize likeControlStyle=_likeControlStyle;
@property(nonatomic) unsigned long long likeControlHorizontalAlignment; // @synthesize likeControlHorizontalAlignment=_likeControlHorizontalAlignment;
@property(nonatomic) unsigned long long likeControlAuxiliaryPosition; // @synthesize likeControlAuxiliaryPosition=_likeControlAuxiliaryPosition;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (void).cxx_destruct;	// IMP=0x0000000100723444
- (void)_updateLikeBoxCaretPosition;	// IMP=0x00000001007232fc
- (void)_updateEnabled;	// IMP=0x000000010072320c
- (void)_likeActionControllerDidUpdateWithAnimated:(_Bool)arg1;	// IMP=0x0000000100722c80
- (void)_likeActionControllerDidUpdateNotification:(id)arg1;	// IMP=0x0000000100722b38
- (void)_likeActionControllerDidDisableNotification:(id)arg1;	// IMP=0x0000000100722b2c
- (struct FBSDKLikeControlLayout)_layoutWithBounds:(struct CGRect)arg1 subviewSizingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100722378
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001007222b8
- (void)_initializeContent;	// IMP=0x0000000100721f24
- (void)_handleLikeButtonTap:(id)arg1;	// IMP=0x0000000100721eec
- (void)_ensureLikeActionController;	// IMP=0x0000000100721e0c
- (double)_auxiliaryViewPadding;	// IMP=0x0000000100721dec
- (id)_auxiliaryView;	// IMP=0x0000000100721cec
- (id)analyticsParameters;	// IMP=0x0000000100721a64
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100721994
- (void)layoutSubviews;	// IMP=0x0000000100721748
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010072165c
@property(nonatomic, getter=isSoundEnabled) _Bool soundEnabled;
- (void)setOpaque:(_Bool)arg1;	// IMP=0x00000001007215c0
@property(nonatomic) unsigned long long objectType;
@property(copy, nonatomic) NSString *objectID;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000001007212d4
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000100721184
- (void)dealloc;	// IMP=0x00000001007210e4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100721088
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100720fd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

