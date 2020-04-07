//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VISREFColorHelper : NSObject
{
}

+ (struct HueRange)hueRangeFromHues:(id)arg1 averageHue:(double)arg2;
+ (double)absoluteAngle:(double)arg1;
+ (struct CGVector)vectorOfHue:(double)arg1;
+ (double)averageOfHues:(id)arg1;
+ (_Bool)isHue:(double)arg1 withinMargin:(double)arg2 ofOtherHue:(double)arg3;
+ (double)normalizedAverageHue:(double)arg1 inHues:(id)arg2;
+ (id)adjustedBrightnessColor:(id)arg1 minimumFirstContrastRatio:(double)arg2 firstReferenceColor:(id)arg3 minimumSecondContrastRatio:(double)arg4 secondReferenceColor:(id)arg5;
+ (id)adjustedColor:(id)arg1 toMinimumConstrastRatio:(double)arg2 comparedToReferenceColor:(id)arg3;
+ (id)adjustedColor:(id)arg1 toMatchConstrastRatio:(double)arg2 comparedToReferenceColor:(id)arg3;
+ (double)sRGBFromChannel:(double)arg1;
+ (double)relativeLuminanceOfColor:(id)arg1;
+ (double)contrastRatioBetweenColor:(id)arg1 andReferenceColor:(id)arg2;
+ (id)UIColorFromSPTColor:(union SPTColor)arg1;

@end
