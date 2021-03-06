//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOIUIDelegate-Protocol.h"

@class GOIService, NSArray, NSString, SSOService, UIViewController;
@protocol ASTAuthProvider;

@interface ASTGALHandler : NSObject <GOIUIDelegate>
{
    _Bool _twoWayLinking;
    _Bool _appFlipEnabled;
    SSOService *_SSOService;
    id <ASTAuthProvider> _authProvider;
    NSString *_serviceProviderId;
    NSArray *_scopes;
    NSArray *_googleScopes;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _completionCallback;
    GOIService *_GOIServiceAwaitingTokenFlowCallback;
}

+ (id)componentValueFromURL:(id)arg1 forName:(id)arg2;
+ (_Bool)supportAppFlipFromURL:(id)arg1;
+ (_Bool)twoWayLinkingFromURL:(id)arg1;
+ (id)assistantIdentityGoogleScopesFromURL:(id)arg1;
+ (id)assistantIdentityScopesFromURL:(id)arg1;
+ (id)assistantIdentityProviderFromURL:(id)arg1;
+ (_Bool)isAssistantIdentityURL:(id)arg1;
@property(retain, nonatomic) GOIService *GOIServiceAwaitingTokenFlowCallback; // @synthesize GOIServiceAwaitingTokenFlowCallback=_GOIServiceAwaitingTokenFlowCallback;
@property(nonatomic) _Bool appFlipEnabled; // @synthesize appFlipEnabled=_appFlipEnabled;
@property(nonatomic) _Bool twoWayLinking; // @synthesize twoWayLinking=_twoWayLinking;
@property(copy, nonatomic) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSArray *googleScopes; // @synthesize googleScopes=_googleScopes;
@property(retain, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(retain, nonatomic) NSString *serviceProviderId; // @synthesize serviceProviderId=_serviceProviderId;
@property(retain, nonatomic) id <ASTAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(retain, nonatomic) SSOService *SSOService; // @synthesize SSOService=_SSOService;
- (void).cxx_destruct;
- (_Bool)mayShowUIForError:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)linkAccountWithCancelErrorSuppressed:(_Bool)arg1;
- (void)linkAccount;
- (void)unlinkAccount;
- (id)GOIService;
- (void)linkAccountWithEncodedProto:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)linkAccountWithProviderId:(id)arg1 scopes:(id)arg2 presentingViewController:(id)arg3 appFlipEnabled:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2 presentingViewController:(id)arg3;
- (_Bool)handleContinueUserActivity:(id)arg1;
- (_Bool)canResumeTokenFlowWithURL:(id)arg1;
- (id)initWithAuthProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

