//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBCollectionModel-Protocol.h"
#import "DBCollectionModelObserving-Protocol.h"
#import "DBCollectionModelUpdateDelegating-Protocol.h"

@class DBCollectionViewModelObjectSelectionBehavior, DBObserverHandle, DBWeakObserverMap, NSArray, NSError, NSMapTable, NSMutableOrderedSet, NSString;
@protocol DBCollectionModelEnumerable, DBCollectionModelUpdateDelegate, DBModelContext;

@interface DBCollectionViewModelObjectSelection : NSObject <DBCollectionModelObserving, DBCollectionModel, DBCollectionModelUpdateDelegating>
{
    DBObserverHandle *_collectionModelObserverHandle;
    unsigned long long _overflowBehavior;
    NSMutableOrderedSet *_selectionSet;
    DBWeakObserverMap *_observerMap;
    CDUnknownBlockType _uniqueIdentifierProvider;
    DBObserverHandle *_behaviorHandle;
    NSMapTable *_objectIdCache;
    long long _cachedCount;
    NSArray *_cachedAllObjects;
    NSString *_modelObjectId;
    id <DBCollectionModelUpdateDelegate> _updateDelegate;
    unsigned long long _maximumCapacity;
    id <DBCollectionModelEnumerable> _collectionModel;
    DBCollectionViewModelObjectSelectionBehavior *_behavior;
}

+ (id)selectionWithIdentifier:(id)arg1 collectionModel:(id)arg2 maximumCapacity:(unsigned long long)arg3 overflowBehavior:(unsigned long long)arg4 uniqueIdentifierProvider:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) DBCollectionViewModelObjectSelectionBehavior *behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) id <DBCollectionModelEnumerable> collectionModel; // @synthesize collectionModel=_collectionModel;
@property(readonly, nonatomic) unsigned long long maximumCapacity; // @synthesize maximumCapacity=_maximumCapacity;
@property(nonatomic) __weak id <DBCollectionModelUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(readonly, copy, nonatomic) NSString *modelObjectId; // @synthesize modelObjectId=_modelObjectId;
- (void).cxx_destruct;
- (void)reloadCollection;
@property(readonly, copy, nonatomic) NSError *lastError;
@property(readonly, nonatomic) long long state;
- (id)registerCollectionObserver:(id)arg1;
@property(readonly, nonatomic) id <DBModelContext> collectionContext;
- (id)modelObjectForSection:(long long)arg1 kind:(id)arg2;
- (long long)numberOfModelObjectsInSection:(long long)arg1;
@property(readonly, nonatomic) long long collectionModelSectionCount;
- (id)modelObjectAtIndexPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *title;
- (void)db_invalidateCachedState;
- (void)db_cleanUpStateForCollectionModelUpdates;
- (void)collectionModel:(id)arg1 didUpdateWithChanges:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)collectionModelDidRefresh:(id)arg1;
- (id)modelObjectForUniqueIdentifier:(id)arg1;
- (id)db_deselectObjectsWithIndexes:(id)arg1;
- (id)db_resetSelection;
- (id)db_deselectObject:(id)arg1;
- (id)db_selectObject:(id)arg1;
- (void)db_notifyObserversOfSelectionChange:(id)arg1;
- (void)db_notifyDelegateOfSelectionChangeWithBlock:(CDUnknownBlockType)arg1 shouldNotifyObservers:(_Bool)arg2;
- (void)deselectObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)db_modelWithUniqueId:(id)arg1;
- (void)resetSelection;
- (_Bool)deselectObject:(id)arg1;
- (_Bool)selectObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)db_orphanedUniqueIds;
- (void)db_pruneOrphanedUniqueIdsAndNotifyObservers:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 collectionModel:(id)arg2 maximumCapacity:(unsigned long long)arg3 overflowBehavior:(unsigned long long)arg4 uniqueIdentifierProvider:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

