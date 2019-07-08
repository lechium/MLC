//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsFaqDbObserver.h"

@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HsFaqSearchController : NSObject <HsFaqDbObserver>
{
    id <HsSpecification> _faqSyncSpecification;	// 8 = 0x8
    _Bool _indexingStarted;	// 16 = 0x10
    NSMutableSet *_searchIndexObservers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workerQueue;	// 32 = 0x20
    NSDictionary *_fuzzyIndex;	// 40 = 0x28
    NSString *_tfidfDbPath;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *tfidfDbPath; // @synthesize tfidfDbPath=_tfidfDbPath;
@property(retain, nonatomic) NSDictionary *fuzzyIndex; // @synthesize fuzzyIndex=_fuzzyIndex;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSMutableSet *searchIndexObservers; // @synthesize searchIndexObservers=_searchIndexObservers;
@property(nonatomic) _Bool indexingStarted; // @synthesize indexingStarted=_indexingStarted;
- (void).cxx_destruct;	// IMP=0x000000010143d23c
- (void)notifyObservers;	// IMP=0x000000010143cce4
- (void)dataUpdationFailedForFaqPublishId:(id)arg1 error:(id)arg2;	// IMP=0x000000010143cce0
- (void)noChangeInDataForFaqPublishId:(id)arg1;	// IMP=0x000000010143ccdc
- (void)dataUpdatedForFaqPublishId:(id)arg1;	// IMP=0x000000010143cc08
- (id)getFuzzyIndex;	// IMP=0x000000010143cbfc
- (void)setOnDeviceFaqSearchOption:(short)arg1;	// IMP=0x000000010143ca4c
- (void)updateCoreSpotlightSearchOptionFrom:(short)arg1 to:(short)arg2;	// IMP=0x000000010143c85c
- (void)createIndexesForFaqArray:(id)arg1;	// IMP=0x000000010143c658
- (void)removeCoreSpotlightSearchIndex;	// IMP=0x000000010143c588
- (void)addFaqsToCoreSpotlight:(id)arg1;	// IMP=0x000000010143c574
- (void)unregisterSearchIndexUpdateListener:(id)arg1;	// IMP=0x000000010143c40c
- (void)registerSearchIndexUpdateListener:(id)arg1;	// IMP=0x000000010143c2a0
- (void)createFAQSearchIndex;	// IMP=0x000000010143c010
- (id)createSearchIndex:(id)arg1;	// IMP=0x000000010143bce4
- (id)loadSearchIndex;	// IMP=0x000000010143bcd0
- (id)matchedRangesForKeywords:(id)arg1 onString:(id)arg2;	// IMP=0x000000010143b638
- (id)faqSearchResultTitleArray:(id)arg1 withSearchOptions:(int)arg2 withTagsFilter:(id)arg3;	// IMP=0x000000010143b580
- (id)faqSearchResultTitleArray:(id)arg1 withSearchOptions:(int)arg2;	// IMP=0x000000010143b570
- (id)getFAQSearchResultsForQuery:(id)arg1 withSearchOptions:(int)arg2;	// IMP=0x000000010143ae98
- (id)backupSearchForQuery:(id)arg1;	// IMP=0x000000010143ac88
- (id)getFAQSearchIndex;	// IMP=0x000000010143aa78
- (id)mutableSetForWeakReferencedObjects;	// IMP=0x000000010143aa24
- (void)dealloc;	// IMP=0x000000010143a980
- (id)init;	// IMP=0x000000010143a710

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
