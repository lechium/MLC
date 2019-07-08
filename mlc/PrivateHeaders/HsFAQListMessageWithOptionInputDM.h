//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsFAQListMessageDM.h"

@class HsOptionInput, NSArray;

@interface HsFAQListMessageWithOptionInputDM : HsFAQListMessageDM
{
    NSArray *_readFAQs;	// 8 = 0x8
    HsOptionInput *_input;	// 16 = 0x10
}

@property(retain) HsOptionInput *input; // @synthesize input=_input;
- (void).cxx_destruct;	// IMP=0x00000001013b266c
- (void)sendSuggestionsReadEvent:(id)arg1 user:(id)arg2 questionServerId:(id)arg3 questionPublishId:(id)arg4 withError:(id *)arg5;	// IMP=0x00000001013b2464
- (void)populateReadFAQs;	// IMP=0x00000001013b22fc
- (void)updateDependenciesWithPlatform:(id)arg1 domain:(id)arg2;	// IMP=0x00000001013b2284
- (void)merge:(id)arg1;	// IMP=0x00000001013b21c0
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 faqs:(id)arg4 botInfo:(id)arg5 required:(_Bool)arg6 inputLabel:(id)arg7 skipLabel:(id)arg8 options:(id)arg9 isSuggestionsReadEventSent:(_Bool)arg10 suggestionsReadFAQPublishId:(id)arg11;	// IMP=0x00000001013b1fe0
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 faqs:(id)arg4 botInfo:(id)arg5 required:(_Bool)arg6 inputLabel:(id)arg7 skipLabel:(id)arg8 options:(id)arg9;	// IMP=0x00000001013b1e50

@end

