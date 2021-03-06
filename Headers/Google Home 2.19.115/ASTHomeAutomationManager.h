//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTHomeAutomationManagerProtocol-Protocol.h"

@class ASTFoyerHomeAutomationManager, ASTS3HomeAutomationManager, NSArray, NSString;
@protocol ASTHomeAutomationExecutionDelegate, ASTHomeAutomationNetworkLogDelegate, SSOAuthorization;

@interface ASTHomeAutomationManager : NSObject <ASTHomeAutomationManagerProtocol>
{
    id <SSOAuthorization> _ssoAuth;
    NSString *_locale;
    id <ASTHomeAutomationNetworkLogDelegate> _logDelegate;
    id <ASTHomeAutomationExecutionDelegate> _executionDelegate;
    ASTS3HomeAutomationManager *_s3HomeAutomationManager;
    ASTFoyerHomeAutomationManager *_foyerHomeAutomationManager;
    NSArray *_foyerSupportedDeviceTypes;
}

@property(retain, nonatomic) NSArray *foyerSupportedDeviceTypes; // @synthesize foyerSupportedDeviceTypes=_foyerSupportedDeviceTypes;
@property(retain, nonatomic) ASTFoyerHomeAutomationManager *foyerHomeAutomationManager; // @synthesize foyerHomeAutomationManager=_foyerHomeAutomationManager;
@property(retain, nonatomic) ASTS3HomeAutomationManager *s3HomeAutomationManager; // @synthesize s3HomeAutomationManager=_s3HomeAutomationManager;
@property(nonatomic) __weak id <ASTHomeAutomationExecutionDelegate> executionDelegate; // @synthesize executionDelegate=_executionDelegate;
@property(nonatomic) __weak id <ASTHomeAutomationNetworkLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) id <SSOAuthorization> ssoAuth; // @synthesize ssoAuth=_ssoAuth;
- (void).cxx_destruct;
- (_Bool)foyerSupportedWithDevices:(id)arg1;
- (void)sendParameter:(id)arg1 forDevices:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sendParameters:(id)arg1 forDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateStateForDevices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateStateForDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchDeviceByID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithHomeControlService:(id)arg1 foyerSupportedDeviceTypes:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

