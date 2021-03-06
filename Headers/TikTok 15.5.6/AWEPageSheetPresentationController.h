//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEPageSheetDecorationView, AWEPageSheetPresentationDimmingView, AWEPageSheetView, NSString, UIPercentDrivenInteractiveTransition, UIView, UIViewController;
@protocol AWEPageSheetPresentationObserving, AWEPageSheetPresentationPhaseTransitionDelegate;

@interface AWEPageSheetPresentationController : UIPresentationController <UIGestureRecognizerDelegate>
{
    _Bool _shouldUsePresentationContext;
    _Bool _hapticFeedbackEnabled;
    _Bool _isPresenting;
    _Bool _isDismissing;
    _Bool _shouldDismiss;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    AWEPageSheetDecorationView *_decorationView;
    AWEPageSheetPresentationDimmingView *_dimmingView;
    AWEPageSheetView *_sheetView;
    UIViewController *_sourceViewController;
    double _dismissalThreshod;
    id <AWEPageSheetPresentationObserving> _presentationObserver;
    id <AWEPageSheetPresentationPhaseTransitionDelegate> _phaseTransitionDelegate;
    long long _phase;
    UIView *_tabBarSnapshotView;
    struct CGSize _preferredContentSize;
    struct CGRect _sheetViewFrameWhenPanBegan;
}

@property(nonatomic) _Bool shouldDismiss; // @synthesize shouldDismiss=_shouldDismiss;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(retain, nonatomic) UIView *tabBarSnapshotView; // @synthesize tabBarSnapshotView=_tabBarSnapshotView;
@property(nonatomic) struct CGRect sheetViewFrameWhenPanBegan; // @synthesize sheetViewFrameWhenPanBegan=_sheetViewFrameWhenPanBegan;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) __weak id <AWEPageSheetPresentationPhaseTransitionDelegate> phaseTransitionDelegate; // @synthesize phaseTransitionDelegate=_phaseTransitionDelegate;
@property(nonatomic) __weak id <AWEPageSheetPresentationObserving> presentationObserver; // @synthesize presentationObserver=_presentationObserver;
@property(nonatomic, getter=isHapticFeedbackEnabled) _Bool hapticFeedbackEnabled; // @synthesize hapticFeedbackEnabled=_hapticFeedbackEnabled;
@property(nonatomic) double dismissalThreshod; // @synthesize dismissalThreshod=_dismissalThreshod;
@property(nonatomic) _Bool shouldUsePresentationContext; // @synthesize shouldUsePresentationContext=_shouldUsePresentationContext;
@property(readonly, nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) AWEPageSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) AWEPageSheetPresentationDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) AWEPageSheetDecorationView *decorationView; // @synthesize decorationView=_decorationView;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
- (void).cxx_destruct;
- (void)transitionToPhase:(long long)arg1;
- (void)transitionToFullPhaseIfNeeded;
- (void)generateDismissingFeedback;
- (void)generateShowingFeedback;
- (void)setScrollViewToTop:(id)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)contentInsetsForScrollView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleScrollViewPan:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (_Bool)shouldRemovePresentersView;
- (_Bool)shouldPresentInFullscreen;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)observers;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)presentedView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

