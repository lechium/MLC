//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasIAPQueryStringPair : NSObject
{
    id _field;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id field; // @synthesize field=_field;
- (void).cxx_destruct;	// IMP=0x0000000100599430
- (id)URLEncodedStringValue;	// IMP=0x000000010059900c
- (id)initWithField:(id)arg1 value:(id)arg2;	// IMP=0x0000000100598f44

@end
