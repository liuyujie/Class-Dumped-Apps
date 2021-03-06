//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSData, PhotosMCAssociatedMedia_CompactWarpGrid_AffineTransform;

@interface PhotosMCAssociatedMedia_CompactWarpGrid : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCAssociatedMedia_CompactWarpGrid_AffineTransform *affineTransform; // @dynamic affineTransform;
@property(nonatomic) int gridDimX; // @dynamic gridDimX;
@property(nonatomic) int gridDimY; // @dynamic gridDimY;
@property(nonatomic) int gridSpacing; // @dynamic gridSpacing;
@property(nonatomic) _Bool hasAffineTransform; // @dynamic hasAffineTransform;
@property(nonatomic) _Bool hasGridDimX; // @dynamic hasGridDimX;
@property(nonatomic) _Bool hasGridDimY; // @dynamic hasGridDimY;
@property(nonatomic) _Bool hasGridSpacing; // @dynamic hasGridSpacing;
@property(nonatomic) _Bool hasNormalizedSamplingPositions; // @dynamic hasNormalizedSamplingPositions;
@property(nonatomic) _Bool hasPresentationTimestampMicros; // @dynamic hasPresentationTimestampMicros;
@property(copy, nonatomic) NSData *normalizedSamplingPositions; // @dynamic normalizedSamplingPositions;
@property(nonatomic) long long presentationTimestampMicros; // @dynamic presentationTimestampMicros;

@end

