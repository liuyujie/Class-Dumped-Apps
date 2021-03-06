//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface GOIClientAcquiredToken : NSObject <NSCopying>
{
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_accessTokenExpirationDate;
    NSString *_authorizationCode;
}

+ (id)clientAcquiredTokenWithAuthorizationCode:(id)arg1;
+ (id)clientAcquiredTokenWithRefreshToken:(id)arg1 accessToken:(id)arg2 accessTokenExpirationDate:(id)arg3;
+ (id)clientAcquiredTokenWithAccessToken:(id)arg1 accessTokenExpirationDate:(id)arg2;
+ (id)clientAcquiredTokenWithAccessToken:(id)arg1;
@property(readonly, nonatomic) NSString *authorizationCode; // @synthesize authorizationCode=_authorizationCode;
@property(readonly, nonatomic) NSDate *accessTokenExpirationDate; // @synthesize accessTokenExpirationDate=_accessTokenExpirationDate;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRefreshToken:(id)arg1 accessToken:(id)arg2 accessTokenExpirationDate:(id)arg3 authorizationCode:(id)arg4;

@end

