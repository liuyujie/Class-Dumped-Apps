//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATElementManagerViewController.h"

#import "SCATMenuObserver-Protocol.h"
#import "SCATModernMenuGestureFreehandSheetDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, SCATGestureDrawingElementManager, SCATGestureDrawingView, SCATMenu;
@protocol SCATGestureDrawingViewDelegate;

@interface SCATGestureDrawingViewController : SCATElementManagerViewController <SCATMenuObserver, SCATModernMenuGestureFreehandSheetDelegate>
{
    SCATMenu *_menu;
    _Bool _pressesOnMoveStart;
    _Bool _liftsOnMoveEnd;
    _Bool _areFingersPressed;
    _Bool _isRotating;
    _Bool _isCurving;
    id <SCATGestureDrawingViewDelegate> _delegate;
    double _angle;
    double _velocity;
    double _curvature;
    NSArray *_fingerPositions;
    NSTimer *_moveTimer;
    NSTimer *_generalTimer;
}

@property(nonatomic) _Bool isCurving; // @synthesize isCurving=_isCurving;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) NSTimer *generalTimer; // @synthesize generalTimer=_generalTimer;
@property(retain, nonatomic) NSTimer *moveTimer; // @synthesize moveTimer=_moveTimer;
@property(retain, nonatomic) NSArray *fingerPositions; // @synthesize fingerPositions=_fingerPositions;
@property(nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) _Bool areFingersPressed; // @synthesize areFingersPressed=_areFingersPressed;
@property(nonatomic) _Bool liftsOnMoveEnd; // @synthesize liftsOnMoveEnd=_liftsOnMoveEnd;
@property(nonatomic) _Bool pressesOnMoveStart; // @synthesize pressesOnMoveStart=_pressesOnMoveStart;
@property(nonatomic) __weak id <SCATGestureDrawingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)allowsDwellSelection;
- (void)scannerWillMakeManagerInactive:(id)arg1;
- (void)scannerWillMakeManagerActive:(id)arg1;
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;
- (id)lastElementWithOptions:(int *)arg1;
- (id)firstElementWithOptions:(int *)arg1;
- (id)_currentElementProvider;
- (void)menuDidFinishTransition:(id)arg1;
- (void)menuWillDisappear:(id)arg1;
- (void)toggleTouchForFreehandSheet:(id)arg1;
- (void)decreaseVelocityForFreehandSheet:(id)arg1;
- (void)increaseVelocityForFreehandSheet:(id)arg1;
- (void)bendLeftForFreehandSheet:(id)arg1;
- (void)bendRightForFreehandSheet:(id)arg1;
- (void)straightenForFreehandSheet:(id)arg1;
- (void)rotate90ClockwiseForFreehandSheet:(id)arg1;
- (void)rotate90CounterclockwiseForFreehandSheet:(id)arg1;
- (void)rotateClockwiseForFreehandSheet:(id)arg1;
- (void)rotateCounterclockwiseForFreehandSheet:(id)arg1;
- (void)bendForFreehandSheet:(id)arg1;
- (void)rotateForFreehandSheet:(id)arg1;
- (void)stopForFreehandSheet:(id)arg1;
- (void)autoLiftToggledForFreehandSheet:(id)arg1;
- (void)autoPressToggledForFreehandSheet:(id)arg1;
- (void)moveForFreehandSheet:(id)arg1;
- (void)moveToolbarForFreehandSheet:(id)arg1;
- (void)freehandSheet:(id)arg1 didHighlightStraighten:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightBendLeft:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightBendRight:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightRotateCW90:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightRotateCCW90:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightRotateCW:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightRotateCCW:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightBend:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightRotate:(_Bool)arg2;
- (void)freehandSheet:(id)arg1 didHighlightMove:(_Bool)arg2;
- (void)didPopFreehandSheet:(id)arg1;
- (double)curvatureForFreehandSheet:(id)arg1;
- (double)angleForFreehandSheet:(id)arg1;
- (_Bool)isAutoLiftOnForFreehandSheet:(id)arg1;
- (_Bool)isAutoPressOnForFreehandSheet:(id)arg1;
- (_Bool)isTouchOnForFreehandSheet:(id)arg1;
- (void)_cleanUp;
- (void)_move;
- (void)_curveOnLeft:(_Bool)arg1 withCurveRadius:(double)arg2;
- (void)_moveStraight;
- (struct CGPoint)_fingerCenter;
- (void)_endMovementAndForceLift:(_Bool)arg1;
- (void)_cancelMoveTimerAndEndMove:(_Bool)arg1;
- (_Bool)_isPerformingMove;
- (void)_decreaseCurvature;
- (void)_increaseCurvature;
- (void)_adjustCurvatureWithDirection:(double)arg1;
- (void)_rotateCounterclockwise;
- (void)_rotateClockwise;
- (void)_endGeneralTimer;
- (void)_startGeneralTimerWithSelector:(SEL)arg1 actionName:(id)arg2;
- (void)_uninstallStopButton;
- (void)_installStopButtonForActionName:(id)arg1;
- (double)_previewDistance;
@property(readonly, nonatomic) SCATGestureDrawingElementManager *drawingElementManager;
- (void)_pushFreehandSheetOfClass:(Class)arg1;
@property(readonly, nonatomic) SCATGestureDrawingView *mainView;
- (void)viewDidLoad;
- (void)loadView;
- (void)orientationDidChange:(id)arg1;
- (void)_updateMainViewToolbarFrame;
- (void)dealloc;
- (id)initWithElementManager:(id)arg1 startingFingerPositions:(id)arg2 menu:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
