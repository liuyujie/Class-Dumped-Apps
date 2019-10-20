//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWECommonSearchBarDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEContactListTableViewHeader, AWEContactLocalSearchManager, AWEDetailFansCollectionViewController, AWERelationListDataController, AWEUserModel, NSString, UIButton, UITableView;

@interface AWEFanStarViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWECommonSearchBarDelegate, BTDRouterViewControllerProtocol>
{
    _Bool _isMine;
    _Bool _isSearching;
    _Bool _isRemovingFansOnAir;
    _Bool _searchtracked;
    UITableView *_tableView;
    NSString *_uid;
    long long _type;
    AWERelationListDataController *_dataController;
    long long _unreadCount;
    AWEDetailFansCollectionViewController *_fansVC;
    AWEUserModel *_user;
    UIButton *_fansEntranceButton;
    AWEContactListTableViewHeader *_searchBarHeader;
    AWEContactLocalSearchManager *_searchManager;
    NSString *_enterFrom;
    long long _followingFollowerListToast;
}

+ (void)__awe__codeRunnerRun_70;
@property(nonatomic) long long followingFollowerListToast; // @synthesize followingFollowerListToast=_followingFollowerListToast;
@property(nonatomic) _Bool searchtracked; // @synthesize searchtracked=_searchtracked;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) _Bool isRemovingFansOnAir; // @synthesize isRemovingFansOnAir=_isRemovingFansOnAir;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) AWEContactLocalSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) AWEContactListTableViewHeader *searchBarHeader; // @synthesize searchBarHeader=_searchBarHeader;
@property(retain, nonatomic) UIButton *fansEntranceButton; // @synthesize fansEntranceButton=_fansEntranceButton;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) AWEDetailFansCollectionViewController *fansVC; // @synthesize fansVC=_fansVC;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) AWERelationListDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)removeFans:(id)arg1;
- (double)footerInset;
- (_Bool)shouldHideNoMoreText;
- (void)enterInvitePage;
- (void)addFansControllerIfNeeded;
- (void)_setupUI;
- (void)_setupNavUI;
- (void)viewWillLayoutSubviews;
- (void)barButtonItemTapped;
- (void)backBtnClicked:(id)arg1;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (id)tableViewDataSource;
- (_Bool)showSearchBar;
- (_Bool)hasAllFansCount;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)showFansView;
- (void)_endRefreshing;
- (void)_loadMoreData;
- (void)fetchUserAndRefreshData;
- (void)_refreshData;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)initWithUserID:(id)arg1 type:(id)arg2 isMine:(_Bool)arg3 enterFrom:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
