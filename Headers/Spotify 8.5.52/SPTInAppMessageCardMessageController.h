//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageCardMessagePriorityDeciderDelegate-Protocol.h"

@class NSString, SPTInAppMessageActionFactory, SPTInAppMessageCardMessageParser, SPTInAppMessageCardMessagePresentationController, SPTInAppMessageFeedbackPresentationController, SPTInAppMessageServiceLogger;
@protocol SPTAuthController, SPTCarDetector, SPTCrashReporter, SPTOfflineModeState, SPTPushMessagingPermissionRequestor, SPTSlateBuilderProvider, SPTSlateManager;

@interface SPTInAppMessageCardMessageController : NSObject <SPTInAppMessageCardMessagePriorityDeciderDelegate>
{
    SPTInAppMessageCardMessagePresentationController *_cardMessagePresentationController;
    SPTInAppMessageCardMessageParser *_cardMessageParser;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageServiceLogger *_serviceLogger;
    id <SPTCarDetector> _carDetector;
    SPTInAppMessageFeedbackPresentationController *_feedbackPresentationController;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTCrashReporter> _crashReporter;
    id <SPTPushMessagingPermissionRequestor> _pushPermissionRequestor;
    id <SPTAuthController> _authController;
}

@property(retain, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(readonly, nonatomic) id <SPTPushMessagingPermissionRequestor> pushPermissionRequestor; // @synthesize pushPermissionRequestor=_pushPermissionRequestor;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTInAppMessageFeedbackPresentationController *feedbackPresentationController; // @synthesize feedbackPresentationController=_feedbackPresentationController;
@property(retain, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(retain, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(retain, nonatomic) SPTInAppMessageCardMessageParser *cardMessageParser; // @synthesize cardMessageParser=_cardMessageParser;
@property(retain, nonatomic) SPTInAppMessageCardMessagePresentationController *cardMessagePresentationController; // @synthesize cardMessagePresentationController=_cardMessagePresentationController;
- (void).cxx_destruct;
- (void)presentMessage:(id)arg1 forTrigger:(id)arg2;
- (void)cardMessagePriorityDeciderDidFetchMessage:(id)arg1 forTrigger:(id)arg2;
- (id)initWithParser:(id)arg1 slateManager:(id)arg2 slateBuilderProvider:(id)arg3 actionFactory:(id)arg4 serviceLogger:(id)arg5 carDetector:(id)arg6 offlineModeState:(id)arg7 feedbackPresentationController:(id)arg8 crashReporter:(id)arg9 pushPermissionRequestor:(id)arg10 authController:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

