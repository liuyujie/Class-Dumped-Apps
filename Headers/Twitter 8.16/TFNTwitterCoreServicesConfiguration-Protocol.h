//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>
#import <T1Twitter/TFSTwitterAPICommandConfiguration-Protocol.h>

@class NSNumber, NSSet;

@protocol TFNTwitterCoreServicesConfiguration <TFSTwitterAPICommandConfiguration, NSObject>
@property(readonly, nonatomic) unsigned long long maxNumberDiscountedURLs;
@property(readonly, nonatomic) NSNumber *coreServices2TNLBackgroundIdleTimeout;
@property(readonly, nonatomic) NSNumber *coreServices2TNLForegroundIdleTimeout;
@property(readonly, copy, nonatomic) NSSet *blackListedWebViewDomains;
@property(readonly, copy, nonatomic) NSSet *nonUsernamePaths;
@property(readonly, nonatomic) long long antispamQueryFrequency;
@property(readonly, nonatomic) unsigned long long typeaheadUserPrefetchSize;
@property(readonly, nonatomic) double typeaheadUserPrefetchRateInSeconds;
@property(readonly, copy, nonatomic) NSSet *blackListedEmailDomains;
@property(readonly, nonatomic) _Bool disableInlinePhotosInstagram;
@property(readonly, nonatomic) long long mediaURLLength;
@property(readonly, nonatomic) long long shortenedURLLengthSecure;
@end

