//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseViewController.h"

@class NSLayoutConstraint, NSString, UITableView, UIView;

@interface _TtC6fiverr19StoreViewController : FVRBaseViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: tableViewFullScreenTopConstraint
    // Error parsing type: , name: tableViewNavBarTopConstraint
    // Error parsing type: , name: tableViewBottomConstraint
    // Error parsing type: , name: navBarContainer
    // Error parsing type: , name: navBarContainerHeightConstraint
    // Error parsing type: , name: navBar
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: pageName
    // Error parsing type: , name: documentInteractionController
    // Error parsing type: , name: originalSearchQuery
    // Error parsing type: , name: isFullScreen
    // Error parsing type: , name: statusStyle
    // Error parsing type: , name: referrer
    // Error parsing type: , name: $__lazy_storage_$_impressionManager
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)referralManagerViewDidLoadReport;
- (void)analyticsManagerReportShowEvent;
- (id)analyticsManagerScreenName;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 referrer:(id)arg2 originalSearchQuery:(id)arg3;
@property(nonatomic, copy) NSString *referrer;
@property(nonatomic) __weak NSLayoutConstraint *navBarContainerHeightConstraint; // @synthesize navBarContainerHeightConstraint;
@property(nonatomic) __weak UIView *navBarContainer; // @synthesize navBarContainer;
@property(nonatomic) __weak NSLayoutConstraint *tableViewBottomConstraint; // @synthesize tableViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tableViewNavBarTopConstraint; // @synthesize tableViewNavBarTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tableViewFullScreenTopConstraint; // @synthesize tableViewFullScreenTopConstraint;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end
