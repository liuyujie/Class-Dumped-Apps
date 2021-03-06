//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <TelegramUI/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, NSString, TGModernButton, TGModernConversationInputLockView, TGModernConversationInputMicPallete, UIImage, UIImageView, UIPanGestureRecognizer, UIView;
@protocol TGModernConversationInputMicButtonDelegate, TGModernConversationInputMicButtonPresentation;

@interface TGModernConversationInputMicButton : UIButton <UIGestureRecognizerDelegate>
{
    struct CGPoint _touchLocation;
    UIPanGestureRecognizer *_panRecognizer;
    struct CGPoint _lastVelocity;
    _Bool _processCurrentTouch;
    double _lastTouchTime;
    _Bool _acceptTouchDownAsTouchUp;
    UIImageView *_innerCircleView;
    UIImageView *_outerCircleView;
    UIView *_innerIconWrapperView;
    UIImageView *_innerIconView;
    UIView *_lockPanelWrapperView;
    UIImageView *_lockPanelView;
    UIImageView *_lockArrowView;
    TGModernConversationInputLockView *_lockView;
    UIImage *_previousIcon;
    TGModernButton *_stopButton;
    double _currentScale;
    double _currentTranslation;
    double _targetTranslation;
    double _animationStartTime;
    CADisplayLink *_displayLink;
    double _currentLevel;
    double _inputLevel;
    _Bool _animatedIn;
    UIImage *_icon;
    id <TGModernConversationInputMicButtonPresentation> _presentation;
    _Bool _blocking;
    _Bool _locked;
    _Bool _fadeDisabled;
    id <TGModernConversationInputMicButtonDelegate> _delegate;
    TGModernConversationInputMicPallete *_pallete;
    UIImageView *_iconView;
    struct CGPoint _centerOffset;
}

@property(nonatomic) _Bool fadeDisabled; // @synthesize fadeDisabled=_fadeDisabled;
@property(readonly, nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(nonatomic) _Bool blocking; // @synthesize blocking=_blocking;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(retain, nonatomic) TGModernConversationInputMicPallete *pallete; // @synthesize pallete=_pallete;
@property(nonatomic) __weak id <TGModernConversationInputMicButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)addMicLevel:(double)arg1;
- (void)displayLinkUpdate;
- (void)_commitCompleted;
- (void)_commitLocked;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)stopPressed;
- (void)animateLock;
- (void)dismiss;
- (void)animateOut;
- (void)outerCircleTapGesture:(id)arg1;
- (void)animateIn;
- (id)stopButtonImage;
- (id)panelBackgroundImage;
- (void)updateOverlay;
@property(retain, nonatomic) UIImage *icon;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)displayLink;
- (void)dealloc;
- (void)panGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)outerCircleImage:(id)arg1;
- (id)innerCircleImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

