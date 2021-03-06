//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, SSOIdentity;

@protocol ASTSettingsAppUser <NSObject>
@property(readonly, nonatomic) SSOIdentity *SSOIdentity;
- (void)switchToAccount:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)signInWithCompletion:(void (^)(long long))arg1;

@optional
@property(readonly, nonatomic) NSDate *authTokenExpiration;
@property(readonly, nonatomic) NSString *authToken;
@end

