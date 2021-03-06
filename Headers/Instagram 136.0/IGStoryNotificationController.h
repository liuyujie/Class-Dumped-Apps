//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryDataControllerStoryItemListener-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryViewerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>
#import <InstagramAppCoreFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class IGMainAppSurfaceIntent, IGUserSession, NSMapTable, NSString;

@interface IGStoryNotificationController : NSObject <IGStoryDataControllerStoryItemListener, IGStoryViewerDelegate, UIViewControllerTransitioningDelegate, IGUserSessionObject>
{
    NSMapTable *_destinationTabMap;
    IGUserSession *_userSession;
    NSString *_focusedItemPK;
    IGMainAppSurfaceIntent *_destinationAppSurfaceIntent;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)storyDataController:(id)arg1 didReturnNoStoryItemResultsForReelPK:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchItemsDidFailForReelPK:(id)arg2 error:(id)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)_handleFetchFailureForReelPK:(id)arg1;
- (void)_handleNavigationForReel:(id)arg1 viewModel:(id)arg2;
- (id)_mainFeedViewController;
- (id)_traySectionController;
- (void)_handleNavigationWithViewerViewModels:(id)arg1 trayViewModels:(id)arg2 entryPoint:(long long)arg3 userSession:(id)arg4 destinationAppSurfaceIntent:(id)arg5 pushCategory:(id)arg6;
- (void)_handleReels:(id)arg1 userSession:(id)arg2 destinationAppSurfaceIntent:(id)arg3 extraNotificationInfo:(id)arg4 pushCategory:(id)arg5;
- (void)handleSingleItemStoryNotificationForReelPK:(id)arg1 focusedItemPK:(id)arg2 destinationAppSurfaceIntent:(id)arg3;
- (void)handleStoryNotificationForReelPK:(id)arg1 focusedItemPK:(id)arg2 userSession:(id)arg3 destinationAppSurfaceIntent:(id)arg4;
- (void)handleStoryNotificationForUserPKs:(id)arg1 userSession:(id)arg2 destinationAppSurfaceIntent:(id)arg3 pushCategory:(id)arg4;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

