//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKAFHTTPResponseSerializer.h"

@interface IMSDKAFPropertyListResponseSerializer : IMSDKAFHTTPResponseSerializer
{
    unsigned long long _format;	// 32 = 0x20
    unsigned long long _readOptions;	// 40 = 0x28
}

+ (id)serializerWithFormat:(unsigned long long)arg1 readOptions:(unsigned long long)arg2;	// IMP=0x00000001005f27d4
+ (id)serializer;	// IMP=0x00000001005f27c0
@property(nonatomic) unsigned long long readOptions; // @synthesize readOptions=_readOptions;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001005f2d30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001005f2bc8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001005f2a28
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x00000001005f28f4
- (id)init;	// IMP=0x00000001005f2840

@end
