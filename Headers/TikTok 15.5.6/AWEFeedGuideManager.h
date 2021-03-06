//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEFeedGuideManagerProtocol-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"

@class AWEAwemeDiggHintView, AWEAwemeModel, AWEBubble, LOTAnimationView, NSString, UIImageView, UILabel, UITableView, UIView;

@interface AWEFeedGuideManager : NSObject <CAAnimationDelegate, AWEFeedGuideManagerProtocol>
{
    _Bool _transitionToProfileWithClick;
    _Bool _alreadyTryGuideAnimation;
    _Bool _enableAutoplay;
    _Bool _isAutoPlaying;
    _Bool _isDownloading;
    _Bool _isShowingFunctionPage;
    _Bool _isShowedDouPlusToast;
    _Bool _isMultiFuncCoverAnimating;
    _Bool _bounceGuideEnabled;
    _Bool _isShowingGuide;
    _Bool _isNewUser;
    _Bool _closeDiggHintView;
    _Bool _feedFollowGuideViewDismiss;
    _Bool _isShowingLongPressGuide;
    _Bool _enableGuideEnhance;
    _Bool _isShowingFeedTransitionGuide;
    long long _feedCleanScreenStatus;
    AWEAwemeDiggHintView *_diggHintView;
    AWEBubble *_followHintView;
    AWEBubble *_slideHintView;
    AWEBubble *_enterMusicDetailView;
    AWEBubble *_insightsDetailView;
    AWEBubble *_DOUPlusBubbleView;
    AWEBubble *_liveSquareBubbleView;
    UIView *_feedScreenBounceMaskView;
    UIImageView *_handImageView;
    UILabel *_slideUpDownHintLabel;
    UITableView *_tableView;
    long long _screenBounceAnimationTimes;
    CDUnknownBlockType _screenBounceAnimationCompletion;
    UIView *_feedFollowGuideView;
    UIView *_feedFollowgestureRecognizerView;
    LOTAnimationView *_feedFollowGuideAnimationView;
    LOTAnimationView *_longPressGuideAnimationView;
    AWEAwemeModel *_longPressModel;
    struct CGPoint _originOffSet;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isShowingFeedTransitionGuide; // @synthesize isShowingFeedTransitionGuide=_isShowingFeedTransitionGuide;
@property(nonatomic) _Bool enableGuideEnhance; // @synthesize enableGuideEnhance=_enableGuideEnhance;
@property(nonatomic) __weak AWEAwemeModel *longPressModel; // @synthesize longPressModel=_longPressModel;
@property(nonatomic) _Bool isShowingLongPressGuide; // @synthesize isShowingLongPressGuide=_isShowingLongPressGuide;
@property(retain, nonatomic) LOTAnimationView *longPressGuideAnimationView; // @synthesize longPressGuideAnimationView=_longPressGuideAnimationView;
@property(nonatomic) _Bool feedFollowGuideViewDismiss; // @synthesize feedFollowGuideViewDismiss=_feedFollowGuideViewDismiss;
@property(retain, nonatomic) LOTAnimationView *feedFollowGuideAnimationView; // @synthesize feedFollowGuideAnimationView=_feedFollowGuideAnimationView;
@property(nonatomic) __weak UIView *feedFollowgestureRecognizerView; // @synthesize feedFollowgestureRecognizerView=_feedFollowgestureRecognizerView;
@property(retain, nonatomic) UIView *feedFollowGuideView; // @synthesize feedFollowGuideView=_feedFollowGuideView;
@property(copy, nonatomic) CDUnknownBlockType screenBounceAnimationCompletion; // @synthesize screenBounceAnimationCompletion=_screenBounceAnimationCompletion;
@property(nonatomic) struct CGPoint originOffSet; // @synthesize originOffSet=_originOffSet;
@property(nonatomic) long long screenBounceAnimationTimes; // @synthesize screenBounceAnimationTimes=_screenBounceAnimationTimes;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *slideUpDownHintLabel; // @synthesize slideUpDownHintLabel=_slideUpDownHintLabel;
@property(retain, nonatomic) UIImageView *handImageView; // @synthesize handImageView=_handImageView;
@property(retain, nonatomic) UIView *feedScreenBounceMaskView; // @synthesize feedScreenBounceMaskView=_feedScreenBounceMaskView;
@property(retain, nonatomic) AWEBubble *liveSquareBubbleView; // @synthesize liveSquareBubbleView=_liveSquareBubbleView;
@property(retain, nonatomic) AWEBubble *DOUPlusBubbleView; // @synthesize DOUPlusBubbleView=_DOUPlusBubbleView;
@property(retain, nonatomic) AWEBubble *insightsDetailView; // @synthesize insightsDetailView=_insightsDetailView;
@property(retain, nonatomic) AWEBubble *enterMusicDetailView; // @synthesize enterMusicDetailView=_enterMusicDetailView;
@property(retain, nonatomic) AWEBubble *slideHintView; // @synthesize slideHintView=_slideHintView;
@property(retain, nonatomic) AWEBubble *followHintView; // @synthesize followHintView=_followHintView;
@property(nonatomic) _Bool closeDiggHintView; // @synthesize closeDiggHintView=_closeDiggHintView;
@property(retain, nonatomic) AWEAwemeDiggHintView *diggHintView; // @synthesize diggHintView=_diggHintView;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(nonatomic) _Bool isShowingGuide; // @synthesize isShowingGuide=_isShowingGuide;
@property(nonatomic, getter=isBounceGuideEnabled) _Bool bounceGuideEnabled; // @synthesize bounceGuideEnabled=_bounceGuideEnabled;
@property(nonatomic) long long feedCleanScreenStatus; // @synthesize feedCleanScreenStatus=_feedCleanScreenStatus;
@property(nonatomic) _Bool isMultiFuncCoverAnimating; // @synthesize isMultiFuncCoverAnimating=_isMultiFuncCoverAnimating;
@property(nonatomic) _Bool isShowedDouPlusToast; // @synthesize isShowedDouPlusToast=_isShowedDouPlusToast;
@property(nonatomic) _Bool isShowingFunctionPage; // @synthesize isShowingFunctionPage=_isShowingFunctionPage;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(nonatomic) _Bool isAutoPlaying; // @synthesize isAutoPlaying=_isAutoPlaying;
@property(nonatomic) _Bool enableAutoplay; // @synthesize enableAutoplay=_enableAutoplay;
@property(nonatomic) _Bool alreadyTryGuideAnimation; // @synthesize alreadyTryGuideAnimation=_alreadyTryGuideAnimation;
- (void).cxx_destruct;
- (void)resetAllGuides;
- (void)willShareWithContext:(id)arg1 channel:(id)arg2 inView:(id)arg3;
- (void)removeCurrentGuidesUseInSysPushCall;
- (void)dismissCurrentGuides;
- (void)removeLiveSquareGuide:(_Bool)arg1;
- (id)showLiveSquareGuideIfNeed:(id)arg1;
- (_Bool)shouldShowFeedLiveIconAnimation;
- (_Bool)shouldShowLiveSquareGuide;
- (_Bool)checkIfAnimationTypeNeedPlay:(long long)arg1;
- (_Bool)checkHigherPriorityGuideAnimationShouldPlay:(long long)arg1;
- (void)dismissAndStartLongPress:(id)arg1;
- (void)dismissLongPressGuideAnimationView:(id)arg1;
- (id)playMode;
- (void)showLongPressGuideIfNeeded:(id)arg1 model:(id)arg2;
- (void)shouldShowConcernTabGuideIfNeeded:(id)arg1;
- (void)removeDOUPlusEneryGuideBubble;
- (id)showDOUPlusEntryGuideIfNeedInOtherHomePage:(id)arg1;
- (id)showDOUPlusEntryGuideIfNeed:(id)arg1 douplusToastModel:(id)arg2;
- (void)addVideoIDToShownVideoIDDictionary:(id)arg1;
- (void)removeEnterMusicDetailBubble;
- (id)showEnterMusicDetailGuideIfNeeded:(id)arg1;
- (_Bool)shouldShowEnterMusicDetailBubble;
- (_Bool)isShowEnterMusicDetailBubbleShowing;
- (void)removeInsightsBubble;
- (id)showInsightsGuideIfNeeded:(id)arg1;
- (_Bool)checkIfShouldShowShareGuideAnimationWithVideoID:(id)arg1;
- (id)followHintDefaultKey;
- (void)closeFollowHintGuideIfNeeded;
- (void)dismissFeedFollowGuideAnimationView;
- (void)showFeedFollowGuideIfNeededOnView:(id)arg1;
- (void)showFollowHintGuideIfNeededOnView:(id)arg1 frame:(struct CGRect)arg2 userID:(id)arg3;
- (_Bool)shouldShowFollowHintGuide;
- (id)diggHintDefaultKey;
- (_Bool)closeDiggHintGuideIfNeeded;
- (void)_showDiggHintGuideOnView:(id)arg1;
- (void)endFeedScreenBounceAnimation;
- (void)repeatScreenBounceGuideAnimationIfNeeded:(_Bool)arg1;
- (void)beginScreenBounceGuideAnimation:(id)arg1 enableGuideEnhance:(_Bool)arg2;
- (void)beginAnimationWithTableView:(id)arg1 enableGuideEnhance:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginAnimationWithKey:(id)arg1 tableView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginAnimationWithKey:(id)arg1 count:(long long)arg2 tableView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginAnimationWithKey:(id)arg1 tableView:(id)arg2;
- (void)showBounceGuideIfNeeded:(id)arg1;
- (void)showBounceGuideIfNeededOnDiscover:(id)arg1;
- (void)showBounceGuideIfNeededOnTodayHotVideo:(id)arg1;
- (void)showBounceGuideIfNeededOnHotPoint:(id)arg1;
- (void)showBounceGuideIfNeededFromPushPermission;
- (void)disableBounceGuide;
- (void)showDiggHintGuideOnViewIfNeeded:(id)arg1;
@property(nonatomic, getter=isDiggHintGuideEnabled) _Bool diggHintGuideEnabled;
- (_Bool)shouldShowTransitionGuide;
- (void)transitionToProfileWithGesture;
- (void)transitionToProfileWithClick;
- (void)showFeedTransitionGuide:(id)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

