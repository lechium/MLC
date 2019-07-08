//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol HsMetaDataDAO <NSObject>
- (NSDictionary *)customMetadataWithError:(id *)arg1;
- (void)saveCustomMetadata:(NSDictionary *)arg1 withError:(id *)arg2;
- (NSArray *)breadcrumbDTOsWithError:(id *)arg1;
- (void)leaveBreadcrumbs:(NSArray *)arg1 withError:(id *)arg2;
- (id)initWithPlatform:(id <HsPlatform>)arg1 withError:(id *)arg2;
@end
