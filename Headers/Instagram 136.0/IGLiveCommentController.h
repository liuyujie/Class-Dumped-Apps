//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLiveCommentPinningServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveCommentPostingServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLiveCommentServiceDelegate-Protocol.h>

@class FBTimer, IGLiveCommentPinningService, IGLiveCommentPostingService, IGLiveFlaggedCommentLedger, IGUser, IGUserSession, NSMutableArray, NSMutableSet, NSString;
@protocol IGLiveCommentControllerDelegate, IGLiveCommentService;

@interface IGLiveCommentController : NSObject <IGLiveCommentServiceDelegate, IGLiveCommentPostingServiceDelegate, IGLiveCommentPinningServiceDelegate>
{
    id <IGLiveCommentControllerDelegate> _delegate;
    IGUserSession *_userSession;
    IGUser *_currentUser;
    NSString *_mediaId;
    id <IGLiveCommentService> _commentService;
    NSMutableArray *_commentQueue;
    FBTimer *_consumeCommentTimer;
    long long _secondsPerComment;
    double _lastCommentDisplayTime;
    IGLiveFlaggedCommentLedger *_flaggedCommentLedger;
    IGLiveCommentPostingService *_commentPostingService;
    IGLiveCommentPinningService *_commentPinningService;
    NSMutableSet *_loadedCommentPKs;
}

+ (double)currentTime;
+ (id)_sortedComments:(id)arg1;
@property(readonly, copy, nonatomic) NSMutableSet *loadedCommentPKs; // @synthesize loadedCommentPKs=_loadedCommentPKs;
@property(readonly, nonatomic) IGLiveCommentPinningService *commentPinningService; // @synthesize commentPinningService=_commentPinningService;
@property(readonly, nonatomic) IGLiveCommentPostingService *commentPostingService; // @synthesize commentPostingService=_commentPostingService;
@property(readonly, nonatomic) IGLiveFlaggedCommentLedger *flaggedCommentLedger; // @synthesize flaggedCommentLedger=_flaggedCommentLedger;
@property(nonatomic) double lastCommentDisplayTime; // @synthesize lastCommentDisplayTime=_lastCommentDisplayTime;
@property(nonatomic) long long secondsPerComment; // @synthesize secondsPerComment=_secondsPerComment;
@property(retain, nonatomic) FBTimer *consumeCommentTimer; // @synthesize consumeCommentTimer=_consumeCommentTimer;
@property(readonly, copy, nonatomic) NSMutableArray *commentQueue; // @synthesize commentQueue=_commentQueue;
@property(readonly, nonatomic) id <IGLiveCommentService> commentService; // @synthesize commentService=_commentService;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGLiveCommentControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commentPinningService:(id)arg1 didFailToUnpinComment:(id)arg2;
- (void)commentPinningService:(id)arg1 didFailToPinComment:(id)arg2;
- (void)commentPostingService:(id)arg1 didFailToPostComment:(id)arg2;
- (void)commentPostingService:(id)arg1 didSuccessfullyPostComment:(id)arg2 commentToReplace:(id)arg3;
- (void)_displayComment:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (id)_removeFirstComment;
- (void)_addToCommentQueue:(id)arg1;
- (void)_enqueueCommentsForDisplay:(id)arg1;
- (void)_consumeComment;
- (void)_scheduleConsumeCommentTimerIfNeeded;
- (void)commentService:(id)arg1 didReceiveCommentMutedStatus:(_Bool)arg2;
- (void)commentService:(id)arg1 didFetchComments:(id)arg2 systemComments:(id)arg3 secondsPerComment:(id)arg4 pinnedComment:(id)arg5 isInitialFetch:(_Bool)arg6;
- (void)unpinComment:(id)arg1;
- (void)pinComment:(id)arg1;
- (void)postCommentText:(id)arg1 fromUser:(id)arg2 secondsIntoVideo:(double)arg3 commentLoggingExtras:(id)arg4;
- (void)stop;
- (void)start;
- (void)_invalidateTimer;
- (void)dealloc;
- (id)initWithMediaId:(id)arg1 networker:(id)arg2 currentUser:(id)arg3 loggingContext:(id)arg4 flaggedCommentLedger:(id)arg5 commentService:(id)arg6 commentPostingService:(id)arg7 commentPinningService:(id)arg8;
- (id)initWithMediaId:(id)arg1 userSession:(id)arg2 currentUser:(id)arg3 loggingContext:(id)arg4 flaggedCommentLedger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

