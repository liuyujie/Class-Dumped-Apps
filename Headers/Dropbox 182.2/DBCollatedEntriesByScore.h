//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBCollatedEntriesProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface DBCollatedEntriesByScore : NSObject <DBCollatedEntriesProtocol>
{
    CDUnknownBlockType _collationKeyAccessor;
    CDUnknownBlockType _secondaryComparator;
    NSMutableArray *_scoreEntries;
}

+ (unsigned long long)db_indexOfEntry:(id)arg1 inArrayOfScoreEntries:(id)arg2;
+ (id)db_sortedEntriesFromEntries:(id)arg1 secondaryComparator:(CDUnknownBlockType)arg2;
+ (id)db_scoreEntriesFromEntries:(id)arg1 accessor:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)printableDescription;
- (long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)sectionIndexTitles;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
- (void)enumerateEntryInSection:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)entryInSection:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (id)indexPathForEntry:(id)arg1;
- (id)removeEntries:(id)arg1;
- (id)addEntries:(id)arg1;
- (id)initWithCollationKeyAccessor:(CDUnknownBlockType)arg1 secondaryComparator:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

