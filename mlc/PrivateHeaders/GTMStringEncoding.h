//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface GTMStringEncoding : NSObject
{
    NSData *charMapData_;	// 8 = 0x8
    char *charMap_;	// 16 = 0x10
    int reverseCharMap_[128];	// 24 = 0x18
    int shift_;	// 536 = 0x218
    int mask_;	// 540 = 0x21c
    _Bool doPad_;	// 544 = 0x220
    BOOL paddingChar_;	// 545 = 0x221
    int padLen_;	// 548 = 0x224
}

+ (id)stringEncodingWithString:(id)arg1;	// IMP=0x000000010092b298
+ (id)rfc4648Base64WebsafeStringEncoding;	// IMP=0x000000010092b240
+ (id)rfc4648Base64StringEncoding;	// IMP=0x000000010092b1e8
+ (id)crockfordBase32StringEncoding;	// IMP=0x000000010092b1a0
+ (id)rfc4648Base32HexStringEncoding;	// IMP=0x000000010092b148
+ (id)rfc4648Base32StringEncoding;	// IMP=0x000000010092b0f0
+ (id)hexStringEncoding;	// IMP=0x000000010092b0a8
+ (id)binaryStringEncoding;	// IMP=0x000000010092b094
- (id)stringByDecoding:(id)arg1 error:(id *)arg2;	// IMP=0x000000010092bc04
- (id)stringByDecoding:(id)arg1;	// IMP=0x000000010092bbf4
- (id)decode:(id)arg1 error:(id *)arg2;	// IMP=0x000000010092b978
- (id)decode:(id)arg1;	// IMP=0x000000010092b968
- (id)encodeString:(id)arg1 error:(id *)arg2;	// IMP=0x000000010092b8d8
- (id)encodeString:(id)arg1;	// IMP=0x000000010092b8c8
- (id)encode:(id)arg1 error:(id *)arg2;	// IMP=0x000000010092b6ac
- (id)encode:(id)arg1;	// IMP=0x000000010092b69c
- (void)setPaddingChar:(BOOL)arg1;	// IMP=0x000000010092b678
- (void)setDoPad:(_Bool)arg1;	// IMP=0x000000010092b668
- (_Bool)doPad;	// IMP=0x000000010092b658
- (void)ignoreCharacters:(id)arg1;	// IMP=0x000000010092b5f8
- (void)addDecodeSynonyms:(id)arg1;	// IMP=0x000000010092b57c
- (id)description;	// IMP=0x000000010092b520
- (void)dealloc;	// IMP=0x000000010092b4c4
- (id)initWithString:(id)arg1;	// IMP=0x000000010092b2d8

@end

