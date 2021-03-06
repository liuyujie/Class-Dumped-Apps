//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOTextFieldValidator-Protocol.h"
#import "GWACollapsibleFlowSection-Protocol.h"
#import "GWAFocusDelegate-Protocol.h"
#import "GWAMegalogsSupporting-Protocol.h"
#import "GWASummaryViewDelegate-Protocol.h"

@class GWAComponentGroup, GWAFlowContext, GWAMegalogsContext, GWATextFieldView, NSArray, NSNumber, NSString, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWANameFormFlowSection : NSObject <GOOTextFieldValidator, GWAFocusDelegate, GWASummaryViewDelegate, GWACollapsibleFlowSection, GWAMegalogsSupporting>
{
    NSString *_initialValue;
    NSString *_placeholder;
    NSString *_serverError;
    NSString *_lastValidatedValue;
    GWATextFieldView *_textField;
    GWAFlowContext *_context;
    _Bool _shouldValidate;
    long long _darkModeState;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareMegalogsContexts;
- (void)summaryViewTap:(id)arg1;
- (id)textField;
- (void)applyDarkMode;
- (void)applyLightMode;
- (void)checkTraitCollection;
- (void)viewUnfocused:(id)arg1;
- (void)viewFocused:(id)arg1;
- (id)validationResultsForTextField:(id)arg1;
- (void)handleErrorMessage:(id)arg1;
- (id)firstFocusableIndexPath;
- (id)nextIndexPathToFocus:(id)arg1;
- (id)firstIndexPathToFocus;
- (void)rowTapped:(unsigned long long)arg1;
- (void)validate;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) _Bool hasErrors;
- (id)summaryView;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)value;
- (id)initWithPlaceholder:(id)arg1 initialValue:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

