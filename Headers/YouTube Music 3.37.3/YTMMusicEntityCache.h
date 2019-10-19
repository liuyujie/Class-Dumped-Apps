//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString;
@protocol YTEntityStore;

@interface YTMMusicEntityCache : NSObject <YTSystemNotificationsObserver>
{
    id <YTEntityStore> _entityStore;
    NSMutableDictionary *_likePlaylistIDToEntityKeyMap;
    NSMutableDictionary *_likeVideoIDToEntityKeyMap;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)appDidReceiveMemoryWarning:(id)arg1;
- (void)addEntityToLikeIDMaps:(id)arg1;
- (id)entityModelForLikeVideoID:(id)arg1;
- (id)entityModelForLikePlaylistID:(id)arg1;
- (id)entityModelForReference:(id)arg1;
- (void)removeMusicEntityCacheObserver:(id)arg1;
- (void)removeMusicEntityCacheObserver:(id)arg1 forEntityReference:(id)arg2;
- (void)addMusicEntityCacheObserver:(id)arg1 forEntityReference:(id)arg2 includeUserDetail:(_Bool)arg3;
- (void)addMusicEntityCacheObserver:(id)arg1 forEntityReference:(id)arg2;
- (id)entityReferenceAtIndex:(unsigned long long)arg1 withAlbumEntityReference:(id)arg2;
- (void)addEntity:(id)arg1;
- (void)addPayloadsArray:(id)arg1;
- (void)loadEntityPayloadsContainer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
