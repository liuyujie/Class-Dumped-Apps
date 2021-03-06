//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "DBCollectionViewControllerSideAccessory-Protocol.h"

@class NSLayoutConstraint, NSString, NSTimer, UIImageView, UIScrollView, UIView;

@interface DBSpeedScroller : UIControl <DBCollectionViewControllerSideAccessory>
{
    UIScrollView *_scrollViewCurrentlyObserving;
    UIImageView *_handle;
    UIView *_handleContainer;
    NSTimer *_hideTimer;
    _Bool _hidesHandle;
    double _handlePositionByPercentage;
    NSLayoutConstraint *_handlePositionConstraint;
    double _initialTouchTime;
    struct CGPoint _initialTouchPoint;
    _Bool _didHideScrollBarInThisDrag;
}

+ (double)speedScrollerWidth;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)db_setValueWithTouch:(id)arg1;
- (void)db_setHandlePositionByPercentage:(double)arg1;
- (void)db_fadeOut;
- (void)db_resetHideTimerAnimated:(_Bool)arg1;
- (void)db_setPercentOffset:(double)arg1 forScrollView:(id)arg2;
- (double)db_percentOffsetForScrollView:(id)arg1;
- (void)db_updateScrollBarOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setShowsScrollBar:(_Bool)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 handleImage:(id)arg2 highlightedHandleImage:(id)arg3;
- (_Bool)takesOverScrollIndicators;
- (_Bool)requiresContentAdjustment;
- (double)preferredWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

