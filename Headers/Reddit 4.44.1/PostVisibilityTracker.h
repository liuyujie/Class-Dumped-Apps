//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary;

@interface PostVisibilityTracker : NSObject
{
    _Bool _isSeenItemsToHistoryEnabled;
    NSMapTable *_postVisibleTimeStampMap;
    NSMutableDictionary *_postOnScreenTimeStampDict;
    NSMutableArray *_postOnScreenTimeStamps;
}

@property(retain, nonatomic) NSMutableArray *postOnScreenTimeStamps; // @synthesize postOnScreenTimeStamps=_postOnScreenTimeStamps;
@property(retain, nonatomic) NSMutableDictionary *postOnScreenTimeStampDict; // @synthesize postOnScreenTimeStampDict=_postOnScreenTimeStampDict;
@property(retain, nonatomic) NSMapTable *postVisibleTimeStampMap; // @synthesize postVisibleTimeStampMap=_postVisibleTimeStampMap;
@property(nonatomic) _Bool isSeenItemsToHistoryEnabled; // @synthesize isSeenItemsToHistoryEnabled=_isSeenItemsToHistoryEnabled;
- (void).cxx_destruct;
- (void)trackDidEndDisplayingPost:(id)arg1;
- (void)trackWillDisplayPost:(id)arg1;
- (void)addSeenPostToHistory:(id)arg1 start:(id)arg2 end:(id)arg3;
- (void)stopTrackVisiblePost:(id)arg1;
- (void)stopTrackVisibleAll;
- (void)startTrackVisiblePost:(id)arg1;
- (id)analyticsParams;
- (void)resetPostTimeStamps;
- (id)initWithIsSeenItemsToHistoryEnabled:(_Bool)arg1;

@end
