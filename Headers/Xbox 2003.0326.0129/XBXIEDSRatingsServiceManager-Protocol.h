//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXIAppObject-Protocol.h"

@class NSString;
@protocol XBXIEDSGetRatingRequestCallback, XBXIEDSSetRatingRequestCallback;

@protocol XBXIEDSRatingsServiceManager <XBXIAppObject>
- (void)unregisterFromPendingRequests:(id)arg1;
- (void)getRating:(NSString *)arg1 delegate:(id <XBXIEDSGetRatingRequestCallback>)arg2 context:(id)arg3;
- (void)setRating:(NSString *)arg1 mediaType:(long long)arg2 rating:(float)arg3 delegate:(id <XBXIEDSSetRatingRequestCallback>)arg4 context:(id)arg5;
@end

