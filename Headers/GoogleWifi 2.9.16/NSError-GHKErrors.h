//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (GHKErrors)
+ (id)NSErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ghk_invalidFetcherError;
+ (id)ghk_noValidRecommendationsFoundError;
+ (id)ghk_invalidRecommendationsResponseError;
+ (id)ghk_invalidRealtimeSupportStatusResponseErrorWithUserInfo:(id)arg1;
+ (id)ghk_invalidContactFormResponseErrorWithUserInfo:(id)arg1;
+ (id)ghk_invalidChatUpdateResponseErrorWithUserInfo:(id)arg1;
+ (id)ghk_invalidChatRequestResponseErrorWithUserInfo:(id)arg1;
+ (id)ghk_invalidChatEventsResponseErrorWithUserInfo:(id)arg1;
+ (id)ghk_invalidChatEventsRequest;
+ (id)ghk_invalidCallbackRequestResponseErrorWithUserInfo:(id)arg1;
+ (id)ghk_invalidEscalationOptionsResponseErrorWithUserInfo:(id)arg1;
+ (id)ghk_invalidConfigurationsResponseErrorWithUserInfo:(id)arg1;
+ (id)ghk_invalidAutocommpleteResponseErrorWithUserInfo:(id)arg1;
@end

