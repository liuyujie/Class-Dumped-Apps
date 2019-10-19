//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTINextContinuationData, YTINextRadioContinuationData, YTIPreviousContinuationData;
@protocol YTInnerTubeUIServiceWithTimeoutInterval;

@interface YTMPlaylistContinuationsController : NSObject
{
    id <YTInnerTubeUIServiceWithTimeoutInterval> _watchNextService;
    YTINextContinuationData *_nextContinuationData;
    YTINextRadioContinuationData *_nextRadioContinuationData;
    YTIPreviousContinuationData *_previousContinuationData;
    unsigned long long _nextContinuationRequestID;
    unsigned long long _previousContinuationRequestID;
    unsigned long long _videoRendererRequestID;
}

- (void).cxx_destruct;
- (void)updateNextContinuation:(id)arg1;
- (void)updatePreviousContinuation:(id)arg1;
- (void)makeRequestWithToken:(id)arg1 trackingParams:(id)arg2 requestIDPtr:(inout unsigned long long *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchPlaylistPanelRendererForCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPreviousItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchNextItemsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasNextContinuation;
@property(readonly, nonatomic) _Bool hasPreviousContinuation;
- (void)setContinuations:(id)arg1;
- (id)initWithWatchNextService:(id)arg1;

@end
