//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCLoginOdlvChallenge;

@protocol SCUnauthenticatedOdlvService <NSObject>
- (void)sendOdlvAuthRequest:(long long)arg1 usernameOrEmail:(NSString *)arg2 odlvPreAuthToken:(NSString *)arg3 successBlock:(void (^)(long long, SOJUSecurityOdlvRequestOtpResponse *))arg4 failureBlock:(void (^)(long long, SOJUSecurityOdlvRequestOtpResponse *))arg5;
- (void)sendOdlvAuthRequestWithOdlvOtpType:(unsigned long long)arg1 challenge:(SCLoginOdlvChallenge *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(SCLoginOdlvAuthRequestError *))arg4;
@end
