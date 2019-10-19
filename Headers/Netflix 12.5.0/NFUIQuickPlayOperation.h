//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXOperation.h>

@class NSArray;
@protocol _TtP8ArgoCore15ACFSubscription_;

@interface NFUIQuickPlayOperation : NFLXOperation
{
    _Bool _requestFromCache;
    NSArray *_playbackRequests;
    id <_TtP8ArgoCore15ACFSubscription_> _playbackDataRequest;
    unsigned long long _options;
}

@property(nonatomic) _Bool requestFromCache; // @synthesize requestFromCache=_requestFromCache;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) id <_TtP8ArgoCore15ACFSubscription_> playbackDataRequest; // @synthesize playbackDataRequest=_playbackDataRequest;
@property(retain, nonatomic) NSArray *playbackRequests; // @synthesize playbackRequests=_playbackRequests;
- (void).cxx_destruct;
- (void)performVideoPrebuffering;
- (void)prefetchForPlaybackRequest:(id)arg1;
- (void)prefetchForPlaybackRequests:(id)arg1;
- (void)performPlatformPrefetching;
- (void)performPlaybackDataRequest;
- (id)playbackDataEntityObjects;
- (void)performParallelRequests;
- (id)playbackDataKeyPaths;
- (void)main;
- (id)initWithPlaybackRequests:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPlaybackRequests:(id)arg1;

@end
