//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRegistrationSubscreenDelegate-Protocol.h"

@class SCFideliusTempDeviceUserInfo, SOJUIdentityRegistrationV2ErrorResponse, SOJULoginResponse;

@protocol SCRegistrationPasswordDelegate <SCRegistrationSubscreenDelegate>
- (void)passwordFailedWithErrorResponse:(SOJUIdentityRegistrationV2ErrorResponse *)arg1;
- (void)passwordFinishedWithRegistrationResponse:(SOJULoginResponse *)arg1 fideliusTempIdentity:(SCFideliusTempDeviceUserInfo *)arg2;
@end
