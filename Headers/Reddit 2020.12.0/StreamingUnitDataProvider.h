//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataProvider-Protocol.h"

@class NSString, NSUUID, RedditService, Subreddit, _TtC6Reddit13StreamManager;

@interface StreamingUnitDataProvider : NSObject <DataProvider>
{
    RedditService *_service;
    _TtC6Reddit13StreamManager *_streamManager;
    Subreddit *_subreddit;
    unsigned long long _feedType;
    CDUnknownBlockType _completionHandler;
    NSUUID *_parentCorrelationId;
    NSObject *_providerWillFetchObserver;
    NSObject *_parentDidFetchObserver;
}

+ (id)discoveryUnitPkForFeedType:(unsigned long long)arg1 subredditName:(id)arg2;
+ (_Bool)isSubredditEnabled:(id)arg1;
+ (id)enabledSubreddits;
@property(retain, nonatomic) NSObject *parentDidFetchObserver; // @synthesize parentDidFetchObserver=_parentDidFetchObserver;
@property(retain, nonatomic) NSObject *providerWillFetchObserver; // @synthesize providerWillFetchObserver=_providerWillFetchObserver;
@property(copy, nonatomic) NSUUID *parentCorrelationId; // @synthesize parentCorrelationId=_parentCorrelationId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) _TtC6Reddit13StreamManager *streamManager; // @synthesize streamManager=_streamManager;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)fetchSubredditConfig;
- (void)fetchPopularConfig;
- (void)fetchHomeConfig;
- (void)fetchGlobalConfig;
- (void)fetchFromCurrentObjects:(id)arg1 fetchingMore:(_Bool)arg2 pageSize:(long long)arg3 trace:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)configureEarlyReturnable:(CDUnknownBlockType)arg1;
- (void)listingDidFetch;
- (void)registerParentDidFetchObserver;
- (void)registerProviderWillFetchObserver;
- (id)processObjects:(id)arg1 currentCount:(long long)arg2;
- (id)initWithService:(id)arg1 feedType:(unsigned long long)arg2;
- (id)initWithService:(id)arg1 feedType:(unsigned long long)arg2 subreddit:(id)arg3;
- (_Bool)shouldHideUnit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

