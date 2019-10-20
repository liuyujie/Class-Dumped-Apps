//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class NSNumber, NSString;

@interface GTLRAccesspoints_UserPreferences : GTLRObject
{
}

+ (id)userPreferencesForOfferOptInStatus:(long long)arg1 updateOptInStatus:(long long)arg2;
+ (id)userPreferencesForOfferEnabled:(_Bool)arg1 updateEnabled:(_Bool)arg2;
+ (long long)offersEmailNotificationOptInStatusForPreferences:(id)arg1;
+ (long long)updatesEmailNotificationOptInStatusForPreferences:(id)arg1;
+ (long long)optInStatusFromString:(id)arg1;
- (long long)offersEmailNotificationOptInStatus;
- (long long)updatesEmailNotificationOptInStatus;

// Remaining properties
@property(retain, nonatomic) NSNumber *enableEmailForOffers; // @dynamic enableEmailForOffers;
@property(retain, nonatomic) NSNumber *enableEmailForUpdates; // @dynamic enableEmailForUpdates;
@property(copy, nonatomic) NSString *enableEmailOffersOptInPref; // @dynamic enableEmailOffersOptInPref;
@property(copy, nonatomic) NSString *enableEmailUpdatesOptInPref; // @dynamic enableEmailUpdatesOptInPref;

@end

