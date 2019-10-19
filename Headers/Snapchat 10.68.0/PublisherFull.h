//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PublisherFull : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *availableCountryBlacklistArray; // @dynamic availableCountryBlacklistArray;
@property(readonly, nonatomic) unsigned long long availableCountryBlacklistArray_Count; // @dynamic availableCountryBlacklistArray_Count;
@property(retain, nonatomic) NSMutableArray *availableCountryWhitelistArray; // @dynamic availableCountryWhitelistArray;
@property(readonly, nonatomic) unsigned long long availableCountryWhitelistArray_Count; // @dynamic availableCountryWhitelistArray_Count;
@property(retain, nonatomic) NSMutableArray *broadcastCountryBlacklistArray; // @dynamic broadcastCountryBlacklistArray;
@property(readonly, nonatomic) unsigned long long broadcastCountryBlacklistArray_Count; // @dynamic broadcastCountryBlacklistArray_Count;
@property(retain, nonatomic) NSMutableArray *broadcastCountryWhitelistArray; // @dynamic broadcastCountryWhitelistArray;
@property(readonly, nonatomic) unsigned long long broadcastCountryWhitelistArray_Count; // @dynamic broadcastCountryWhitelistArray_Count;
@property(nonatomic) long long editionId; // @dynamic editionId;
@property(nonatomic) _Bool isAdsEnabled; // @dynamic isAdsEnabled;
@property(nonatomic) _Bool isContentAgeGated; // @dynamic isContentAgeGated;
@property(nonatomic) _Bool isHidden; // @dynamic isHidden;
@property(nonatomic) _Bool isLive; // @dynamic isLive;
@property(nonatomic) _Bool isPublishingEnabled; // @dynamic isPublishingEnabled;
@property(nonatomic) _Bool isShow; // @dynamic isShow;
@property(nonatomic) _Bool isSponsored; // @dynamic isSponsored;
@property(nonatomic) _Bool isSubscribable; // @dynamic isSubscribable;
@property(retain, nonatomic) NSMutableArray *languageBlacklistArray; // @dynamic languageBlacklistArray;
@property(readonly, nonatomic) unsigned long long languageBlacklistArray_Count; // @dynamic languageBlacklistArray_Count;
@property(retain, nonatomic) NSMutableArray *languageWhitelistArray; // @dynamic languageWhitelistArray;
@property(readonly, nonatomic) unsigned long long languageWhitelistArray_Count; // @dynamic languageWhitelistArray_Count;
@property(nonatomic) long long publishTime; // @dynamic publishTime;
@property(copy, nonatomic) NSString *publisherDeeplink; // @dynamic publisherDeeplink;
@property(copy, nonatomic) NSString *publisherDescription; // @dynamic publisherDescription;
@property(copy, nonatomic) NSString *publisherFormalName; // @dynamic publisherFormalName;
@property(nonatomic) long long publisherId; // @dynamic publisherId;
@property(copy, nonatomic) NSString *publisherName; // @dynamic publisherName;
@property(retain, nonatomic) NSMutableArray *regionsArray; // @dynamic regionsArray;
@property(readonly, nonatomic) unsigned long long regionsArray_Count; // @dynamic regionsArray_Count;

@end
