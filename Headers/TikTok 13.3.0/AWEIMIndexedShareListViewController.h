//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMContactListBaseViewController.h"

#import "AWEIMShareListSelectUserControllerDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEIMShareListSelectUserController, NSString, UILabel;

@interface AWEIMIndexedShareListViewController : AWEIMContactListBaseViewController <AWEIMShareListSelectUserControllerDelegate, BTDRouterViewControllerProtocol>
{
    _Bool _isForwardIMMessage;
    UILabel *_completionLabel;
    AWEIMShareListSelectUserController *_selectUserController;
}

+ (void)__awe__codeRunnerRun_33;
@property(nonatomic) _Bool isForwardIMMessage; // @synthesize isForwardIMMessage=_isForwardIMMessage;
@property(retain, nonatomic) AWEIMShareListSelectUserController *selectUserController; // @synthesize selectUserController=_selectUserController;
@property(retain, nonatomic) UILabel *completionLabel; // @synthesize completionLabel=_completionLabel;
- (void).cxx_destruct;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)p_didTapComplete;
- (void)p_switchToMultiSelect;
- (void)p_cancelMultiSelect;
- (void)p_dismiss;
- (void)p_updateMultiselectCount:(long long)arg1;
- (void)p_updateNavBar;
- (void)shareListSelectUserController:(id)arg1 didSentMessage:(id)arg2;
- (void)shareListSelectUserController:(id)arg1 didShowAlertVC:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didTapCellRightIconAtIndexPath:(id)arg1 icon:(unsigned long long)arg2;
- (unsigned long long)rightIconStyleForSection:(unsigned long long)arg1;
- (_Bool)isNeedSection:(unsigned long long)arg1;
- (_Bool)isNeedShowUpdateCountForSection:(unsigned long long)arg1;
- (void)changeToMultiselect:(_Bool)arg1;
- (_Bool)canSelectCellAtIndexPath:(id)arg1;
- (void)setShareContext:(id)arg1;
- (void)didFocusOnTextfield:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
