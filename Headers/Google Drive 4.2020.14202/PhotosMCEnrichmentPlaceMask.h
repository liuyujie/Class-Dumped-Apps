//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCFeaturePlaceMask, PhotosMCLocationPointMask;

@interface PhotosMCEnrichmentPlaceMask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCFeaturePlaceMask *featurePlace; // @dynamic featurePlace;
@property(nonatomic) _Bool hasFeaturePlace; // @dynamic hasFeaturePlace;
@property(nonatomic) _Bool hasPoint; // @dynamic hasPoint;
@property(retain, nonatomic) PhotosMCLocationPointMask *point; // @dynamic point;

@end

