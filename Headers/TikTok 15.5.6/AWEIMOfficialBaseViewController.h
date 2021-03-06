//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMInteractListViewControllerDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEIMInteractListViewController, NSString;
@protocol AWEIMOfficialViewControllerProtocol;

@interface AWEIMOfficialBaseViewController : UIViewController <AWEIMInteractListViewControllerDelegate, BTDRouterViewControllerProtocol>
{
    AWEIMInteractListViewController *_interactListVC;
    UIViewController<AWEIMOfficialViewControllerProtocol> *_officialMessageListVC;
}

+ (void)load;
@property(retain, nonatomic) UIViewController<AWEIMOfficialViewControllerProtocol> *officialMessageListVC; // @synthesize officialMessageListVC=_officialMessageListVC;
@property(retain, nonatomic) AWEIMInteractListViewController *interactListVC; // @synthesize interactListVC=_interactListVC;
- (void).cxx_destruct;
- (void)contactBtnClicked:(id)arg1;
- (void)interactListViewControllerHeightDidChange:(id)arg1;
- (id)contactBtn;
- (void)viewDidLayoutSubviews;
- (void)p_refreshTableHeaderView;
- (void)p_setupUI;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

