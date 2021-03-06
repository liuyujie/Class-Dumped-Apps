//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface BTUIKAppearance : NSObject
{
    _Bool _useBlurs;
    UIColor *_overlayColor;
    UIColor *_tintColor;
    UIColor *_barBackgroundColor;
    NSString *_fontFamily;
    NSString *_boldFontFamily;
    UIColor *_formBackgroundColor;
    UIColor *_formFieldBackgroundColor;
    UIColor *_primaryTextColor;
    UIColor *_navigationBarTitleTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_disabledColor;
    UIColor *_placeholderTextColor;
    UIColor *_lineColor;
    UIColor *_errorForegroundColor;
    long long _blurStyle;
    long long _activityIndicatorViewStyle;
    long long _postalCodeFormFieldKeyboardType;
}

+ (id)metrics;
+ (float)largeIconHeight;
+ (float)largeIconWidth;
+ (float)smallIconHeight;
+ (float)smallIconWidth;
+ (float)verticalSectionSpace;
+ (float)verticalFormSpaceTight;
+ (float)verticalFormSpace;
+ (float)formCellHeight;
+ (float)horizontalFormContentPadding;
+ (id)styledNavigationTitleLabel;
+ (void)styleSystemLabelSecondary:(id)arg1;
+ (void)styleLargeLabelSecondary:(id)arg1;
+ (void)styleLabelSecondary:(id)arg1;
+ (void)styleSmallLabelPrimary:(id)arg1;
+ (void)styleSmallLabelBoldPrimary:(id)arg1;
+ (void)styleLabelBoldPrimary:(id)arg1;
+ (void)styleLabelPrimary:(id)arg1;
+ (void)darkTheme;
+ (void)lightTheme;
+ (id)sharedInstance;
@property(nonatomic) long long postalCodeFormFieldKeyboardType; // @synthesize postalCodeFormFieldKeyboardType=_postalCodeFormFieldKeyboardType;
@property(nonatomic) _Bool useBlurs; // @synthesize useBlurs=_useBlurs;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(retain, nonatomic) UIColor *errorForegroundColor; // @synthesize errorForegroundColor=_errorForegroundColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(retain, nonatomic) UIColor *disabledColor; // @synthesize disabledColor=_disabledColor;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *navigationBarTitleTextColor; // @synthesize navigationBarTitleTextColor=_navigationBarTitleTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(retain, nonatomic) UIColor *formFieldBackgroundColor; // @synthesize formFieldBackgroundColor=_formFieldBackgroundColor;
@property(retain, nonatomic) UIColor *formBackgroundColor; // @synthesize formBackgroundColor=_formBackgroundColor;
@property(retain, nonatomic) NSString *boldFontFamily; // @synthesize boldFontFamily=_boldFontFamily;
@property(retain, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) UIColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=highlightedTintColor) UIColor *highlightedTintColor;

@end

