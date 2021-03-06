//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PGPhotoEditorView, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface TGPhotoEditorPreviewView : UIView
{
    UIView *_snapshotView;
    UIView *_transitionView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_pressGestureRecognizer;
    _Bool _needsTransitionIn;
    UIImage *_delayedImage;
    UIView *_paintingContainerView;
    _Bool _paintingHidden;
    struct CGRect _cropRect;
    long long _cropOrientation;
    double _cropRotation;
    _Bool _cropMirrored;
    struct CGSize _originalSize;
    _Bool _isTracking;
    PGPhotoEditorView *_imageView;
    UIImageView *_paintingView;
    CDUnknownBlockType _tapped;
    CDUnknownBlockType _touchedDown;
    CDUnknownBlockType _touchedUp;
    CDUnknownBlockType _interactionEnded;
}

@property(readonly, nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(copy, nonatomic) CDUnknownBlockType interactionEnded; // @synthesize interactionEnded=_interactionEnded;
@property(copy, nonatomic) CDUnknownBlockType touchedUp; // @synthesize touchedUp=_touchedUp;
@property(copy, nonatomic) CDUnknownBlockType touchedDown; // @synthesize touchedDown=_touchedDown;
@property(copy, nonatomic) CDUnknownBlockType tapped; // @synthesize tapped=_tapped;
@property(readonly, nonatomic) UIImageView *paintingView; // @synthesize paintingView=_paintingView;
@property(readonly, nonatomic) PGPhotoEditorView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGPoint)fittedCropCenterScale:(double)arg1;
- (void)setActualImageHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handlePress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)performTransitionToCropAnimated:(_Bool)arg1;
- (void)prepareForTransitionOut;
- (void)performTransitionInIfNeeded;
- (void)setNeedsTransitionIn;
- (void)performTransitionInWithCompletion:(CDUnknownBlockType)arg1;
- (void)performTransitionFade;
- (void)prepareTransitionFadeView;
- (id)originalSnapshotView;
- (void)setPaintingHidden:(_Bool)arg1;
- (void)setCropRect:(struct CGRect)arg1 cropOrientation:(long long)arg2 cropRotation:(double)arg3 cropMirrored:(_Bool)arg4 originalSize:(struct CGSize)arg5;
- (void)setPaintingImageWithData:(id)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setSnapshotImageOnTransition:(id)arg1;
- (void)setSnapshotImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

