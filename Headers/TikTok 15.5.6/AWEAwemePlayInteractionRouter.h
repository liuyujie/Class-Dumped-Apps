//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeModel, AWEAwemePlayInteractionPresenter, NSDictionary, NSString;

@interface AWEAwemePlayInteractionRouter : NSObject
{
    _Bool _isRecommendedCard;
    _Bool _isEnteringLive;
    AWEAwemePlayInteractionPresenter *_presenter;
    NSString *_referString;
    NSDictionary *_logExtraDict;
    NSString *_enterFrom;
    AWEAwemeModel *_model;
    AWEAwemeModel *_fromModel;
    unsigned long long _eventSource;
    NSString *_adEventName;
    long long _fromPageType;
}

@property(nonatomic) _Bool isEnteringLive; // @synthesize isEnteringLive=_isEnteringLive;
@property(nonatomic) long long fromPageType; // @synthesize fromPageType=_fromPageType;
@property(copy, nonatomic) NSString *adEventName; // @synthesize adEventName=_adEventName;
@property(nonatomic) unsigned long long eventSource; // @synthesize eventSource=_eventSource;
@property(retain, nonatomic) AWEAwemeModel *fromModel; // @synthesize fromModel=_fromModel;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isRecommendedCard; // @synthesize isRecommendedCard=_isRecommendedCard;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) __weak AWEAwemePlayInteractionPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (id)realModel;
- (void)enterUnfollowAcquaintance;
- (void)enterLikedUser;
- (void)enterRepostedUser;
- (void)enterInviteUser;
- (void)enterDiggedUser;
- (void)enterUserDetailWithEnterMethod:(id)arg1 enterPosition:(id)arg2;
- (void)enterMusicDetailWithRouterDict:(id)arg1;
- (void)onLongVideoTagClicked:(id)arg1 isRepost:(_Bool)arg2;
- (void)onLearnMoreViewClicked:(id)arg1;
- (void)onDescriptionLabelClicked:(id)arg1 url:(id)arg2;
- (void)onAdDescriptionClicked:(id)arg1 url:(id)arg2;
- (void)onGameButtonTapped:(id)arg1;
- (void)onMediumButtonTapped:(id)arg1;
- (void)onCountryLabelClicked:(id)arg1;
- (void)onVastButtonTapped:(id)arg1;
- (void)onIronManButtonTapped:(id)arg1;
- (void)onLinkAdButtonClicked:(id)arg1;
- (void)onTaskLinkButtonClicked:(id)arg1;
- (void)onStarAtlasLinkButtonClicked:(id)arg1;
- (void)onDouLinkButtonClicked:(id)arg1;
- (void)onXiguaTaskLabelClicked:(id)arg1;
- (void)onStickerLabelClicked:(id)arg1;
- (void)onMvLabelClicked:(id)arg1;
- (void)onOpenPlatformLabelClicked:(id)arg1;
- (void)onGoodsLinkLabelClicked:(id)arg1;
- (void)onGoodsSeedingButtonClicked:(id)arg1;
- (void)p_onCommonAnchorClicked:(id)arg1 type:(unsigned long long)arg2;
- (void)onTripAdvisorClicked:(id)arg1;
- (void)onYelpClicked:(id)arg1;
- (void)handleWikipediaAnchorClicked;
- (void)onWikipediaLabelClicked:(id)arg1;
- (void)onPoiLabelClicked:(id)arg1 enterMethod:(id)arg2;
- (void)onChallengeLabelClicked:(id)arg1;
- (void)onMusicButtonClicked:(id)arg1 routerDict:(id)arg2;
- (void)onAuthorLabelClicked:(id)arg1 enterPosition:(id)arg2;
- (void)onAuthorLabelClicked:(id)arg1;
- (void)onUnreadStoryUserAvatarViewClicked:(id)arg1;
- (void)onLiveUserAvatarViewClicked:(id)arg1 exitOldRoom:(_Bool)arg2;
- (void)onAdLiveUserAvatarViewClicked:(id)arg1 exitOldRoom:(_Bool)arg2;
- (void)onAttractionViewTapped:(id)arg1;
- (void)onUserAvatarViewClicked:(id)arg1 enterPosition:(id)arg2;
- (void)onUserAvatarViewClicked:(id)arg1;
- (void)reset;

@end

