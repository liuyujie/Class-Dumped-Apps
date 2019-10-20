//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVUIView.h"

@class GAVAxis, GAVAxisRenderer, NSArray;
@protocol GAVRangedScale;

@interface GAVAxisRendererView : GAVUIView
{
    _Bool _showBaseline;
    int _orientation;
    id <GAVRangedScale> _scale;
    GAVAxisRenderer *_renderer;
    double _animationDuration;
    GAVAxis *_axis;
    NSArray *_ticks;
    NSArray *_previouslyDrawnTicks;
}

@property(copy, nonatomic) NSArray *previouslyDrawnTicks; // @synthesize previouslyDrawnTicks=_previouslyDrawnTicks;
@property(copy, nonatomic) NSArray *ticks; // @synthesize ticks=_ticks;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) GAVAxis *axis; // @synthesize axis=_axis;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) GAVAxisRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) _Bool showBaseline; // @synthesize showBaseline=_showBaseline;
@property(retain, nonatomic) id <GAVRangedScale> scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (_Bool)hasTickCollision;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool isAnimated;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTicks;
- (void)drawWithoutAnimationRect:(struct CGRect)arg1;
- (void)animateTickLabel:(id)arg1 withAnimatingIn:(_Bool)arg2;
- (void)drawWithAnimationRect:(struct CGRect)arg1;
- (void)drawTick:(id)arg1 style:(id)arg2 rotation:(double)arg3;
- (void)drawAxisLineWithStyle:(id)arg1;
- (void)drawWithOrientation:(int)arg1 scale:(id)arg2 ticks:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 axis:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

