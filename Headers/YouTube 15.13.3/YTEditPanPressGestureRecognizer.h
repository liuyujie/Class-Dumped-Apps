//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSSet, NSTimer;
@protocol YTEditPanPressGestureRecognizerDelegate;

@interface YTEditPanPressGestureRecognizer : UIGestureRecognizer
{
    NSSet *_touches;
    _Bool _trackingPan;
    struct CGPoint _startPoint;
    struct CGPoint _touchPoint;
    _Bool _trackingLongPress;
    double _cumulativeLongPressMovement;
    struct CGPoint _lastLongPressTouchPoint;
    NSTimer *_longPressTimer;
    id <YTEditPanPressGestureRecognizerDelegate> _delegate;
    double _minimumPanDistance;
    double _minimumLongPressDuration;
    double _allowableLongPressMovement;
}

@property(nonatomic) double allowableLongPressMovement; // @synthesize allowableLongPressMovement=_allowableLongPressMovement;
@property(nonatomic) double minimumLongPressDuration; // @synthesize minimumLongPressDuration=_minimumLongPressDuration;
@property(nonatomic) double minimumPanDistance; // @synthesize minimumPanDistance=_minimumPanDistance;
@property(nonatomic) __weak id <YTEditPanPressGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetLongPressTracking;
- (void)longPressTimerCallback;
- (void)checkLongPress;
- (void)updateStateChanged;
- (void)updateStatePossible;
- (void)updateState;
- (struct CGPoint)translationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)reset;
- (void)invokeCallbacks;
- (struct CGPoint)translation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)ignored;
- (void)dealloc;
- (id)init;

@end

