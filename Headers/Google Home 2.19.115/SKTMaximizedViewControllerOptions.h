//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTSendKitCoreOptions.h"

#import "SKTMaximizedViewControllerOptions-Protocol.h"

@class GMDCContainerScheme, NSArray, NSNumber, NSString, QTMColorGroup, SKTClientConfig, SKTColorTheme, SKTExperimentOptions, SKTLocalizedStringOverrides, SKTMaximizedViewColorOverrides, SKTProfileLookupOptions, SKTSelectedContactsDisplayColorOverrides, SKTUIAlertDialogOptions, SKTUIInAppContactDisplayOptions, UIFont, UIView;
@protocol SKTShareSheetDelegate;

@interface SKTMaximizedViewControllerOptions : SKTSendKitCoreOptions <SKTMaximizedViewControllerOptions>
{
    _Bool showAtoZListOfDeviceContacts;
    _Bool chipsInputActivated;
    _Bool forceHideMoreMenu;
    unsigned long long fullScreenSuggestionsCount;
    unsigned long long addRecipientItemVisibility;
    unsigned long long selectedContactsBehavior;
    SKTProfileLookupOptions *profileLookupOptions;
    UIFont *placeholderFont;
    SKTSelectedContactsDisplayColorOverrides *chipsBarColorOverrides;
    SKTColorTheme *chipsBarColors;
    SKTColorTheme *maximizedViewColors;
    SKTMaximizedViewColorOverrides *maximizedViewColorOverrides;
}

@property(nonatomic) _Bool forceHideMoreMenu; // @synthesize forceHideMoreMenu;
@property(retain, nonatomic) SKTMaximizedViewColorOverrides *maximizedViewColorOverrides; // @synthesize maximizedViewColorOverrides;
@property(retain, nonatomic) SKTColorTheme *maximizedViewColors; // @synthesize maximizedViewColors;
@property(retain, nonatomic) SKTColorTheme *chipsBarColors; // @synthesize chipsBarColors;
@property(retain, nonatomic) SKTSelectedContactsDisplayColorOverrides *chipsBarColorOverrides; // @synthesize chipsBarColorOverrides;
@property(nonatomic) _Bool chipsInputActivated; // @synthesize chipsInputActivated;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont;
@property(retain, nonatomic) SKTProfileLookupOptions *profileLookupOptions; // @synthesize profileLookupOptions;
@property(nonatomic) unsigned long long selectedContactsBehavior; // @synthesize selectedContactsBehavior;
@property(nonatomic) _Bool showAtoZListOfDeviceContacts; // @synthesize showAtoZListOfDeviceContacts;
@property(nonatomic) unsigned long long addRecipientItemVisibility; // @synthesize addRecipientItemVisibility;
@property(nonatomic) unsigned long long fullScreenSuggestionsCount; // @synthesize fullScreenSuggestionsCount;
- (void).cxx_destruct;
- (id)initWithThemeColorGroup:(id)arg1 clientID:(int)arg2;
- (id)initWithClientID:(int)arg1;

// Remaining properties
@property(readonly, nonatomic) SKTClientConfig *clientConfig;
@property(readonly, nonatomic) int clientID;
@property(readonly, nonatomic) GMDCContainerScheme *containerScheme;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int entryPoint;
@property(retain, nonatomic) SKTExperimentOptions *experimentOptions;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SKTUIInAppContactDisplayOptions *inAppContactDisplayOptions;
@property(retain, nonatomic) NSArray *initiallySelectedTargets;
@property(nonatomic) __weak UIView *loggingParent;
@property(nonatomic) unsigned long long permissionsBehaviors;
@property(retain, nonatomic) SKTUIAlertDialogOptions *permissionsPreRequestOptions;
@property(nonatomic) unsigned long long selectionMode;
@property(retain, nonatomic) SKTUIAlertDialogOptions *settingsRedirectDialogOptions;
@property(nonatomic) __weak id <SKTShareSheetDelegate> shareSheetDelegate;
@property(retain, nonatomic) NSArray *sharedWithTargetGroups;
@property(nonatomic) _Bool showGroupResults;
@property(retain, nonatomic) SKTLocalizedStringOverrides *stringOverrides;
@property(retain, nonatomic) NSNumber *submissionID;
@property(readonly) Class superclass;
@property(retain, nonatomic) QTMColorGroup *themeColorGroup;
@property(nonatomic) _Bool validateContacts;

@end

