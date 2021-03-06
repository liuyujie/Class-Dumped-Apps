//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMERemoteItemDelegate-Protocol.h"

@class NSString;

@protocol HMERangeRadialSliderRemoteItemViewDelegate <HMERemoteItemDelegate>
- (void)didTapRadialSliderButton;
- (void)didChangeRadialSliderLowerValue:(double)arg1 upperValue:(double)arg2 lowerHighlighted:(_Bool)arg3 upperHighlighted:(_Bool)arg4 sliderDragging:(_Bool)arg5;
- (NSString *)radialSliderAlternateLabelText;
- (NSString *)radialSliderMainButtonText;
- (double)rangeRadialSliderUpperValue;
- (double)rangeRadialSliderLowerValue;
- (long long)radialSliderButtonFormat;
- (_Bool)userInteractionEnableRadialSliderButton;

@optional
- (NSString *)radialSliderButtonAccessibilityLabel;
@end

