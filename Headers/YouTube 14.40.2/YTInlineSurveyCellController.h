//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTInlineSurveyPopoverDialogViewDelegate.h"
#import "YTInlineSurveyViewDelegate.h"

@class NSString, YTIInlineSurveyRenderer, YTInlineSurveyPopoverDialogViewController, YTInlineSurveyState;

@interface YTInlineSurveyCellController : YTInnerTubeCellController <YTInlineSurveyViewDelegate, YTInlineSurveyPopoverDialogViewDelegate>
{
    YTInlineSurveyState *_state;
    YTIInlineSurveyRenderer *_currentInlineSurveyRenderer;
    YTInlineSurveyPopoverDialogViewController *_dialogViewController;
    unsigned long long _selectedRadioButtonIndex;
    id <YTDismissalFollowUpViewModel> _renderer;
}

@property(nonatomic) unsigned long long selectedRadioButtonIndex; // @synthesize selectedRadioButtonIndex=_selectedRadioButtonIndex;
@property(retain, nonatomic) id <YTDismissalFollowUpViewModel> renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)moveToPopoverPendingStateWithInlineSurveyIndex:(unsigned long long)arg1;
- (void)submitRadioButtonSelection;
- (void)dismissPopover;
- (void)dismissInlineSurvey;
- (void)showTellUsMoreReasons:(id)arg1;
- (void)sendServiceEndpointResponderEventForRenderer:(id)arg1 atIndex:(long long)arg2;
- (void)setupEventHandlers;
- (void)didTapRadioButtonAtIndex:(long long)arg1;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapSubmitButton:(id)arg1;
- (void)didTapVideoContentView:(id)arg1;
- (void)didTapSecondButton:(id)arg1;
- (void)didTapFirstButton:(id)arg1;
- (void)didTapDismissView:(id)arg1;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
