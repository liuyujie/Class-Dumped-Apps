//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NFUILabel, NFUISearchBar, NFUISearchDebugger, NFUISearchResultsListViewModel, NFUITabBarItem, NFUITouchGestureRecognizer, NSLayoutConstraint, NSNumber, NSString, UICollectionView, UIView, _TtC4Argo28PrequerySearchListController;
@protocol _TtP8ArgoCore15ACFSubscription_;

@interface _TtC4Argo20SearchViewController : UIViewController
{
    // Error parsing type: , name: searchBarContainer
    // Error parsing type: , name: resultsListContainer
    // Error parsing type: , name: noResultsLabel
    // Error parsing type: , name: bottomGuide
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: searchResultsListViewModel
    // Error parsing type: , name: viewWillAppearTime
    // Error parsing type: , name: nfuiTabBarItem
    // Error parsing type: , name: pendingSearchTerm
    // Error parsing type: , name: becomeFirstResponderOnAppear
    // Error parsing type: , name: debugger
    // Error parsing type: , name: debugMetricId
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: noReduxViewModel
    // Error parsing type: , name: searchOperation
    // Error parsing type: , name: resultsGestureRecognizer
    // Error parsing type: , name: prequeryListContainer
    // Error parsing type: , name: prequeryListController
    // Error parsing type: , name: prequeryListGestureRecognizer
    // Error parsing type: , name: viewDidLoadTime
    // Error parsing type: , name: isShowingDPFromPrequeryList
}

+ (id)searchViewControllerWithPrePopulatedSearchTerm:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)makeSearchFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) NFUITouchGestureRecognizer *prequeryListGestureRecognizer; // @synthesize prequeryListGestureRecognizer;
@property(nonatomic, retain) _TtC4Argo28PrequerySearchListController *prequeryListController; // @synthesize prequeryListController;
@property(nonatomic, retain) UICollectionView *prequeryListContainer; // @synthesize prequeryListContainer;
@property(nonatomic, retain) NFUITouchGestureRecognizer *resultsGestureRecognizer; // @synthesize resultsGestureRecognizer;
@property(nonatomic, retain) id <_TtP8ArgoCore15ACFSubscription_> searchOperation; // @synthesize searchOperation;
@property(nonatomic, retain) NSNumber *debugMetricId; // @synthesize debugMetricId;
@property(nonatomic, readonly) NFUISearchDebugger *debugger; // @synthesize debugger;
@property(nonatomic) _Bool becomeFirstResponderOnAppear; // @synthesize becomeFirstResponderOnAppear;
@property(nonatomic, copy) NSString *pendingSearchTerm;
@property(nonatomic, retain) NFUITabBarItem *nfui_tabBarItem; // @synthesize nfui_tabBarItem=nfuiTabBarItem;
@property(nonatomic, retain) NFUISearchResultsListViewModel *searchResultsListViewModel; // @synthesize searchResultsListViewModel;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView;
@property(nonatomic) __weak NSLayoutConstraint *bottomGuide; // @synthesize bottomGuide;
@property(nonatomic) __weak NFUILabel *noResultsLabel; // @synthesize noResultsLabel;
@property(nonatomic) __weak UICollectionView *resultsListContainer; // @synthesize resultsListContainer;
@property(nonatomic) __weak NFUISearchBar *searchBarContainer; // @synthesize searchBarContainer;

@end

