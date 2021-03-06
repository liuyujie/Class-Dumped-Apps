//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGLivePinnedCommentViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class CAGradientLayer, IGLivePinnedCommentView, NSArray, NSString, UICollectionView;
@protocol IGLiveCommentsContainerViewDelegate;

@interface IGLiveCommentsContainerView : UIView <IGLivePinnedCommentViewDelegate, UIScrollViewDelegate>
{
    double _topContentOffset;
    double _bottomContentOffset;
    _Bool _enabledIncreasedCommentHeight;
    _Bool _isInBroadcastView;
    long long _commentsContainerDisplayMode;
    UICollectionView *_collectionView;
    id <IGLiveCommentsContainerViewDelegate> _delegate;
    UIView *_collectionViewContainer;
    CAGradientLayer *_maskLayer;
    IGLivePinnedCommentView *_pinnedCommentView;
    NSArray *_gradientStyleNone;
    NSArray *_gradientStyleTopOnly;
    NSArray *_gradientStyleBottomOnly;
    NSArray *_gradientStyleTopAndBottom;
    long long _gradientStyle;
}

@property(nonatomic) long long gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property(readonly, nonatomic) NSArray *gradientStyleTopAndBottom; // @synthesize gradientStyleTopAndBottom=_gradientStyleTopAndBottom;
@property(readonly, nonatomic) NSArray *gradientStyleBottomOnly; // @synthesize gradientStyleBottomOnly=_gradientStyleBottomOnly;
@property(readonly, nonatomic) NSArray *gradientStyleTopOnly; // @synthesize gradientStyleTopOnly=_gradientStyleTopOnly;
@property(readonly, nonatomic) NSArray *gradientStyleNone; // @synthesize gradientStyleNone=_gradientStyleNone;
@property(readonly, nonatomic) _Bool isInBroadcastView; // @synthesize isInBroadcastView=_isInBroadcastView;
@property(readonly, nonatomic) IGLivePinnedCommentView *pinnedCommentView; // @synthesize pinnedCommentView=_pinnedCommentView;
@property(readonly, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(readonly, nonatomic) UIView *collectionViewContainer; // @synthesize collectionViewContainer=_collectionViewContainer;
@property(nonatomic) _Bool enabledIncreasedCommentHeight; // @synthesize enabledIncreasedCommentHeight=_enabledIncreasedCommentHeight;
@property(nonatomic) __weak id <IGLiveCommentsContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long commentsContainerDisplayMode; // @synthesize commentsContainerDisplayMode=_commentsContainerDisplayMode;
- (void).cxx_destruct;
- (id)_commentsMaskLocations;
- (double)_commentsMaskMaxHeight;
- (double)_commentsMaxHeight;
- (void)_updateCommentsGradient;
- (void)livePinnedCommentViewDidTapUnpin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_pinnedCommentTapped;
- (_Bool)shouldStickToBottomOfCollectionView;
- (void)scrollToBottomOfCollectionViewAnimated:(_Bool)arg1;
- (_Bool)hasPinnedComment;
- (double)pinnedCommentHeight;
- (_Bool)canExpandCommentsContainer;
- (_Bool)isGestureOnCommentContainer:(id)arg1;
- (void)livePinnedCommentViewHeightDidChange:(id)arg1;
- (void)unpinComment;
- (void)pinComment:(id)arg1 module:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 isInBroadcastView:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

