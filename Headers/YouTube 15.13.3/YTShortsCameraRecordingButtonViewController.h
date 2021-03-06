//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, YTShortsCameraRecordingButton, YTShortsCameraRecordingButtonGestureRecognizer;
@protocol YTShortsCameraRecordingButtonViewControllerDelegate;

@interface YTShortsCameraRecordingButtonViewController : UIViewController <UIGestureRecognizerDelegate>
{
    YTShortsCameraRecordingButtonGestureRecognizer *_gestureRecoginzer;
    double _lastZoomPositionY;
    _Bool _didInitializeLastZoomPosition;
    _Bool _isTracking;
    _Bool _isHandsFree;
    _Bool _isCancelled;
    id <YTShortsCameraRecordingButtonViewControllerDelegate> _delegate;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) _Bool isHandsFree; // @synthesize isHandsFree=_isHandsFree;
@property(readonly, nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(nonatomic) __weak id <YTShortsCameraRecordingButtonViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)animateView:(id)arg1 toTranslation:(struct CGPoint)arg2;
- (void)updateRecordingButtonTranslation:(struct CGPoint)arg1;
- (struct CGRect)zoomRect;
- (void)updateZoomForPosition:(struct CGPoint)arg1;
- (void)resetViewState;
- (void)cancelGestureRecognizer;
- (void)handleTouchesEnded;
- (void)handleTouchesMoved;
- (void)handleTouchesBegan;
- (void)handleGesture:(id)arg1;
- (void)recordingDidFinish;
- (void)cancelRecordingState;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTShortsCameraRecordingButton *view; // @dynamic view;

@end

