//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SnapBrainResponse_Results_NormalizedBoundingBox;

@interface SnapBrainResponse_Results_LogoDetection_LogoBoundingBox : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int frameIdx; // @dynamic frameIdx;
@property(nonatomic) _Bool hasNormalizedBox; // @dynamic hasNormalizedBox;
@property(nonatomic) int labelId; // @dynamic labelId;
@property(copy, nonatomic) NSString *labelName; // @dynamic labelName;
@property(retain, nonatomic) SnapBrainResponse_Results_NormalizedBoundingBox *normalizedBox; // @dynamic normalizedBox;
@property(nonatomic) float score; // @dynamic score;

@end
