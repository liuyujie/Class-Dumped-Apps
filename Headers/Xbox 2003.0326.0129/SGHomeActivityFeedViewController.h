//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGActivityFeedListViewController.h"

@class SGHomeActivityFeedViewModel, UIRefreshControl;
@protocol SGHomeActivityFeedViewControllerDelegate;

@interface SGHomeActivityFeedViewController : SGActivityFeedListViewController
{
    id <SGHomeActivityFeedViewControllerDelegate> _delegate;
    UIRefreshControl *_refreshControl;
}

@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) id <SGHomeActivityFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshFeed;
- (void)onRefreshTriggered:(id)arg1;
- (void)onNeverListAddedBlock:(id)arg1;
- (void)onViewModelDataStateChanged;
- (void)onViewModelPageTitleChanged;
- (void)onNavigatedFrom:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onNavigatedTo:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onDestroy;
- (void)onInitialize;
- (_Bool)supportInlineRefresh;

// Remaining properties
@property(readonly, nonatomic) __weak SGHomeActivityFeedViewModel *viewModel; // @dynamic viewModel;

@end

