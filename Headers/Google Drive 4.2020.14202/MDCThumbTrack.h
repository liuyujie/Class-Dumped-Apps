//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "CAAnimationDelegate-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "UIContentSizeCategoryAdjusting-Protocol.h"

@class CALayer, CAShapeLayer, MDCDiscreteDotView, MDCInkTouchController, MDCNumericValueLabel, MDCRippleView, MDCThumbView, NSString, UIColor, UIFont, UIPanGestureRecognizer, UITouch, UIView;
@protocol MDCThumbTrackDelegate;

@interface MDCThumbTrack : UIControl <MDCInkTouchControllerDelegate, CAAnimationDelegate, UIContentSizeCategoryAdjusting>
{
    double _lastDispatchedValue;
    UIColor *_clearColor;
    UIView *_trackView;
    CAShapeLayer *_trackMaskLayer;
    CALayer *_trackOnLayer;
    MDCDiscreteDotView *_discreteDots;
    _Bool _shouldDisplayInk;
    _Bool _shouldDisplayRipple;
    MDCNumericValueLabel *_valueLabel;
    UIPanGestureRecognizer *_dummyPanRecognizer;
    double _valueLabelHeight;
    UITouch *_currentTouch;
    _Bool _isDraggingThumb;
    _Bool _didChangeValueDuringPan;
    double _panThumbGrabPosition;
    _Bool _enableRippleBehavior;
    _Bool _discrete;
    _Bool _allowAnimatedValueChanges;
    _Bool _thumbIsSmallerWhenDisabled;
    _Bool _thumbIsHollowAtStart;
    _Bool _thumbGrowsWhenDragging;
    _Bool _shouldDisplayDiscreteValueLabel;
    _Bool _shouldDisplayThumbWithDiscreteValueLabel;
    _Bool _disabledTrackHasThumbGaps;
    _Bool _trackEndsAreRounded;
    _Bool _trackEndsAreInset;
    _Bool _continuousUpdateEvents;
    _Bool _panningAllowedOnEntireControl;
    _Bool _tapsAllowedOnThumb;
    UIColor *_thumbEnabledColor;
    UIColor *_trackOnColor;
    MDCInkTouchController *_touchController;
    id <MDCThumbTrackDelegate> _delegate;
    UIColor *_thumbDisabledColor;
    UIColor *_trackOffColor;
    UIColor *_trackDisabledColor;
    UIColor *_trackOnTickColor;
    UIColor *_trackOffTickColor;
    UIColor *_valueLabelTextColor;
    UIColor *_valueLabelBackgroundColor;
    unsigned long long _numDiscreteValues;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _trackHeight;
    double _thumbRadius;
    unsigned long long _discreteDotVisibility;
    double _filledTrackAnchorValue;
    MDCThumbView *_thumbView;
    UIFont *_discreteValueLabelFont;
    UIColor *_primaryColor;
    MDCRippleView *_rippleView;
}

@property(retain, nonatomic) MDCRippleView *rippleView; // @synthesize rippleView=_rippleView;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(retain, nonatomic) UIFont *discreteValueLabelFont; // @synthesize discreteValueLabelFont=_discreteValueLabelFont;
@property(nonatomic) _Bool tapsAllowedOnThumb; // @synthesize tapsAllowedOnThumb=_tapsAllowedOnThumb;
@property(nonatomic) _Bool panningAllowedOnEntireControl; // @synthesize panningAllowedOnEntireControl=_panningAllowedOnEntireControl;
@property(nonatomic) _Bool continuousUpdateEvents; // @synthesize continuousUpdateEvents=_continuousUpdateEvents;
@property(retain, nonatomic) MDCThumbView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) double filledTrackAnchorValue; // @synthesize filledTrackAnchorValue=_filledTrackAnchorValue;
@property(nonatomic) _Bool trackEndsAreInset; // @synthesize trackEndsAreInset=_trackEndsAreInset;
@property(nonatomic) _Bool trackEndsAreRounded; // @synthesize trackEndsAreRounded=_trackEndsAreRounded;
@property(nonatomic) _Bool disabledTrackHasThumbGaps; // @synthesize disabledTrackHasThumbGaps=_disabledTrackHasThumbGaps;
@property(nonatomic) _Bool shouldDisplayThumbWithDiscreteValueLabel; // @synthesize shouldDisplayThumbWithDiscreteValueLabel=_shouldDisplayThumbWithDiscreteValueLabel;
@property(nonatomic) _Bool shouldDisplayDiscreteValueLabel; // @synthesize shouldDisplayDiscreteValueLabel=_shouldDisplayDiscreteValueLabel;
@property(nonatomic) unsigned long long discreteDotVisibility; // @synthesize discreteDotVisibility=_discreteDotVisibility;
@property(nonatomic) _Bool shouldDisplayRipple; // @synthesize shouldDisplayRipple=_shouldDisplayRipple;
@property(nonatomic) _Bool thumbGrowsWhenDragging; // @synthesize thumbGrowsWhenDragging=_thumbGrowsWhenDragging;
@property(nonatomic) _Bool thumbIsHollowAtStart; // @synthesize thumbIsHollowAtStart=_thumbIsHollowAtStart;
@property(nonatomic) _Bool thumbIsSmallerWhenDisabled; // @synthesize thumbIsSmallerWhenDisabled=_thumbIsSmallerWhenDisabled;
@property(nonatomic) double thumbRadius; // @synthesize thumbRadius=_thumbRadius;
@property(nonatomic) double trackHeight; // @synthesize trackHeight=_trackHeight;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) _Bool allowAnimatedValueChanges; // @synthesize allowAnimatedValueChanges=_allowAnimatedValueChanges;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic, getter=isDiscrete) _Bool discrete; // @synthesize discrete=_discrete;
@property(nonatomic) unsigned long long numDiscreteValues; // @synthesize numDiscreteValues=_numDiscreteValues;
@property(retain, nonatomic) UIColor *valueLabelBackgroundColor; // @synthesize valueLabelBackgroundColor=_valueLabelBackgroundColor;
@property(retain, nonatomic) UIColor *valueLabelTextColor; // @synthesize valueLabelTextColor=_valueLabelTextColor;
@property(nonatomic) _Bool enableRippleBehavior; // @synthesize enableRippleBehavior=_enableRippleBehavior;
@property(retain, nonatomic) UIColor *trackOffTickColor; // @synthesize trackOffTickColor=_trackOffTickColor;
@property(retain, nonatomic) UIColor *trackOnTickColor; // @synthesize trackOnTickColor=_trackOnTickColor;
@property(retain, nonatomic) UIColor *trackDisabledColor; // @synthesize trackDisabledColor=_trackDisabledColor;
@property(retain, nonatomic) UIColor *trackOffColor; // @synthesize trackOffColor=_trackOffColor;
@property(retain, nonatomic) UIColor *thumbDisabledColor; // @synthesize thumbDisabledColor=_thumbDisabledColor;
@property(nonatomic) __weak id <MDCThumbTrackDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDCInkTouchController *touchController; // @synthesize touchController=_touchController;
@property(retain, nonatomic) UIColor *trackOnColor; // @synthesize trackOnColor=_trackOnColor;
@property(retain, nonatomic) UIColor *thumbEnabledColor; // @synthesize thumbEnabledColor=_thumbEnabledColor;
- (void).cxx_destruct;
- (_Bool)isTracking;
- (void)sendDiscreteChangeAction;
- (void)sendContinuousChangeAction;
- (void)setValueFromThumbPosition:(struct CGPoint)arg1 isTap:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateDummyPanRecognizerTarget;
- (double)closestValueToTargetValue:(double)arg1;
- (double)relativeValueForValue:(double)arg1;
- (double)thumbPanRange;
- (double)thumbPanOffset;
- (_Bool)isValueAtMinimum;
- (_Bool)isPointOnThumb:(struct CGPoint)arg1;
- (struct CGPoint)trackPositionForValue:(double)arg1;
- (double)valueForThumbPosition:(struct CGPoint)arg1;
- (struct CGPoint)numericValueLabelPositionForValue:(double)arg1;
- (struct CGPoint)thumbPositionForValue:(double)arg1;
@property(readonly, nonatomic) struct CGPoint thumbPosition;
- (void)updateTrackMask;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateViewsForThumbAfterMoveIsAnimated:(_Bool)arg1 withDuration:(double)arg2;
- (void)updateViewsMainIsAnimated:(_Bool)arg1 withDuration:(double)arg2 animationOptions:(unsigned long long)arg3;
- (void)updateDotsViewActiveSegment;
- (void)updateViewsNoAnimation;
- (void)updateThumbAfterMoveAnimated:(_Bool)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateThumbTrackAnimated:(_Bool)arg1 animateThumbAfterMove:(_Bool)arg2 previousValue:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)interruptAnimation;
- (id)timingFunctionFromUIViewAnimationOptions:(unsigned long long)arg1;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (void)setEnabled:(_Bool)arg1;
- (void)setIcon:(id)arg1;
@property(nonatomic) double thumbRippleMaximumRadius;
- (void)setThumbMaxRippleRadius:(double)arg1;
- (double)thumbMaxRippleRadius;
- (void)setDisplayThumbRadius:(double)arg1;
- (void)setValue:(double)arg1 animated:(_Bool)arg2 animateThumbAfterMove:(_Bool)arg3 userGenerated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
- (void)updateTrackEnds;
@property(nonatomic) _Bool shouldDisplayFilledTrack;
@property(retain, nonatomic) UIColor *thumbShadowColor;
@property(nonatomic) double thumbElevation;
@property(retain, nonatomic) UIColor *rippleColor;
- (_Bool)shouldDisplayInk;
- (void)setShouldDisplayInk:(_Bool)arg1;
- (id)inkColor;
- (void)setInkColor:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 onTintColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) MDCDiscreteDotView *discreteDotView;
@property(readonly, nonatomic) MDCNumericValueLabel *numericValueLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

