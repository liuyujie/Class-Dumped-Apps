//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCognacAppsMajorUpdateVersion;

@interface SCCognacAppsContentUpdateAlert : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMajorUpdateVersion; // @dynamic hasMajorUpdateVersion;
@property(nonatomic) _Bool majorUpdate; // @dynamic majorUpdate;
@property(copy, nonatomic) NSString *majorUpdateDescription; // @dynamic majorUpdateDescription;
@property(retain, nonatomic) SCCognacAppsMajorUpdateVersion *majorUpdateVersion; // @dynamic majorUpdateVersion;
@property(nonatomic) _Bool newApp; // @dynamic newApp;

@end
