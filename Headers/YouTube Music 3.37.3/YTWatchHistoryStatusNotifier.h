//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable;

@interface YTWatchHistoryStatusNotifier : NSObject
{
    NSHashTable *_observers;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyWatchHistoryDidRemoveVideoID:(id)arg1;
- (void)notifyWatchHistoryCleared;
- (void)notifyVideoWatched;
- (void)notifyWatchHistoryPauseStatusDidChange;
- (void)addWatchHistoryStatusObserver:(id)arg1;
- (id)init;

@end
