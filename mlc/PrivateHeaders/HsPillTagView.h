//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HsLabel, UIImage;

@interface HsPillTagView : UIView
{
    HsLabel *_label;	// 8 = 0x8
    UIView *_borderView;	// 16 = 0x10
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) HsLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;	// IMP=0x0000000101405bf8
@property(readonly, copy, nonatomic) UIImage *image;
- (void)setPillTitle:(id)arg1;	// IMP=0x0000000101405ab4
- (id)attributedString:(id)arg1;	// IMP=0x000000010140592c
- (void)setupBorderViewConstrains;	// IMP=0x0000000101405748
- (void)setupLabelConstrains;	// IMP=0x000000010140555c
- (void)setUpConstrains;	// IMP=0x0000000101405528
- (void)createBorderView;	// IMP=0x00000001014051f8
- (void)createPillLabel;	// IMP=0x0000000101405108
- (void)setupViews;	// IMP=0x00000001014050c4
- (void)awakeFromNib;	// IMP=0x0000000101405074
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010140501c
- (id)init;	// IMP=0x0000000101404fc4

@end
