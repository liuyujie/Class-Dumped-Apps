//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGPostLiveCommentStore : NSObject
{
    long long _latestOffset;
    long long _nextFetchOffset;
    NSMutableDictionary *_offsetToCommentModels;
    NSMutableDictionary *_offsetToPinnedCommentModel;
}

@property(readonly, copy, nonatomic) NSMutableDictionary *offsetToPinnedCommentModel; // @synthesize offsetToPinnedCommentModel=_offsetToPinnedCommentModel;
@property(readonly, copy, nonatomic) NSMutableDictionary *offsetToCommentModels; // @synthesize offsetToCommentModels=_offsetToCommentModels;
@property(nonatomic) long long nextFetchOffset; // @synthesize nextFetchOffset=_nextFetchOffset;
@property(nonatomic) long long latestOffset; // @synthesize latestOffset=_latestOffset;
- (void).cxx_destruct;
- (id)pinnedCommentForOffset:(long long)arg1;
- (id)commentsForOffset:(long long)arg1;
- (void)removeComment:(id)arg1;
- (void)processCommentsChunk:(id)arg1;
- (id)init;

@end

