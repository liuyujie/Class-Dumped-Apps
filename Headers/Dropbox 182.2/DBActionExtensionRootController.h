//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBNavigationController.h>

#import <DropboxExtensions/DBActionExtensionController-Protocol.h>
#import <DropboxExtensions/DBExtensionUserChangeObserver-Protocol.h>
#import <DropboxExtensions/DBImportExtensionDelegate-Protocol.h>

@class DBImportExtensionController, DBItemProviderDataFetcher, NSItemProvider, NSNumber, NSString;
@protocol DBModalManaging;

@interface DBActionExtensionRootController : DBNavigationController <DBImportExtensionDelegate, DBExtensionUserChangeObserver, DBActionExtensionController>
{
    DBImportExtensionController *_importController;
    NSItemProvider *_itemProvider;
    DBItemProviderDataFetcher *_itemFetcher;
    _Bool _fileURLIsPresent;
    NSString *_UTIToBeUsed;
    NSString *_fileNameToBeUsed;
    NSNumber *_sizeOfFile;
    _Bool _isSignedInForAnalytics;
    id <DBModalManaging> _modalManager;
}

+ (_Bool)db_packingRequiredForFilePath:(id)arg1;
+ (_Bool)db_fileExistsAtFileURLOutsideSandbox:(id)arg1;
+ (id)db_fileNameFromUTI:(id)arg1;
+ (id)db_itemProviderFromExtensionContext:(id)arg1;
- (void).cxx_destruct;
- (void)accountAndSessionManager:(id)arg1 usersDidChange:(id)arg2;
- (void)accountAndSessionManager:(id)arg1 usersWillChange:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)db_cancelAndPresentErrorAlertViewWithTitle:(id)arg1 message:(id)arg2 reason:(id)arg3;
- (void)db_presentGenericErrorAndCancelReason:(id)arg1;
- (id)db_analyticsParameters;
- (id)db_sizeOfFileURL:(id)arg1;
- (void)db_createLocalFileWithResult:(id)arg1;
- (void)db_alertAboutUnsupportedFileTypeAtPath:(id)arg1;
- (void)db_handleURLLoad:(id)arg1;
- (void)db_handleFetchResult:(id)arg1;
- (void)db_startLoadingFile;
- (void)importController:(id)arg1 userAuthorizedWithSuccess:(_Bool)arg2;
- (_Bool)importController:(id)arg1 shouldBeginImporting:(id)arg2;
- (void)importControllerDidCloseWithSuccess:(id)arg1;
- (void)importController:(id)arg1 didCloseWithMessage:(id)arg2;
- (void)db_closeExtension;
- (void)db_logAnalyticsCancelMessage:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)db_setupViewControllersWithUsers:(id)arg1;
- (void)viewDidLoad;
- (void)hostApplicationDidEnterBackground;
- (id)initWithExtensionManager:(id)arg1 modalManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

