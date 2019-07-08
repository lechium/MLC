//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsFaqDbObserver.h"
#import "HsFaqListUIController.h"

@class HSCategoryTagsFilter, HsFaqDbController, HsFaqListModel, NSString;

@interface HsFaqListUIControllerImpl : NSObject <HsFaqListUIController, HsFaqDbObserver>
{
    HsFaqDbController *_dbController;	// 8 = 0x8
    HsFaqListModel *_model;	// 16 = 0x10
    NSString *_sectionPublishId;	// 24 = 0x18
    HSCategoryTagsFilter *_tagsConfig;	// 32 = 0x20
}

@property(retain, nonatomic) HSCategoryTagsFilter *tagsConfig; // @synthesize tagsConfig=_tagsConfig;
@property(retain, nonatomic) NSString *sectionPublishId; // @synthesize sectionPublishId=_sectionPublishId;
@property(retain, nonatomic) HsFaqListModel *model; // @synthesize model=_model;
@property(retain, nonatomic) HsFaqDbController *dbController; // @synthesize dbController=_dbController;
- (void).cxx_destruct;	// IMP=0x00000001013e1528
- (void)addFAQAnalyticEvent:(unsigned long long)arg1;	// IMP=0x00000001013e12c4
- (void)dataUpdationFailedForFaqPublishId:(id)arg1 error:(id)arg2;	// IMP=0x00000001013e11dc
- (void)noChangeInDataForFaqPublishId:(id)arg1;	// IMP=0x00000001013e1154
- (void)dataUpdatedForFaqPublishId:(id)arg1;	// IMP=0x00000001013e0f1c
- (void)loadFaqListItemsForSectionWithPublishId:(id)arg1 tagsFilter:(id)arg2 shouldFetchSections:(_Bool)arg3;	// IMP=0x00000001013e0cdc
- (void)loadFromLocalDatabaseFaqListItemsForSectionWithPublishId:(id)arg1 tagsFilter:(id)arg2;	// IMP=0x00000001013e0b6c
- (unsigned long long)sectionListItemsCountForTagsFilter:(id)arg1;	// IMP=0x00000001013e0ab0
- (void)notifyModelObserverWithSelector:(SEL)arg1;	// IMP=0x00000001013e094c
- (void)dealloc;	// IMP=0x00000001013e08d8
- (id)initWithDataBaseController:(id)arg1;	// IMP=0x00000001013e07dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
