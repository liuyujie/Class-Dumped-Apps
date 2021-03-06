//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGeneratedIntentTarget.h>

@class IGCTAPresenterContext, IGUserSession, NSNumber, NSString;

@interface IGFollowListIntentTarget : FBGeneratedIntentTarget
{
    _Bool _rankByMutualFollowers;
    _Bool _enableLikerListNullState;
    long long _followListType;
    NSString *_contextPK;
    NSString *_contextUsername;
    IGCTAPresenterContext *_ctaPresenterContext;
    NSString *_sourceAnalyticsModule;
    IGUserSession *_userSession;
    double _headerHeight;
    NSNumber *_mutualFollowersCount;
    NSString *_order;
}

@property(readonly, nonatomic) _Bool enableLikerListNullState; // @synthesize enableLikerListNullState=_enableLikerListNullState;
@property(readonly, nonatomic) NSString *order; // @synthesize order=_order;
@property(readonly, nonatomic) NSNumber *mutualFollowersCount; // @synthesize mutualFollowersCount=_mutualFollowersCount;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(readonly, nonatomic) _Bool rankByMutualFollowers; // @synthesize rankByMutualFollowers=_rankByMutualFollowers;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSString *sourceAnalyticsModule; // @synthesize sourceAnalyticsModule=_sourceAnalyticsModule;
@property(readonly, nonatomic) IGCTAPresenterContext *ctaPresenterContext; // @synthesize ctaPresenterContext=_ctaPresenterContext;
@property(readonly, nonatomic) NSString *contextUsername; // @synthesize contextUsername=_contextUsername;
@property(readonly, nonatomic) NSString *contextPK; // @synthesize contextPK=_contextPK;
@property(readonly, nonatomic) long long followListType; // @synthesize followListType=_followListType;
- (void).cxx_destruct;
- (id)initWithFollowListType:(long long)arg1 contextPK:(id)arg2 contextUsername:(id)arg3 ctaPresenterContext:(id)arg4 sourceAnalyticsModule:(id)arg5 userSession:(id)arg6 rankByMutualFollowers:(_Bool)arg7 headerHeight:(double)arg8 mutualFollowersCount:(id)arg9 order:(id)arg10 enableLikerListNullState:(_Bool)arg11;

@end

