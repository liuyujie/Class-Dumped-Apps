//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFont.h>

@class NSDictionary;

@interface UIFont (MaterialScalable)
@property(copy, nonatomic, setter=mdc_setScalingCurve:) NSDictionary *mdc_scalingCurve;
- (id)mdc_scaledFontAtDefaultSize;
- (id)mdc_scaledFontForCurrentSizeCategory;
- (id)mdc_scaledFontForTraitEnvironment:(id)arg1;
- (id)mdc_scaledFontForSizeCategory:(id)arg1;
@end
