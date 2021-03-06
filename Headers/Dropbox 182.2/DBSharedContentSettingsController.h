//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DBLinkSettingsViewControllerDelegate-Protocol.h"
#import "DBLinkableStateObserverProtocol-Protocol.h"
#import "DBSharedContentDataSourceObserver-Protocol.h"
#import "DBSharedContentPassPolicyDelegate-Protocol.h"
#import "DBSharedContentSharedLinkPolicyControllerDelegate-Protocol.h"
#import "DBSharedFolderAllowedInviteesDelegate-Protocol.h"
#import "DBSharedFolderAllowedInvitersDelegate-Protocol.h"
#import "DBSharedFolderDepartureDelegate-Protocol.h"
#import "DBSnackbarPresenting-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DBHiddenSeparatorsTableViewCell, DBLinkSettingsAnalyticsLogger, DBObserverHandle, DBSharedContentSettingsControllerLogger, DBUserState, NSArray, NSString, UITableView;
@protocol DBFileEntry><DBWithUserState, DBModalManaging, DBSharedContentDataSourceProtocol, DBSnackbarPresenting;

@interface DBSharedContentSettingsController : UIViewController <DBSharedContentDataSourceObserver, DBLinkableStateObserverProtocol, DBSharedFolderAllowedInviteesDelegate, DBSharedContentSharedLinkPolicyControllerDelegate, DBSharedFolderAllowedInvitersDelegate, DBSharedContentPassPolicyDelegate, DBSharedFolderDepartureDelegate, DBSnackbarPresenting, UITableViewDelegate, UITableViewDataSource, DBLinkSettingsViewControllerDelegate>
{
    id <DBFileEntry><DBWithUserState> _fileEntry;
    DBUserState *_userState;
    id <DBModalManaging> _modalManager;
    unsigned long long _presentationSource;
    _Bool _presentedFromSharingController;
    id <DBSharedContentDataSourceProtocol> _dataSource;
    UIViewController<DBSnackbarPresenting> *_snackbarPresentingVC;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _completionBlock;
    DBLinkSettingsAnalyticsLogger *_linkSettingsAnalyticsLogger;
    _Bool _isFolder;
    _Bool _hasAlreadyAppeared;
    _Bool _didChangeSettings;
    DBObserverHandle *_dataSourceObserverHandle;
    DBSharedContentSettingsControllerLogger *_analyticsLogger;
    UITableView *_tableView;
    NSArray *_tableSections;
    NSArray *_policySettingsRows;
    NSArray *_linkSettingsRows;
    NSArray *_actionsRows;
    DBHiddenSeparatorsTableViewCell *_infoCell;
    _Bool _isLinkSettingsEnabled;
    _Bool _isAdvancedSettingsEnabled;
    _Bool _isSharedLinkPolicyEnabled;
    _Bool _isViewerInfoEnabled;
    _Bool _isLinkAccessLevelEnabled;
}

+ (id)db_snackBarSuccessMessageForDepartureType:(unsigned long long)arg1;
+ (id)db_settingsCellWithStyle:(long long)arg1 mainText:(id)arg2 description:(id)arg3 cellEnabled:(_Bool)arg4;
+ (id)db_infoCellWithFileEntry:(id)arg1;
+ (id)db_warningBannerCellWithText:(id)arg1;
+ (id)db_loadingCellHideSeparatorLines:(_Bool)arg1;
+ (id)db_newDataSourceWithFileEntry:(id)arg1;
+ (unsigned long long)sourceFromLocation:(long long)arg1;
- (void).cxx_destruct;
- (void)dismissWithLinkSettingsViewController:(id)arg1;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)snackbarShouldObserveAdditionalSafeAreaInsetsWithSnackbar:(id)arg1;
- (_Bool)snackbarShouldAllowForFloatingStyle:(id)arg1;
- (double)snackbarAdditionalVerticalPadding:(id)arg1;
- (_Bool)willPresentSnackbar:(id)arg1 calculatedHeight:(double)arg2 presentUnderViews:(id *)arg3 animated:(_Bool)arg4;
- (void)sharedFolderDepartureController:(id)arg1 selectedDepartWithDelete:(_Bool)arg2;
- (void)sharedContentPassPolicyController:(id)arg1 selectedPassPolicy:(long long)arg2;
- (void)sharedFolderAllowedInvitersController:(id)arg1 selectedAllowedInviters:(long long)arg2;
- (void)sharedContentSharedLinkPolicyController:(id)arg1 selectedSharedLinkPolicy:(long long)arg2;
- (void)sharedFolderAllowedInviteesController:(id)arg1 selectedAllowedInvitees:(long long)arg2;
- (void)db_didUpdateSettingsWithError:(id)arg1 settingType:(unsigned long long)arg2;
- (void)sharedContentDataSourceDidUpdateMemberCount:(id)arg1;
- (void)sharedContentDataSourceDidUpdateMembers:(id)arg1;
- (void)sharedContentDataSourceDidUpdateMetadata:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)db_shouldShowManagedByText;
- (void)db_didSelectMembersCell;
- (void)db_didSelectActionsCellForIndexPath:(id)arg1;
- (void)db_didSelectLinkSettingsCellForSectionRow:(long long)arg1;
- (void)db_didSelectPolicySettingsCellForSectionRow:(long long)arg1;
- (id)db_actionsCellForSectionRow:(long long)arg1;
- (id)db_linkSettingsCellForSectionRow:(long long)arg1;
- (id)db_policySettingsCellForSectionRow:(long long)arg1;
- (_Bool)db_useLargeAvatarView;
- (id)db_memberAvatarsCell;
- (void)db_reloadMembersSection;
- (unsigned long long)db_tableViewSectionFromSettingsSection:(long long)arg1;
- (long long)db_settingsSectionFromTableViewSection:(unsigned long long)arg1;
- (void)db_presentCantLeaveFolderIfOwnerError;
- (void)db_presentUpdateSettingsError:(id)arg1;
- (void)db_presentFailedToLoadSettingsError:(id)arg1;
- (void)db_didTapDoneButton;
- (void)db_updateActionsRows;
- (void)db_updateLinkSettingsRows;
- (void)db_updatePolicySettingsRows;
- (void)db_updateAndReloadTable;
- (_Bool)db_canChangeViewerInfoPolicy;
- (_Bool)db_canChangeAllowedManagersPolicy;
- (_Bool)db_canChangeSharedLinkPolicy;
- (_Bool)db_canChangeAllowedRecipientsPolicy;
- (_Bool)db_hasPermissionToChangeSettingForPolicySettingsRow:(long long)arg1;
- (id)db_bannerTextForPolicySettingsRows:(id)arg1;
- (id)db_memberSectionHeader;
- (void)db_setupNavigationBar;
- (void)db_setupViews;
- (void)db_performInitialDataLoad;
- (void)db_performDismissAndCompletionWithDidUnshare:(_Bool)arg1 didDelete:(_Bool)arg2 didEncounterError:(_Bool)arg3;
- (void)db_clearUserState;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFileEntry:(id)arg1 source:(unsigned long long)arg2 dataSource:(id)arg3 snackbarPresentingVC:(id)arg4 modalManager:(id)arg5 dismissBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

