//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CATiledLayer.h>

@class TFNTiledTextLayerState;

@interface TFNTiledTextLayer : CATiledLayer
{
    TFNTiledTextLayerState *_state;
}

+ (double)fadeDuration;
@property(retain) TFNTiledTextLayerState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)configureWithTextModel:(id)arg1;
- (void)setHitRange:(id)arg1;
- (void)setSelectionColor:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

