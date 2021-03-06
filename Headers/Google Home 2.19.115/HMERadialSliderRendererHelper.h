//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMERadialSliderRendererHelper : NSObject
{
}

+ (const struct CGPath *)touchAreaForTrackView:(id)arg1 relativeToView:(id)arg2;
+ (id)animationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;
+ (id)strokeEndAnimationFromValue:(double)arg1 toValue:(double)arg2;
+ (id)strokeStartAnimationFromValue:(double)arg1 toValue:(double)arg2;
+ (id)rotationAnimationFromAngle:(double)arg1 toAngle:(double)arg2;
+ (void)adjustThumbLayer:(id)arg1 fromAngle:(double)arg2 toAngle:(double)arg3 animated:(_Bool)arg4;
+ (void)animateHighlightLayer:(id)arg1 animatedFrom:(double)arg2 toTrackValue:(double)arg3 highlightTrackDirection:(long long)arg4;
+ (void)adjustHighlightLayer:(id)arg1 highlightValue:(double)arg2 filledValue:(double)arg3 highlightTrackDirection:(long long)arg4;
+ (void)adjustThumbLayer:(id)arg1 trackLayer:(id)arg2 fromTrackValue:(double)arg3 toTrackValue:(double)arg4 fromThumbAngle:(double)arg5 toThumbAngle:(double)arg6 animated:(_Bool)arg7 flipTrack:(_Bool)arg8;

@end

