//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYJceObjectV2.h"

@class BLYRqdSecurity, NSDictionary, NSString;

@interface BLYRqdStrategy : BLYJceObjectV2
{
    _Bool jcev2_p_0_r_enable;	// 8 = 0x8
    _Bool jcev2_p_1_r_enableUserInfo;	// 9 = 0x9
    _Bool jcev2_p_2_r_enableQuery;	// 10 = 0xa
    int jcev2_p_10_o_eventRecordCount;	// 12 = 0xc
    int jcev2_p_11_o_eventTimeInterval;	// 16 = 0x10
    NSString *jcev2_p_3_o_url;	// 24 = 0x18
    NSString *jcev2_p_4_o_expUrl;	// 32 = 0x20
    BLYRqdSecurity *jcev2_p_5_o_security;	// 40 = 0x28
    NSDictionary *jcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString;	// 48 = 0x30
    long long jcev2_p_7_o_strategylastUpdateTime;	// 56 = 0x38
    NSString *jcev2_p_8_o_httpsUrl;	// 64 = 0x40
    NSString *jcev2_p_9_o_httpsExpUrl;	// 72 = 0x48
}

+ (id)jceType;	// IMP=0x00000001007487d8
+ (void)initialize;	// IMP=0x0000000100748684
@property(nonatomic, getter=jce_eventTimeInterval, setter=setJce_eventTimeInterval:) int jcev2_p_11_o_eventTimeInterval; // @synthesize jcev2_p_11_o_eventTimeInterval;
@property(nonatomic, getter=jce_eventRecordCount, setter=setJce_eventRecordCount:) int jcev2_p_10_o_eventRecordCount; // @synthesize jcev2_p_10_o_eventRecordCount;
@property(retain, nonatomic, getter=jce_httpsExpUrl, setter=setJce_httpsExpUrl:) NSString *jcev2_p_9_o_httpsExpUrl; // @synthesize jcev2_p_9_o_httpsExpUrl;
@property(retain, nonatomic, getter=jce_httpsUrl, setter=setJce_httpsUrl:) NSString *jcev2_p_8_o_httpsUrl; // @synthesize jcev2_p_8_o_httpsUrl;
@property(nonatomic, getter=jce_strategylastUpdateTime, setter=setJce_strategylastUpdateTime:) long long jcev2_p_7_o_strategylastUpdateTime; // @synthesize jcev2_p_7_o_strategylastUpdateTime;
@property(retain, nonatomic, getter=jce_valueMap, setter=setJce_valueMap:) NSDictionary *jcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_6_o_valueMap__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=jce_security, setter=setJce_security:) BLYRqdSecurity *jcev2_p_5_o_security; // @synthesize jcev2_p_5_o_security;
@property(retain, nonatomic, getter=jce_expUrl, setter=setJce_expUrl:) NSString *jcev2_p_4_o_expUrl; // @synthesize jcev2_p_4_o_expUrl;
@property(retain, nonatomic, getter=jce_url, setter=setJce_url:) NSString *jcev2_p_3_o_url; // @synthesize jcev2_p_3_o_url;
@property(nonatomic, getter=jce_enableQuery, setter=setJce_enableQuery:) _Bool jcev2_p_2_r_enableQuery; // @synthesize jcev2_p_2_r_enableQuery;
@property(nonatomic, getter=jce_enableUserInfo, setter=setJce_enableUserInfo:) _Bool jcev2_p_1_r_enableUserInfo; // @synthesize jcev2_p_1_r_enableUserInfo;
@property(nonatomic, getter=jce_enable, setter=setJce_enable:) _Bool jcev2_p_0_r_enable; // @synthesize jcev2_p_0_r_enable;
- (void).cxx_destruct;	// IMP=0x0000000100748ad4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100748864
- (unsigned long long)hash;	// IMP=0x0000000100748804
- (id)init;	// IMP=0x00000001007486f8

@end

