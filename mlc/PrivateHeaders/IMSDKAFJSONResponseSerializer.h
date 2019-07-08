//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKAFHTTPResponseSerializer.h"

@interface IMSDKAFJSONResponseSerializer : IMSDKAFHTTPResponseSerializer
{
    _Bool _removesKeysWithNullValues;	// 32 = 0x20
    unsigned long long _readingOptions;	// 40 = 0x28
}

+ (id)serializerWithReadingOptions:(unsigned long long)arg1;	// IMP=0x00000001005f16c4
+ (id)serializer;	// IMP=0x00000001005f16b4
@property(nonatomic) _Bool removesKeysWithNullValues; // @synthesize removesKeysWithNullValues=_removesKeysWithNullValues;
@property(nonatomic) unsigned long long readingOptions; // @synthesize readingOptions=_readingOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001005f2548
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001005f23e0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001005f2240
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x00000001005f17dc
- (id)init;	// IMP=0x00000001005f1710

@end
