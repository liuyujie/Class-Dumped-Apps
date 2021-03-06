//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GMDCTypographyScheming-Protocol.h>

@class GMDCTypographySchemeTypeScaleStyles, NSString, UIFont;
@protocol GMDCTypographySchemingAdditions, MDCTypographyScheming;

@interface GMDCTypographyScheme : NSObject <GMDCTypographyScheming>
{
    _Bool _useCurrentContentSizeCategoryWhenApplied;
    UIFont *_headline1;
    UIFont *_headline2;
    UIFont *_headline3;
    UIFont *_headline4;
    UIFont *_headline5;
    UIFont *_headline6;
    UIFont *_display1;
    UIFont *_display2;
    UIFont *_display3;
    UIFont *_subhead1;
    UIFont *_subhead2;
    UIFont *_subtitle1;
    UIFont *_subtitle2;
    UIFont *_body1;
    UIFont *_body2;
    UIFont *_caption;
    UIFont *_overline;
    UIFont *_button;
    GMDCTypographySchemeTypeScaleStyles *_typeScaleStyles;
    id <MDCTypographyScheming> _mdcTypographyScheme;
    id <GMDCTypographySchemingAdditions> _typographySchemingAdditions;
}

@property(readonly, nonatomic) id <GMDCTypographySchemingAdditions> typographySchemingAdditions; // @synthesize typographySchemingAdditions=_typographySchemingAdditions;
@property(readonly, nonatomic) id <MDCTypographyScheming> mdcTypographyScheme; // @synthesize mdcTypographyScheme=_mdcTypographyScheme;
@property(retain, nonatomic) GMDCTypographySchemeTypeScaleStyles *typeScaleStyles; // @synthesize typeScaleStyles=_typeScaleStyles;
@property(nonatomic) _Bool useCurrentContentSizeCategoryWhenApplied; // @synthesize useCurrentContentSizeCategoryWhenApplied=_useCurrentContentSizeCategoryWhenApplied;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
@property(readonly, copy, nonatomic) UIFont *display3; // @synthesize display3=_display3;
@property(readonly, copy, nonatomic) UIFont *display2; // @synthesize display2=_display2;
@property(readonly, copy, nonatomic) UIFont *display1; // @synthesize display1=_display1;
@property(readonly, copy, nonatomic) UIFont *subhead2; // @synthesize subhead2=_subhead2;
@property(readonly, copy, nonatomic) UIFont *subhead1; // @synthesize subhead1=_subhead1;
@property(readonly, copy, nonatomic) UIFont *overline;
@property(readonly, copy, nonatomic) UIFont *button;
@property(readonly, copy, nonatomic) UIFont *caption;
@property(readonly, copy, nonatomic) UIFont *body2;
@property(readonly, copy, nonatomic) UIFont *body1;
@property(readonly, copy, nonatomic) UIFont *subtitle2;
@property(readonly, copy, nonatomic) UIFont *subtitle1;
@property(readonly, copy, nonatomic) UIFont *headline6;
@property(readonly, copy, nonatomic) UIFont *headline5;
@property(readonly, copy, nonatomic) UIFont *headline4;
@property(readonly, copy, nonatomic) UIFont *headline3;
@property(readonly, copy, nonatomic) UIFont *headline2;
@property(readonly, copy, nonatomic) UIFont *headline1;
@property(nonatomic) _Bool mdc_adjustsFontForContentSizeCategory;
- (void)commonGMDCTypographyScheme201905Init;
- (void)commonGMDCTypographySchemeLegacy201512Init;
- (id)initWithDefaults:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

