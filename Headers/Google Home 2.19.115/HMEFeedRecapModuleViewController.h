//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HMECardsViewControllerDataSource-Protocol.h"
#import "HMECardsViewControllerDelegate-Protocol.h"
#import "HMEFeedRecapCardDisplaying-Protocol.h"
#import "HMEFeedViewModelDisplaying-Protocol.h"

@class HMECardsViewController, HMEFeedRecapCardViewModel, MDCPageControl, NSMutableDictionary, NSString;
@protocol HMEFeedViewModel;

@interface HMEFeedRecapModuleViewController : UIViewController <HMECardsViewControllerDataSource, HMECardsViewControllerDelegate, HMEFeedRecapCardDisplaying, HMEFeedViewModelDisplaying>
{
    HMECardsViewController *_cardsViewController;
    HMEFeedRecapCardViewModel *_recapViewModel;
    MDCPageControl *_pageControl;
    NSMutableDictionary *_cachedViewControllers;
}

@property(readonly, nonatomic) NSMutableDictionary *cachedViewControllers; // @synthesize cachedViewControllers=_cachedViewControllers;
@property(readonly, nonatomic) MDCPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) HMEFeedRecapCardViewModel *recapViewModel; // @synthesize recapViewModel=_recapViewModel;
@property(readonly, nonatomic) HMECardsViewController *cardsViewController; // @synthesize cardsViewController=_cardsViewController;
- (void).cxx_destruct;
- (void)cardsViewController:(id)arg1 willDisplayItemAtIndexPath:(id)arg2;
- (void)cardsViewController:(id)arg1 didScrollToCardAtIndexPath:(id)arg2;
- (id)currentIndexPathInCardsViewController:(id)arg1;
- (void)recapCardViewModel:(id)arg1 willDeleteItemAtIndex:(long long)arg2 deleteBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)recapCardViewModel:(id)arg1 willInsertItemAtIndex:(long long)arg2 insertBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)recapCardViewModel:(id)arg1 didFocusItemAtIndex:(long long)arg2;
- (id)cardsViewController:(id)arg1 viewControllerForCardAtIndexPath:(id)arg2;
- (long long)cardsViewController:(id)arg1 numberOfCardsInSection:(long long)arg2;
- (long long)numberOfSectionsInCardsViewController:(id)arg1;
- (id)cacheKeyForViewModelAtIndexPath:(id)arg1;
- (void)updatePageControl;
- (void)pageControlDidChange:(id)arg1;
@property(retain, nonatomic) id <HMEFeedViewModel> viewModel;
- (void)viewWillLayoutSubviews;
- (void)prepareLayoutForWidth:(double)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

