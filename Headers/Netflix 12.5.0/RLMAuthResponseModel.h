//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RLMTokenModel;

@interface RLMAuthResponseModel : NSObject
{
    RLMTokenModel *_accessToken;
    RLMTokenModel *_refreshToken;
}

@property(retain, nonatomic) RLMTokenModel *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) RLMTokenModel *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 requireAccessToken:(_Bool)arg2 requireRefreshToken:(_Bool)arg3;

@end
