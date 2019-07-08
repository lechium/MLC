//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AWSHTTPURLResponseSerializer.h"

@class NSDictionary, NSString;

@interface AWSS3ResponseSerializer : NSObject <AWSHTTPURLResponseSerializer>
{
    Class _outputClass;	// 8 = 0x8
    NSDictionary *_serviceDefinitionJSON;	// 16 = 0x10
    NSString *_actionName;	// 24 = 0x18
    id <AWSHTTPURLResponseSerializer> _responseSerializer;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0000000100c2810c
@property(retain, nonatomic) id <AWSHTTPURLResponseSerializer> responseSerializer; // @synthesize responseSerializer=_responseSerializer;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSDictionary *serviceDefinitionJSON; // @synthesize serviceDefinitionJSON=_serviceDefinitionJSON;
@property(nonatomic) Class outputClass; // @synthesize outputClass=_outputClass;
- (void).cxx_destruct;	// IMP=0x0000000100c28800
- (_Bool)validateResponse:(id)arg1 fromRequest:(id)arg2 data:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100c286e4
- (id)responseObjectForResponse:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3 data:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100c28324
- (id)initWithJSONDefinition:(id)arg1 actionName:(id)arg2 outputClass:(Class)arg3;	// IMP=0x0000000100c27ebc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

