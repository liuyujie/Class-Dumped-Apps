//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAGradientLayer, CALayer, CAShapeLayer;

@interface KFAnimationBuilderContext : NSObject
{
    CALayer *_caLayer;
    const struct Layer *_layer;
    double _repeatCount;
    double _duration;
    double _progressOffset;
    struct CGSize _layerSize;
    struct CGRect _gradientBounds;
    struct CGAffineTransform _pathTransform;
}

@property(readonly, nonatomic) struct CGRect gradientBounds; // @synthesize gradientBounds=_gradientBounds;
@property(readonly, nonatomic) double progressOffset; // @synthesize progressOffset=_progressOffset;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(readonly, nonatomic) struct CGSize layerSize; // @synthesize layerSize=_layerSize;
@property(readonly, nonatomic) struct CGAffineTransform pathTransform; // @synthesize pathTransform=_pathTransform;
@property(readonly, nonatomic) const struct Layer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) __weak CALayer *caLayer; // @synthesize caLayer=_caLayer;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAGradientLayer *caGradientLayer;
@property(readonly, nonatomic) CAShapeLayer *caShapeLayer;
- (id)initWithCALayer:(id)arg1 layer:(const struct Layer *)arg2 pathTransform:(struct CGAffineTransform)arg3 layerSize:(struct CGSize)arg4 repeatCount:(double)arg5 duration:(double)arg6 progressOffset:(double)arg7 gradientBounds:(struct CGRect)arg8;

@end

