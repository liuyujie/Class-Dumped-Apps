//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEOneDayVideoCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEGestureCollectionView, NSArray, NSDictionary, NSString, UICollectionViewFlowLayout;
@protocol AWEOrangeStoryDetailCollectionViewDelegate;

@interface AWEOrangeStoryDetailCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEOneDayVideoCellDelegate>
{
    _Bool _isDraging;
    _Bool _isScrolling;
    _Bool _toastOtherView;
    _Bool _requestNoMore;
    _Bool _showViewBoard;
    _Bool _firstCollectionViewAppear;
    _Bool _firstViewBoardAppear;
    _Bool _isAppear;
    _Bool _isDisappearing;
    AWEGestureCollectionView *_collectionView;
    id <AWEOrangeStoryDetailCollectionViewDelegate> _delegate;
    long long _userIndex;
    NSArray *_modelsArray;
    UICollectionViewFlowLayout *_collectionLayout;
    NSDictionary *_tracker;
    double _offset;
}

@property(nonatomic) _Bool isDisappearing; // @synthesize isDisappearing=_isDisappearing;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) _Bool firstViewBoardAppear; // @synthesize firstViewBoardAppear=_firstViewBoardAppear;
@property(nonatomic) _Bool firstCollectionViewAppear; // @synthesize firstCollectionViewAppear=_firstCollectionViewAppear;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSDictionary *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) NSArray *modelsArray; // @synthesize modelsArray=_modelsArray;
@property(nonatomic) long long userIndex; // @synthesize userIndex=_userIndex;
@property(nonatomic) __weak id <AWEOrangeStoryDetailCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWEGestureCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool showViewBoard; // @synthesize showViewBoard=_showViewBoard;
@property(nonatomic) _Bool requestNoMore; // @synthesize requestNoMore=_requestNoMore;
@property(nonatomic) _Bool toastOtherView; // @synthesize toastOtherView=_toastOtherView;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isDraging; // @synthesize isDraging=_isDraging;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *curUserAvatarView;
- (id)currentVisiableCell;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)transformCellInCollectionView;
- (void)oneDayVideoCellViewControllerCloseClicked;
- (void)oneDayVideoCellViewControllerLeaveCurrentAuthor:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)updateVolume:(double)arg1;
- (void)collectionUserChangeType:(long long)arg1;
- (_Bool)allowGstExit;
- (_Bool)allowGstRightExit;
- (_Bool)allowGstLeftExit;
- (void)stop;
- (void)pause;
- (void)play;
- (void)noticePause:(id)arg1;
- (void)noticePlay:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)dislikeUser:(id)arg1;
- (void)refreshTracker:(id)arg1;
- (void)refreshStoryModels:(id)arg1 startIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

