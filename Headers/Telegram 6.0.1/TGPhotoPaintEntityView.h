//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TelegramUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TGPhotoPaintEntity, TGPhotoPaintEntitySelectionView, UIPanGestureRecognizer;

@interface TGPhotoPaintEntityView : UIView <UIGestureRecognizerDelegate>
{
    long long _entityUUID;
    double _angle;
    double _scale;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _measuring;
    double _realScale;
    struct CGAffineTransform _realTransform;
    CDUnknownBlockType _shouldTouchEntity;
    CDUnknownBlockType _entityBeganDragging;
    CDUnknownBlockType _entityChanged;
    TGPhotoPaintEntitySelectionView *_selectionView;
}

@property(nonatomic) __weak TGPhotoPaintEntitySelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(copy, nonatomic) CDUnknownBlockType entityChanged; // @synthesize entityChanged=_entityChanged;
@property(copy, nonatomic) CDUnknownBlockType entityBeganDragging; // @synthesize entityBeganDragging=_entityBeganDragging;
@property(copy, nonatomic) CDUnknownBlockType shouldTouchEntity; // @synthesize shouldTouchEntity=_shouldTouchEntity;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isTracking;
- (id)createSelectionView;
- (struct CGRect)selectionBounds;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)precisePointInside:(struct CGPoint)arg1;
- (void)handlePan:(id)arg1;
@property(nonatomic) _Bool inhibitGestures;
- (void)scale:(double)arg1 absolute:(_Bool)arg2;
- (void)rotate:(double)arg1 absolute:(_Bool)arg2;
- (void)pan:(struct CGPoint)arg1 absolute:(_Bool)arg2;
- (void)_notifyOfChange;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double angle;
- (void)_popIdentityTransformForMeasurement;
- (void)_pushIdentityTransformForMeasurement;
@property(readonly, nonatomic) long long entityUUID;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TGPhotoPaintEntity *entity; // @dynamic entity;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

