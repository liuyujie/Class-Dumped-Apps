//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface GRWAppSwitchingPreference : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int askEveryTimePreference; // @dynamic askEveryTimePreference;
@property(nonatomic) _Bool hasAskEveryTimePreference; // @dynamic hasAskEveryTimePreference;
@property(nonatomic) _Bool hasIntentType; // @dynamic hasIntentType;
@property(nonatomic) _Bool hasPreferredAppInstalledBundleIdentifier; // @dynamic hasPreferredAppInstalledBundleIdentifier;
@property(nonatomic) int intentType; // @dynamic intentType;
@property(copy, nonatomic) NSString *preferredAppInstalledBundleIdentifier; // @dynamic preferredAppInstalledBundleIdentifier;

@end

