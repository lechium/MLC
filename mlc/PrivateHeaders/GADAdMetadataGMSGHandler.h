//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADSlot;

@interface GADAdMetadataGMSGHandler : GADGMSGHandler
{
    GADSlot *_slot;	// 8 = 0x8
}

+ (id)actionBlockDictionary;	// IMP=0x0000000100979df0
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;	// IMP=0x000000010097a12c
- (void)adView:(id)arg1 didChangeAdMetadataNotification:(id)arg2;	// IMP=0x0000000100979fe0
- (id)initWithSlot:(id)arg1;	// IMP=0x0000000100979f6c
- (id)init;	// IMP=0x0000000100979f54

@end
