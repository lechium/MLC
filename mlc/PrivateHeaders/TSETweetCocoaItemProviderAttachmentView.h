//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TSETweetAttachmentCocoaItemProvider, TSETweetAttachmentView, UIActivityIndicatorView;

@interface TSETweetCocoaItemProviderAttachmentView : UIView
{
    _Bool _hasStartedLoadingAttachment;	// 8 = 0x8
    _Bool _isLoading;	// 9 = 0x9
    TSETweetAttachmentCocoaItemProvider *_attachment;	// 16 = 0x10
    UIActivityIndicatorView *_loadingIndicator;	// 24 = 0x18
    TSETweetAttachmentView *_underlyingAttachmentView;	// 32 = 0x20
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasStartedLoadingAttachment; // @synthesize hasStartedLoadingAttachment=_hasStartedLoadingAttachment;
@property(retain, nonatomic) TSETweetAttachmentView *underlyingAttachmentView; // @synthesize underlyingAttachmentView=_underlyingAttachmentView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) TSETweetAttachmentCocoaItemProvider *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;	// IMP=0x000000010088fd24
- (void)setUpUnderlyingAttachmentViewConstraints;	// IMP=0x000000010088f9c4
- (void)setUpBasicConstraints;	// IMP=0x000000010088f734
- (void)updateWithUnderlyingAttachment:(id)arg1;	// IMP=0x000000010088f404
- (void)updateWithError:(id)arg1;	// IMP=0x000000010088f2d8
- (void)updateWithImage:(id)arg1;	// IMP=0x000000010088f258
- (void)updateWithURL:(id)arg1 previewImage:(id)arg2;	// IMP=0x000000010088f164
- (void)loadMetadataForURLItemProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010088eeb8
- (void)startLoadingAttachmentIfNeeded;	// IMP=0x000000010088ea98
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000010088ea3c
- (id)initWithItemProviderAttachment:(id)arg1;	// IMP=0x000000010088e958

@end

