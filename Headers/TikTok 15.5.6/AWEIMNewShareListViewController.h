//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMListBaseViewController.h"

#import "AWEIMShareCurrentGroupListViewControllerDelegate-Protocol.h"
#import "AWEIMShareListSelectUserControllerDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEIMShareCurrentGroupListViewController, AWEIMShareListSelectUserController, NSString, UILabel;

@interface AWEIMNewShareListViewController : AWEIMListBaseViewController <BTDRouterViewControllerProtocol, AWEIMShareCurrentGroupListViewControllerDelegate, AWEIMShareListSelectUserControllerDelegate>
{
    _Bool _isForwardIMMessage;
    UILabel *_completionLabel;
    AWEIMShareListSelectUserController *_selectUserController;
    AWEIMShareCurrentGroupListViewController *_currentGroupVC;
}

+ (void)__awe__codeRunnerRun_40;
@property(retain, nonatomic) AWEIMShareCurrentGroupListViewController *currentGroupVC; // @synthesize currentGroupVC=_currentGroupVC;
@property(nonatomic) _Bool isForwardIMMessage; // @synthesize isForwardIMMessage=_isForwardIMMessage;
@property(retain, nonatomic) AWEIMShareListSelectUserController *selectUserController; // @synthesize selectUserController=_selectUserController;
@property(retain, nonatomic) UILabel *completionLabel; // @synthesize completionLabel=_completionLabel;
- (void).cxx_destruct;
- (_Bool)shareCurrentGroupListViewController:(id)arg1 couldSelectGroup:(id)arg2 withSelectedGroup:(id)arg3;
- (void)shareCurrentGroupListViewController:(id)arg1 didFinishedSelectedGroup:(id)arg2;
- (void)shareListSelectUserController:(id)arg1 didSentMessage:(id)arg2;
- (void)shareListSelectUserController:(id)arg1 didShowAlertVC:(id)arg2;
- (void)p_switchToMultiSelect;
- (void)p_cancelMultiSelect;
- (void)p_didTapComplete;
- (void)p_updateNavBar;
- (void)p_dismiss;
- (void)setShareContext:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (id)functionArray;
- (long long)currentFunctin;
- (_Bool)canTapCellAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tappedFeature:(id)arg1;
- (void)changeToMultiselect:(_Bool)arg1;
- (void)updateMultiselectCount:(long long)arg1;
- (void)didFocusOnTextfield:(id)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

