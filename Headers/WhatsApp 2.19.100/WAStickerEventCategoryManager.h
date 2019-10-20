//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStickerCategoryPresenting-Protocol.h"

@class NSArray, NSString, UICollectionView, WAPersistentKeyValueStoreCursor, WAStickerStorage;
@protocol WAStickerEventCategoryManagerDelegate;

@interface WAStickerEventCategoryManager : NSObject <WAStickerCategoryPresenting>
{
    WAStickerStorage *_storage;
    NSArray *_stickers;
    _Bool _observeChanges;
    WAPersistentKeyValueStoreCursor *_cursor;
    long long _type;
    UICollectionView *_collectionView;
    id <WAStickerEventCategoryManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAStickerEventCategoryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic, getter=isObseringChanges) _Bool observeChanges; // @synthesize observeChanges=_observeChanges;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) WAStickerStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)stickers;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)loadMoreStickersForCollectionView:(id)arg1;
- (void)eventsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithStickerStorage:(id)arg1 eventType:(long long)arg2 batchSize:(unsigned long long)arg3 observeChanges:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
