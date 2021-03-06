//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DBCollectionModel, DBCollectionModelDelta;

@protocol DBCollectionModelObserving <NSObject>

@optional
- (void)collectionModel:(id <DBCollectionModel>)arg1 didLeaveState:(long long)arg2;
- (void)collectionModel:(id <DBCollectionModel>)arg1 willEnterState:(long long)arg2;
- (void)collectionModelDidRefresh:(id <DBCollectionModel>)arg1;
- (void)collectionModel:(id <DBCollectionModel>)arg1 didUpdateWithChanges:(id <DBCollectionModelDelta>)arg2 completionHandler:(void (^)(void))arg3;
@end

