//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentBaseHandlerErrorDelegate-Protocol.h"

@class _TtC14MainAppLibrary36PaymentCreateOrConfirmAccountHandler, _TtC8Payments20WAPaymentBaseAccount, _TtC8Payments22WAPaymentConfiguration;

@protocol _TtP14MainAppLibrary44PaymentCreateOrConfirmAccountHandlerDelegate_ <WAPaymentBaseHandlerErrorDelegate>
- (void)createOrConfirmAccountHandler:(_TtC14MainAppLibrary36PaymentCreateOrConfirmAccountHandler *)arg1 didConfirmAccount:(_TtC8Payments20WAPaymentBaseAccount *)arg2 paymentConfiguration:(_TtC8Payments22WAPaymentConfiguration *)arg3;
- (void)createOrConfirmAccountHandler:(_TtC14MainAppLibrary36PaymentCreateOrConfirmAccountHandler *)arg1 didCreateAccount:(_TtC8Payments20WAPaymentBaseAccount *)arg2;
@end

