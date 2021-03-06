//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGChangePhoneNumberViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGConfirmPhoneNumberViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGenericMegaphoneViewV2Delegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMegaphonePresenterProtocol-Protocol.h>

@class IGConfirmPhoneHelper, IGGenericMegaphone, IGGenericMegaphoneViewV2, IGUserSession, NSString, UIView;
@protocol IGGenericMegaphoneLogger, IGMegaphonePresenterDelegate;

@interface IGConfirmedContactMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGChangePhoneNumberViewControllerDelegate, IGConfirmPhoneNumberViewControllerDelegate, IGMegaphonePresenterProtocol>
{
    IGGenericMegaphone *_megaphone;
    IGGenericMegaphoneViewV2 *_megaphoneView;
    id <IGGenericMegaphoneLogger> _logger;
    NSString *_phoneNumber;
    IGUserSession *_userSession;
    IGConfirmPhoneHelper *_confirmHelper;
    id <IGMegaphonePresenterDelegate> _delegate;
}

+ (unsigned long long)_buttonActionFromString:(id)arg1;
+ (_Bool)canPresentMegaphone:(id)arg1 context:(id)arg2;
@property(nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_turnOnSMS;
- (void)_sendSMSCodeToPhoneNumber:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void)changePhonenumberViewController:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)changePhonenumberViewController:(id)arg1 willPresentCountryCodeViewController:(id)arg2;
- (void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned long long)arg4;
- (void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1;
- (void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1;
- (void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;
- (void)_handleSMSSentWithSettingsDict:(id)arg1;
- (void)_confirmContactHandlerForMegaphoneButton:(id)arg1;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)logMegaphoneSeen;
@property(readonly, nonatomic) UIView *viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 logger:(id)arg2 userSession:(id)arg3 module:(id)arg4;
- (id)initWithMegaphone:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

