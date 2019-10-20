//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentMXUnverifiedCardHelper.h"

@interface WAPaymentMXUnverifiedCardHelper (MainAppLibrary)
- (void)saveRetryRemainingAttempts:(id)arg1 retryType:(long long)arg2 credentialId:(id)arg3;
- (void)saveRetryAvailabilityTimestamp:(id)arg1 retryType:(long long)arg2 credentialId:(id)arg3;
- (void)save3dsUrl:(id)arg1 forCredentialId:(id)arg2;
- (void)saveOTPDataIfNeededWithLength:(id)arg1 numberMatch:(id)arg2 forCredentialId:(id)arg3;
- (void)saveCardholderName:(id)arg1 forCredentialId:(id)arg2;
- (void)saveRetryDataForResponse:(id)arg1 type:(long long)arg2 credentialId:(id)arg3;
- (void)saveCardVerificationDataForResponse:(id)arg1 credentialId:(id)arg2;
@end
