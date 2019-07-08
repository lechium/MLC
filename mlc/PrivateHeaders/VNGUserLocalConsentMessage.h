//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "VNGPersistable.h"

@class NSString;

@interface VNGUserLocalConsentMessage : NSObject <NSCoding, VNGPersistable>
{
    NSString *_consentMessageTitleText;	// 8 = 0x8
    NSString *_consentMessageBodyText;	// 16 = 0x10
    NSString *_consentAcceptButtonText;	// 24 = 0x18
    NSString *_consentDenyButtonText;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *consentDenyButtonText; // @synthesize consentDenyButtonText=_consentDenyButtonText;
@property(copy, nonatomic) NSString *consentAcceptButtonText; // @synthesize consentAcceptButtonText=_consentAcceptButtonText;
@property(copy, nonatomic) NSString *consentMessageBodyText; // @synthesize consentMessageBodyText=_consentMessageBodyText;
@property(copy, nonatomic) NSString *consentMessageTitleText; // @synthesize consentMessageTitleText=_consentMessageTitleText;
- (void).cxx_destruct;	// IMP=0x0000000100aa4b34
- (long long)persistenceChannel;	// IMP=0x0000000100aa4abc
- (id)persistenceCategory;	// IMP=0x0000000100aa4a90
- (id)persistenceKey;	// IMP=0x0000000100aa4a64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100aa4920
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100aa47e4
- (id)init;	// IMP=0x0000000100aa47b8
- (id)initWithConsentTitle:(id)arg1 consentBody:(id)arg2 acceptText:(id)arg3 denyText:(id)arg4;	// IMP=0x0000000100aa4698

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
