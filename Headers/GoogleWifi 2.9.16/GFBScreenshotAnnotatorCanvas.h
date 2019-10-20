//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, GFBScreenshotAnnotatorStroke, NSMutableArray, UIBezierPath, UIImage, UIImageView;
@protocol GFBScreenshotAnnotatorCanvasDelegate;

@interface GFBScreenshotAnnotatorCanvas : UIView
{
    id <GFBScreenshotAnnotatorCanvasDelegate> _delegate;
    UIImage *_originalScreenshot;
    struct CGRect _layoutFrame;
    UIImageView *_drawingView;
    NSMutableArray *_strokes;
    GFBScreenshotAnnotatorStroke *_currentStroke;
    UIBezierPath *_currentPath;
    CAShapeLayer *_currentLayer;
}

+ (struct CGRect)boundingFrameForPoints:(id)arg1 withPadding:(double)arg2 inArea:(struct CGSize)arg3;
+ (struct CGColor *)strokeColorForAnnotationType:(unsigned long long)arg1;
+ (double)strokeWidthForAnnotationType:(unsigned long long)arg1;
+ (id)layerForStroke:(id)arg1 inBounds:(struct CGRect)arg2;
+ (double)widthForStroke:(id)arg1 inBounds:(struct CGRect)arg2;
+ (id)strokeLayerWithPath:(id)arg1 frame:(struct CGRect)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor *)arg4;
+ (id)strokePathWithPoints:(id)arg1;
+ (id)mapPoints:(id)arg1 fromArea:(struct CGSize)arg2 toArea:(struct CGSize)arg3;
+ (void)addLineToPath:(id)arg1 start:(struct CGPoint)arg2 end:(struct CGPoint)arg3;
+ (struct CGSize)shrinkSize:(struct CGSize)arg1 toFitSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)boundingFramesForAnnotationType:(unsigned long long)arg1;
- (void)addLineToCurrentLayerWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)exportImage;
- (id)blackoutAnnotationFrames;
- (id)highlightAnnotationFrames;
- (void)removeAllAnnotations;
- (void)undoLastAnnotation;
- (void)layoutSubviews;
- (id)initWithSreenshotImage:(id)arg1 frame:(struct CGRect)arg2 delegate:(id)arg3;

@end

