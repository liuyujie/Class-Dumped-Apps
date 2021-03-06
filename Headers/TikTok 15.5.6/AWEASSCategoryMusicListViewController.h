//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "HTSVideoAudioSupplier-Protocol.h"

@class AWEASSMusicListViewController, AWEASSMusicNavView, AWECategoryMusicListManager, NSString;

@interface AWEASSCategoryMusicListViewController : UIViewController <BTDRouterViewControllerProtocol, HTSVideoAudioSupplier>
{
    _Bool _isEliteVersion;
    _Bool _shouldShowUploadMusicButton;
    _Bool _shouldHideCellMoreButton;
    _Bool _shouldShowRank;
    CDUnknownBlockType _completion;
    AWEASSMusicListViewController *_listVC;
    NSString *_cid;
    NSString *_categoryName;
    AWECategoryMusicListManager *_musicManager;
    long long _savedStatusBarStyle;
    NSString *_enterMethod;
    NSString *_previousPage;
    AWEASSMusicNavView *_navView;
}

+ (void)__awe__codeRunnerRun_53;
@property(retain, nonatomic) AWEASSMusicNavView *navView; // @synthesize navView=_navView;
@property(nonatomic) _Bool shouldShowRank; // @synthesize shouldShowRank=_shouldShowRank;
@property(nonatomic) _Bool shouldHideCellMoreButton; // @synthesize shouldHideCellMoreButton=_shouldHideCellMoreButton;
@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(nonatomic) _Bool shouldShowUploadMusicButton; // @synthesize shouldShowUploadMusicButton=_shouldShowUploadMusicButton;
@property(nonatomic) long long savedStatusBarStyle; // @synthesize savedStatusBarStyle=_savedStatusBarStyle;
@property(nonatomic) _Bool isEliteVersion; // @synthesize isEliteVersion=_isEliteVersion;
@property(copy, nonatomic) AWECategoryMusicListManager *musicManager; // @synthesize musicManager=_musicManager;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) AWEASSMusicListViewController *listVC; // @synthesize listVC=_listVC;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)cancelBtnClicked:(id)arg1;
- (void)p_setupUI;
- (double)footerInset;
- (_Bool)shouldHideNoMoreText;
- (void)transformAndSetListData;
- (void)p_endRefreshing;
- (void)p_loadMoreData;
- (void)p_refreshData;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)initWithCategoryId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

