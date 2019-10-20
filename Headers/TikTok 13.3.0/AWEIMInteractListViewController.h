//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMChatBannerViewDelegate-Protocol.h"

@class AWEIMChatBannerViewManager, AWEIMFollowRequestView, AWEIMUnreadDotView, CALayer, NSString, UIButton, UILabel, UIView;
@protocol AWEIMChatBannerViewProtocol, AWEIMInteractListViewControllerDelegate;

@interface AWEIMInteractListViewController : NSObject <AWEIMChatBannerViewDelegate>
{
    _Bool _isInCurrentVC;
    UIView *_view;
    long long _followRequestCount;
    id <AWEIMInteractListViewControllerDelegate> _delegate;
    UIButton *_fansBtn;
    UILabel *_fansLabel;
    AWEIMUnreadDotView *_fansDotView;
    UIButton *_diggBtn;
    UILabel *_diggLabel;
    AWEIMUnreadDotView *_diggDotView;
    UIButton *_mentionBtn;
    UILabel *_mentionLabel;
    AWEIMUnreadDotView *_atDotView;
    UIButton *_commentBtn;
    UILabel *_commentLabel;
    AWEIMUnreadDotView *_commentDotView;
    CALayer *_lineLayer;
    UIView *_followRequestContainerView;
    CALayer *_followRequestBottomLineLayer;
    AWEIMFollowRequestView *_followRequestView;
    long long _newFansCount;
    long long _likeMeCount;
    long long _atMeCount;
    long long _commentMeCount;
    long long _oneDayCount;
    long long _voteCount;
    UIView<AWEIMChatBannerViewProtocol> *_bannerView;
    AWEIMChatBannerViewManager *_bannerViewManager;
    double _maximumButtonHeight;
}

@property(nonatomic) double maximumButtonHeight; // @synthesize maximumButtonHeight=_maximumButtonHeight;
@property(retain, nonatomic) AWEIMChatBannerViewManager *bannerViewManager; // @synthesize bannerViewManager=_bannerViewManager;
@property(retain, nonatomic) UIView<AWEIMChatBannerViewProtocol> *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) long long voteCount; // @synthesize voteCount=_voteCount;
@property(nonatomic) long long oneDayCount; // @synthesize oneDayCount=_oneDayCount;
@property(nonatomic) long long commentMeCount; // @synthesize commentMeCount=_commentMeCount;
@property(nonatomic) long long atMeCount; // @synthesize atMeCount=_atMeCount;
@property(nonatomic) long long likeMeCount; // @synthesize likeMeCount=_likeMeCount;
@property(nonatomic) long long newFansCount; // @synthesize newFansCount=_newFansCount;
@property(retain, nonatomic) AWEIMFollowRequestView *followRequestView; // @synthesize followRequestView=_followRequestView;
@property(retain, nonatomic) CALayer *followRequestBottomLineLayer; // @synthesize followRequestBottomLineLayer=_followRequestBottomLineLayer;
@property(retain, nonatomic) UIView *followRequestContainerView; // @synthesize followRequestContainerView=_followRequestContainerView;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) AWEIMUnreadDotView *commentDotView; // @synthesize commentDotView=_commentDotView;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) AWEIMUnreadDotView *atDotView; // @synthesize atDotView=_atDotView;
@property(retain, nonatomic) UILabel *mentionLabel; // @synthesize mentionLabel=_mentionLabel;
@property(retain, nonatomic) UIButton *mentionBtn; // @synthesize mentionBtn=_mentionBtn;
@property(retain, nonatomic) AWEIMUnreadDotView *diggDotView; // @synthesize diggDotView=_diggDotView;
@property(retain, nonatomic) UILabel *diggLabel; // @synthesize diggLabel=_diggLabel;
@property(retain, nonatomic) UIButton *diggBtn; // @synthesize diggBtn=_diggBtn;
@property(retain, nonatomic) AWEIMUnreadDotView *fansDotView; // @synthesize fansDotView=_fansDotView;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UIButton *fansBtn; // @synthesize fansBtn=_fansBtn;
@property(nonatomic) __weak id <AWEIMInteractListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInCurrentVC; // @synthesize isInCurrentVC=_isInCurrentVC;
@property(nonatomic) long long followRequestCount; // @synthesize followRequestCount=_followRequestCount;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (double)interactionHeaderHeight;
- (void)reMakeHeightForLabel:(id)arg1;
@property(readonly, nonatomic) _Bool showFollowRequests;
@property(readonly, nonatomic) double height;
- (void)bannerViewHeightDidChange:(id)arg1;
- (struct CGRect)p_getAccessibilityFrameWithBtnFrame:(struct CGRect)arg1 labelFrame:(struct CGRect)arg2;
- (id)p_generateCommonLabel;
- (void)resetAccessibilityFrame;
- (void)updateLayout;
- (void)p_setupUI;
- (void)commentBtnClicked:(id)arg1;
- (void)atBtnClicked:(id)arg1;
- (void)diggBtnClicked:(id)arg1;
- (void)fansBtnClicked:(id)arg1;
- (void)handleOperateLineLayerNty:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_removeKVO;
- (void)p_addKVO;
- (void)p_trackUnreadNoticeEvent:(id)arg1 count:(long long)arg2 actionType:(id)arg3;
- (void)listViewControllerBannerViewTrack;
- (void)listViewControllerDidAppear;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
