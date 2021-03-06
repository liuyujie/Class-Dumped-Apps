//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGPromoteViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteRadioButtonListSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteSoleTextFieldViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromoteTextFieldWithLabelSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGBoostPostLogger, IGBottomButtonsView, IGListAdapter, IGPromoteDataStore, IGPromoteHeaderViewModel, IGPromoteQuickPromoteSettingsDataModel, IGPromoteRadioButtonViewListModel, IGPromoteTextFieldWithLabelViewModel, IGUserSession, NSString, UICollectionView;
@protocol IGPromoteQuickPromoteSettingsMutationViewControllerDelegate;

@interface IGPromoteQuickPromoteSettingsMutationViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteRadioButtonListSectionControllerDelegate, IGPromoteTextFieldWithLabelSectionControllerDelegate, IGPromoteSoleTextFieldViewControllerDelegate, IGGestureHandler>
{
    IGUserSession *_session;
    IGBoostPostLogger *_logger;
    IGPromoteDataStore *_dataStore;
    NSString *_enterStep;
    UICollectionView *_contentView;
    IGBottomButtonsView *_confirmButton;
    IGPromoteHeaderViewModel *_headerViewModel;
    IGPromoteRadioButtonViewListModel *_radioButtonViewListModel;
    IGPromoteTextFieldWithLabelViewModel *_nameTextFieldWithLabelViewModel;
    IGListAdapter *_adapter;
    long long _selectedMutation;
    NSString *_enteredName;
    IGPromoteQuickPromoteSettingsDataModel *_selectedSettings;
    id <IGPromoteQuickPromoteSettingsMutationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGPromoteQuickPromoteSettingsMutationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_createSettings;
- (void)_updateSettings;
- (void)_didFinishMutation;
- (void)_setUpContentView;
- (void)_updateViewModels;
- (void)_reloadView;
- (void)promoteSoleTextFieldViewController:(id)arg1 didFinishInputWithNewText:(id)arg2;
- (_Bool)promoteTextFieldWithLabelSectionControllerShouldBeginEditing:(id)arg1;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapEditButtonWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapDeleteButtonWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapSubtitleWithViewModel:(id)arg2;
- (void)promoteRadioButtonListSectionController:(id)arg1 didTapCellWithViewModel:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 logger:(id)arg2 enterStep:(id)arg3 dataStore:(id)arg4 selectedSettings:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

