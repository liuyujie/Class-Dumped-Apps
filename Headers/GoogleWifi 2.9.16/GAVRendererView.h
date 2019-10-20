//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVUIView.h"

@class NSDictionary;
@protocol GAVChartStyle, GAVSeriesRenderer;

@interface GAVRendererView : GAVUIView
{
    id <GAVChartStyle> _style;
    id <GAVSeriesRenderer> _renderer;
    NSDictionary *_objects;
}

@property(retain, nonatomic) NSDictionary *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) id <GAVSeriesRenderer> renderer; // @synthesize renderer=_renderer;
@property(copy, nonatomic) id <GAVChartStyle> style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGPoint)locationInContentRect:(struct CGPoint)arg1;
- (id)getNearestSeriesToLocation:(struct CGPoint)arg1 series:(id)arg2;
- (id)getNearestDomainsToLocation:(struct CGPoint)arg1 series:(id)arg2;
- (id)getNearestDatumsToLocation:(struct CGPoint)arg1 series:(id)arg2;
- (void)drawWithSeriesCollection:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 renderer:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

