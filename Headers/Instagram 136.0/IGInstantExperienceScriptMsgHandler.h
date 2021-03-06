//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGInstantExperienceScriptMessageHandling-Protocol.h>

@class FBBusinessExtensionAutofillMultiRecordCache, FBBusinessExtensionFeatureEnabledListViewModel, IGInstantExperienceDelegate, IGScriptMessageRegistryAdaptor, IGUserSession, NSString;

@interface IGInstantExperienceScriptMsgHandler : NSObject <IGInstantExperienceScriptMessageHandling>
{
    IGUserSession *_session;
    IGInstantExperienceDelegate *_delegate;
    FBBusinessExtensionFeatureEnabledListViewModel *_featureEnabledList;
    IGScriptMessageRegistryAdaptor *_registryAdaptor;
    FBBusinessExtensionAutofillMultiRecordCache *_autofillMultiRecordCache;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
- (id)_initializeCallbackHandler;
- (void)_registerScriptMessageHandlers;
- (void)_logScriptMessageHandlingFailureForErrorMessage:(id)arg1 messageName:(id)arg2 websiteURL:(id)arg3;
- (_Bool)isAutoFillEnabled;
- (void)clearAutoFillTapped;
- (_Bool)requireDelegateSetUp;
- (_Bool)supportsCallback;
- (_Bool)requireDomainToBeWhitelisted;
- (_Bool)requireHttps;
- (_Bool)requireAppId;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (id)initWithSession:(id)arg1 featureEnabledList:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

