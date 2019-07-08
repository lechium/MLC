//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSInputStream, NSString;

@interface MidasIAPHTTPBodyPart : NSObject <NSCopying>
{
    int _phase;	// 8 = 0x8
    NSInputStream *_inputStream;	// 16 = 0x10
    unsigned long long _phaseReadOffset;	// 24 = 0x18
    _Bool _hasInitialBoundary;	// 32 = 0x20
    _Bool _hasFinalBoundary;	// 33 = 0x21
    unsigned long long _stringEncoding;	// 40 = 0x28
    NSDictionary *_headers;	// 48 = 0x30
    NSString *_boundary;	// 56 = 0x38
    id _body;	// 64 = 0x40
    unsigned long long _bodyContentLength;	// 72 = 0x48
}

@property(nonatomic) _Bool hasFinalBoundary; // @synthesize hasFinalBoundary=_hasFinalBoundary;
@property(nonatomic) _Bool hasInitialBoundary; // @synthesize hasInitialBoundary=_hasInitialBoundary;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) unsigned long long bodyContentLength; // @synthesize bodyContentLength=_bodyContentLength;
@property(retain, nonatomic) id body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;	// IMP=0x000000010059e19c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010059df5c
- (_Bool)transitionToNextPhase;	// IMP=0x000000010059dd54
- (long long)readData:(id)arg1 intoBuffer:(char *)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x000000010059dc7c
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000010059d8c4
@property(readonly, nonatomic, getter=hasBytesAvailable) _Bool bytesAvailable;
@property(readonly, nonatomic) unsigned long long contentLength;
- (id)stringForHeaders;	// IMP=0x000000010059d350
- (void)dealloc;	// IMP=0x000000010059d0a4
- (id)init;	// IMP=0x000000010059d02c

@end

