//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XBLIDPScenarioDelegate.h"
#import "XBLMSALogInUILauncher.h"

@class NSString, UIViewController, XboxProvider;

@interface XBLSignInHandler : NSObject <XBLIDPScenarioDelegate, XBLMSALogInUILauncher>
{
    _Bool _hasLaunched;
    CDUnknownBlockType _gamertagChangeBlock;
    UIViewController *_topViewController;
    long long _launchedState;
    long long _launchedError;
    XboxProvider *_provider;
    UIViewController *_launchViewController;
    task_completion_event_95c2fec2 _tce;
}

@property(retain, nonatomic) UIViewController *launchViewController; // @synthesize launchViewController=_launchViewController;
@property(retain, nonatomic) XboxProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) long long launchedError; // @synthesize launchedError=_launchedError;
@property(nonatomic) long long launchedState; // @synthesize launchedState=_launchedState;
@property(nonatomic) _Bool hasLaunched; // @synthesize hasLaunched=_hasLaunched;
@property(nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property task_completion_event_95c2fec2 tce; // @synthesize tce=_tce;
@property(copy, nonatomic) CDUnknownBlockType gamertagChangeBlock; // @synthesize gamertagChangeBlock=_gamertagChangeBlock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setTCEWithResult:(int)arg1;
- (void)attemptErrorSolution;
- (void)launchXboxError:(long long)arg1;
- (void)userChangedGamertag:(id)arg1;
- (void)switchAccounts;
- (void)userCancelledSignIn;
- (void)userCompletedSignedIn;
- (void)presentMSALogInViewController:(id)arg1;
- (void)runOnMainThread:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissUIWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isConnectedToInternet;
- (void)setUp;
- (task_fc87a9a8)signedInWithUser:(shared_ptr_f662d7d9)arg1 isNewAccount:(_Bool)arg2 error:(long long)arg3;
- (void)setSignInOptions:(shared_ptr_57c61e72)arg1;
- (void)setUser:(shared_ptr_f662d7d9)arg1;
- (void)tearDown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
