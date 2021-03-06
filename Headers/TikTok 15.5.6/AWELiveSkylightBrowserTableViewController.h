//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEZoomTransitionInnerContextProvider-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWELiveFeedChannelDataController, AWELiveSkylightBrowserTableView, AWELiveSkylightBrowserTableViewCell, AWEStoryManager, NSString;

@interface AWELiveSkylightBrowserTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEZoomTransitionInnerContextProvider>
{
    _Bool _isFisrtAppear;
    _Bool _isLoadmoreRequestOnAir;
    _Bool _isLoad;
    _Bool _hasRequested;
    _Bool _hasShownRecommendToast;
    _Bool _shouldShowConcernNoMoreToast;
    CDUnknownBlockType _dataChangeBlock;
    NSString *_pageName;
    AWELiveSkylightBrowserTableView *_tableView;
    AWELiveFeedChannelDataController *_recommendedLiveDataController;
    long long _originIndex;
    AWELiveSkylightBrowserTableViewCell *_currentCell;
    AWEStoryManager *_skylightManager;
}

@property(nonatomic) _Bool shouldShowConcernNoMoreToast; // @synthesize shouldShowConcernNoMoreToast=_shouldShowConcernNoMoreToast;
@property(nonatomic) _Bool hasShownRecommendToast; // @synthesize hasShownRecommendToast=_hasShownRecommendToast;
@property(nonatomic) _Bool hasRequested; // @synthesize hasRequested=_hasRequested;
@property(retain, nonatomic) AWEStoryManager *skylightManager; // @synthesize skylightManager=_skylightManager;
@property(nonatomic) __weak AWELiveSkylightBrowserTableViewCell *currentCell; // @synthesize currentCell=_currentCell;
@property(nonatomic) _Bool isLoad; // @synthesize isLoad=_isLoad;
@property(nonatomic) _Bool isLoadmoreRequestOnAir; // @synthesize isLoadmoreRequestOnAir=_isLoadmoreRequestOnAir;
@property(nonatomic) _Bool isFisrtAppear; // @synthesize isFisrtAppear=_isFisrtAppear;
@property(nonatomic) long long originIndex; // @synthesize originIndex=_originIndex;
@property(retain, nonatomic) AWELiveFeedChannelDataController *recommendedLiveDataController; // @synthesize recommendedLiveDataController=_recommendedLiveDataController;
@property(retain, nonatomic) AWELiveSkylightBrowserTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) CDUnknownBlockType dataChangeBlock; // @synthesize dataChangeBlock=_dataChangeBlock;
- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)awesst_enterFrom;
- (void)_setRefreshFooterForTableView;
- (double)_cellForHeight;
- (_Bool)enablePopGesture;
- (long long)zoomTransitionItemOffset;
- (void)_playForCell;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadMoreRecommendedLive;
- (void)requestRecommendedLive;
- (void)loadMoreFromTopBrowser;
- (void)_setupUI;
- (void)keyboardWillShow:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (void)_removeAllObservers;
- (void)_addObservers;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithManger:(id)arg1 withCurrentIndex:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

