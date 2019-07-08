//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface FBSDKLikeBoxBorderView : UIView
{
    double _borderCornerRadius;	// 8 = 0x8
    double _borderWidth;	// 16 = 0x10
    unsigned long long _caretPosition;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    UIColor *_fillColor;	// 40 = 0x28
    UIColor *_foregroundColor;	// 48 = 0x30
}

@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long caretPosition; // @synthesize caretPosition=_caretPosition;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
- (void).cxx_destruct;	// IMP=0x000000010071f560
- (void)_initializeContent;	// IMP=0x000000010071f3e4
- (struct UIEdgeInsets)_borderInsets;	// IMP=0x000000010071f2f0
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010071e7d0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010071e718
- (void)layoutSubviews;	// IMP=0x000000010071e63c
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010071e5bc
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000010071e260
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010071e204
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010071e1a8

@end
