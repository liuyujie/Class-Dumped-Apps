//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileActionDestinationAnalyticsLogger-Protocol.h"
#import "DBUploadPhotosOptionsAnalyticsProtocol-Protocol.h"

@class DBAssetCollectionsGridViewController, DBLegacyAnalyticsLogger, NSString;
@protocol DBAnalyticsLogger;

@interface DBAssetPickerAnalyticsLogger : NSObject <DBFileActionDestinationAnalyticsLogger, DBUploadPhotosOptionsAnalyticsProtocol>
{
    DBLegacyAnalyticsLogger *_legacyAnalyticsLogger;
    id <DBAnalyticsLogger> _analyticsLogger;
    unsigned long long _numberRecentDestinationsStartedWith;
    unsigned long long _triggerType;
    NSString *_optionsMenuVersion;
    DBAssetCollectionsGridViewController *_assetsGridViewController;
}

+ (unsigned long long)db_transcodeToJpegOptionStateFromOptions:(id)arg1;
+ (id)db_stringForTriggerType:(unsigned long long)arg1;
+ (id)db_paramsForTriggerType:(unsigned long long)arg1;
+ (unsigned long long)triggerTypeFromLocation:(long long)arg1;
@property(nonatomic) __weak DBAssetCollectionsGridViewController *assetsGridViewController; // @synthesize assetsGridViewController=_assetsGridViewController;
@property(copy, nonatomic) NSString *optionsMenuVersion; // @synthesize optionsMenuVersion=_optionsMenuVersion;
- (void).cxx_destruct;
- (void)logTappedLearnMoreInTranscodeToJpegOptionMenuWithOptions:(id)arg1;
- (void)logChangedOptionInTranscodeToJpegOptionMenuWithOptions:(id)arg1;
- (void)logDismissTranscodeToJpegOptionMenuWithOptions:(id)arg1;
- (void)logShowTranscodeToJpegOptionMenuWithOptions:(id)arg1;
- (void)logDismissDestinationPickerWithDidChangeDestination:(_Bool)arg1;
- (void)logShowDestinationPickerWithReason:(unsigned long long)arg1;
- (void)logSelectRecentDestination;
- (void)logDismissRenameFileMenuWithDidChangeName:(_Bool)arg1;
- (void)logDismissRenameFileMenuWithDidChangeName:(_Bool)arg1 didChangeOrder:(_Bool)arg2;
- (void)logShowRenameFileMenu;
- (void)logCompleteUploadPhotosOptionsMenuWithOptions:(id)arg1;
- (void)logDismissUploadPhotosOptionsMenu;
- (void)logShowUploadPhotosOptionsMenuWithNumberRecentDestinations:(unsigned long long)arg1;
- (void)logDestinationPickerDismissed;
- (void)logDestinationPickerConfirmed;
- (void)logDestinationPickerOpened;
- (void)logPhotosPermissionShownErrorView;
- (void)logPhotosPermissionDenied;
- (void)logPhotosPermissionGranted;
- (void)logAssetPickerDismissed;
- (void)logAssetPickerConfirmedWithSelectionCount:(unsigned long long)arg1;
- (void)logAssetPickerOpened;
- (id)initWithTriggerType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

