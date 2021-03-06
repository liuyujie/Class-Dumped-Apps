//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MPVolumeView, NSString, UISlider;

@interface MdxUiPlayerVolumeSlider : UIControl
{
    float _value;
    NSString *_volumeIcon;
    MPVolumeView *_volumeView;
    NSString *_currentVolumeIcon;
    UISlider *_volumeSlider;
    struct CGRect _thumbRect;
    struct CGRect _minimumTrackRect;
    struct CGRect _maximumTrackRect;
}

+ (id)iconForVolume:(float)arg1;
@property(nonatomic) __weak UISlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) NSString *currentVolumeIcon; // @synthesize currentVolumeIcon=_currentVolumeIcon;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) struct CGRect maximumTrackRect; // @synthesize maximumTrackRect=_maximumTrackRect;
@property(nonatomic) struct CGRect minimumTrackRect; // @synthesize minimumTrackRect=_minimumTrackRect;
@property(nonatomic) struct CGRect thumbRect; // @synthesize thumbRect=_thumbRect;
@property(copy, nonatomic) NSString *volumeIcon; // @synthesize volumeIcon=_volumeIcon;
@property(nonatomic) float value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)handleVolumeChanged:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)volumeOverlayEnabled:(_Bool)arg1;
- (void)updateSliderRects;
- (void)updateDisplayForCurrentValue;
- (void)updateWithValue:(float)arg1;
- (void)initSlider;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

