//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOPickerControl-Protocol.h"

@class GOODatePickerColorPalette, GOODatePickerSelectedDayView, NSArray, NSCalendar, NSDate, NSDateComponents, NSDateFormatter, NSDictionary, NSString, QTMButton;
@protocol GOODatePickerMonthViewDelegate;

@interface GOODatePickerMonthView : UIView <GOOPickerControl>
{
    NSDate *_startDate;
    NSCalendar *_calendar;
    NSArray *_weekdayNames;
    long long _firstDayOffset;
    long long _numberOfDays;
    long long _indexOfToday;
    long long _indexOfSelectedDate;
    long long _firstSelectableIndex;
    long long _lastSelectableIndex;
    NSDate *_todayDate;
    NSDateFormatter *_titleFormatter;
    NSDateFormatter *_accessibilityDayFormatter;
    GOODatePickerSelectedDayView *_selectedDayView;
    long long _numberOfRows;
    QTMButton *_titleButton;
    _Bool _hapticsEnabled;
    _Bool _titleActive;
    long long _style;
    GOODatePickerColorPalette *_colorPalette;
    NSDate *_date;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    id <GOODatePickerMonthViewDelegate> _delegate;
    NSDateComponents *_dateComponents;
    NSDictionary *_dayStyles;
    NSArray *_accessibilityElements;
}

@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(nonatomic, getter=isTitleActive) _Bool titleActive; // @synthesize titleActive=_titleActive;
@property(retain, nonatomic) NSDictionary *dayStyles; // @synthesize dayStyles=_dayStyles;
@property(retain, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
@property(nonatomic) __weak id <GOODatePickerMonthViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hapticsEnabled; // @synthesize hapticsEnabled=_hapticsEnabled;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) GOODatePickerColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (long long)selectableIndexForDate:(id)arg1;
- (void)updateSelectableRange;
- (struct CGRect)firstCellFrame;
- (void)updateWithSelectedDate;
- (long long)indexOfDate:(id)arg1;
- (void)didTapTitle:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)viewDidBecomeVisible;
- (_Bool)getDateIndex:(long long *)arg1 cellFrame:(struct CGRect *)arg2 forLocation:(struct CGPoint)arg3;
- (id)initWithFrame:(struct CGRect)arg1 calendar:(id)arg2 todayDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

