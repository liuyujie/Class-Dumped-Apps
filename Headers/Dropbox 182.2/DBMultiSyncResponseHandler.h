//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBFileOpenContext, DBStateContext, NSDate, NSString;
@protocol DBModalManaging;

@interface DBMultiSyncResponseHandler : NSObject
{
    CDUnknownBlockType _completionBlock;
    NSString *_linkString;
    CDUnknownBlockType _retryBlock;
    DBStateContext *_stateContext;
    DBFileOpenContext *_fileOpenContext;
    id <DBModalManaging> _modalManager;
    NSDate *_startTime;
}

+ (void)db_logViewedMetadata:(id)arg1 userId:(id)arg2 state:(id)arg3;
+ (_Bool)db_isPasswordError:(id)arg1;
+ (_Bool)db_isWrongPairedUser:(id)arg1 error:(id)arg2;
+ (_Bool)db_isRedirectToSignInError:(id)arg1;
+ (_Bool)db_isNoUserError:(id)arg1;
+ (_Bool)db_openFileEntryInThirdPartyAppDirectly:(id)arg1;
+ (int)db_priorityForAction:(id)arg1;
+ (id)db_actionWithPriorityBetween:(id)arg1 and:(id)arg2;
- (void).cxx_destruct;
- (void)db_logAuthEventIfNecessaryForActionableData:(id)arg1;
- (void)db_openSharedContentLinkAfterSignInWithAlert:(_Bool)arg1;
- (void)db_presentPasswordController;
- (void)db_dispatchContentLinkAction:(id)arg1 viewBlock:(CDUnknownBlockType)arg2 preventOverquota:(_Bool)arg3;
- (void)db_dispatchContentLinkAction:(id)arg1 viewBlock:(CDUnknownBlockType)arg2;
- (void)db_presentUserContentMetadata:(id)arg1 forUserState:(id)arg2;
- (void)db_presentMetadata:(id)arg1 forSharedLink:(id)arg2;
- (void)db_presentMetadata:(id)arg1 forSharedLink:(id)arg2 forUserState:(id)arg3 actionableData:(id)arg4 inNavigationController:(id)arg5;
- (id)password;
- (id)db_makeLinkPathFromMetadata:(id)arg1;
- (void)receivedError:(id)arg1 forUserState:(id)arg2;
- (void)userMustTakeAction:(id)arg1;
- (void)notInDropbox:(id)arg1 withActionableData:(id)arg2 withLink:(id)arg3 andUserState:(id)arg4;
- (void)inDropbox:(id)arg1 withActionableData:(id)arg2 andUserState:(id)arg3;
- (void)processMultiResponse:(id)arg1;
- (void)processUnauthedResponse:(id)arg1 withLink:(id)arg2;
- (id)initWithLinkString:(id)arg1 stateContext:(id)arg2 fileOpenContext:(id)arg3 interactionStartTime:(id)arg4 modalManager:(id)arg5 requestCompletionBlock:(CDUnknownBlockType)arg6 retryBlock:(CDUnknownBlockType)arg7;

@end

