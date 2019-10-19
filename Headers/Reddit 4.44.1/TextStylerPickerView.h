//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol TextStylerPickerViewDelegate;

@interface TextStylerPickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <TextStylerPickerViewDelegate> _pickerDelegate;
    double _currentTextSize;
    NSArray *_colorList;
    NSArray *_backgroundColorList;
    NSArray *_colorHexValues;
    NSArray *_fontList;
}

@property(copy, nonatomic) NSArray *fontList; // @synthesize fontList=_fontList;
@property(copy, nonatomic) NSArray *colorHexValues; // @synthesize colorHexValues=_colorHexValues;
@property(copy, nonatomic) NSArray *backgroundColorList; // @synthesize backgroundColorList=_backgroundColorList;
@property(copy, nonatomic) NSArray *colorList; // @synthesize colorList=_colorList;
@property(nonatomic) double currentTextSize; // @synthesize currentTextSize=_currentTextSize;
@property(nonatomic) __weak id <TextStylerPickerViewDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void).cxx_destruct;
- (double)textFontCellWidth;
- (void)updateInitialTextColor:(id)arg1;
- (void)updateInitialBackgroundColor:(id)arg1;
- (void)updateInitialFont:(id)arg1;
- (void)configureLabel:(id)arg1 withBackgroundColor:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)components;
@property(readonly) long long backgroundColorIndex;
@property(readonly) long long textColorIndex;
@property(readonly) long long fontIndex;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
