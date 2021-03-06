//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuUUIDStreamItem.h"

@class NSNumber, NSString, QTMColorGroup, UIColor;
@protocol ASTMenuSliderDelegate;

@interface ASTMenuSliderStreamItem : ASTMenuUUIDStreamItem
{
    _Bool _updatesContinuously;
    QTMColorGroup *_colorGroup;
    double _value;
    double _minimumValue;
    double _maximumValue;
    unsigned long long _numberOfDiscreteValues;
    UIColor *_tickColor;
    NSString *_titleText;
    NSString *_minimumValueLabelText;
    NSString *_maximumValueLabelText;
    id <ASTMenuSliderDelegate> _delegate;
    NSNumber *_sliderHorizontalMargin;
    NSNumber *_sliderTopMargin;
    NSNumber *_sliderBottomMargin;
    NSNumber *_titleLabelToSliderControlSpacing;
    NSNumber *_valueLabelToSliderControlSpacing;
}

@property(retain, nonatomic) NSNumber *valueLabelToSliderControlSpacing; // @synthesize valueLabelToSliderControlSpacing=_valueLabelToSliderControlSpacing;
@property(retain, nonatomic) NSNumber *titleLabelToSliderControlSpacing; // @synthesize titleLabelToSliderControlSpacing=_titleLabelToSliderControlSpacing;
@property(retain, nonatomic) NSNumber *sliderBottomMargin; // @synthesize sliderBottomMargin=_sliderBottomMargin;
@property(retain, nonatomic) NSNumber *sliderTopMargin; // @synthesize sliderTopMargin=_sliderTopMargin;
@property(retain, nonatomic) NSNumber *sliderHorizontalMargin; // @synthesize sliderHorizontalMargin=_sliderHorizontalMargin;
@property(nonatomic) __weak id <ASTMenuSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *maximumValueLabelText; // @synthesize maximumValueLabelText=_maximumValueLabelText;
@property(copy, nonatomic) NSString *minimumValueLabelText; // @synthesize minimumValueLabelText=_minimumValueLabelText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIColor *tickColor; // @synthesize tickColor=_tickColor;
@property(nonatomic) _Bool updatesContinuously; // @synthesize updatesContinuously=_updatesContinuously;
@property(nonatomic) unsigned long long numberOfDiscreteValues; // @synthesize numberOfDiscreteValues=_numberOfDiscreteValues;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
- (void).cxx_destruct;
- (id)associatedSettingsUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

