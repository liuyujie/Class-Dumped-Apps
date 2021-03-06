//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ASMGoogleAccountViewModel-Protocol.h>

@class ASMObservable, ASMResourceKey, NSString;
@protocol ASMAccountModel, ASMHeartbeatModel, ASMLoggerModel, ASMNavigationModel;

@interface ASMGoogleAccountViewModelImpl : NSObject <ASMGoogleAccountViewModel>
{
    ASMResourceKey *_initialScreenKey;
    id <ASMAccountModel> _accountModel;
    id <ASMHeartbeatModel> _heartbeatModel;
    id <ASMLoggerModel> _loggerModel;
    id <ASMNavigationModel> _navigationModel;
}

@property(retain, nonatomic) id <ASMNavigationModel> navigationModel; // @synthesize navigationModel=_navigationModel;
@property(retain, nonatomic) id <ASMLoggerModel> loggerModel; // @synthesize loggerModel=_loggerModel;
@property(retain, nonatomic) id <ASMHeartbeatModel> heartbeatModel; // @synthesize heartbeatModel=_heartbeatModel;
@property(retain, nonatomic) id <ASMAccountModel> accountModel; // @synthesize accountModel=_accountModel;
@property(readonly, nonatomic) ASMResourceKey *initialScreenKey; // @synthesize initialScreenKey=_initialScreenKey;
- (void).cxx_destruct;
- (void)switchAccount:(id)arg1;
- (void)logExitingGoogleAccount;
- (void)logOutboundNavigationToDestination:(id)arg1;
@property(readonly, nonatomic) ASMObservable *launchExternalExperienceAction;
@property(readonly, nonatomic) ASMObservable *showAccountSwitcherAction;
@property(readonly, nonatomic) ASMObservable *closeGoogleAccountAction;
@property(readonly, nonatomic) ASMObservable *currentBlueprint;
@property(readonly, nonatomic) ASMObservable *currentIdentity;
@property(readonly, nonatomic) ASMObservable *currentAccount;
- (void)navigateToScreenWithKey:(id)arg1 withNavigationOrigin:(unsigned long long)arg2;
- (void)createPendingNavigationForScreenKey:(id)arg1;
- (id)resourceForKey:(id)arg1;
- (id)initWithAccountModel:(id)arg1 loggerModel:(id)arg2 heartbeatModel:(id)arg3 navigationModel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

