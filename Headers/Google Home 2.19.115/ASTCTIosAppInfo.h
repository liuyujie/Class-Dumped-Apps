//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ASTCTIosAppInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(nonatomic) _Bool hasBundleIdentifier; // @dynamic hasBundleIdentifier;
@property(nonatomic) _Bool hasLocalizedAppName; // @dynamic hasLocalizedAppName;
@property(nonatomic) _Bool hasOpenAppURL; // @dynamic hasOpenAppURL;
@property(copy, nonatomic) NSString *localizedAppName; // @dynamic localizedAppName;
@property(copy, nonatomic) NSString *openAppURL; // @dynamic openAppURL;

@end

