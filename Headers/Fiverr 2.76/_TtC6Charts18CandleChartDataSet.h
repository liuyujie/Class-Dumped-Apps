//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtC6Charts34LineScatterCandleRadarChartDataSet.h>

#import <Charts/_TtP6Charts19ICandleChartDataSet_-Protocol.h>

@class UIColor;

@interface _TtC6Charts18CandleChartDataSet : _TtC6Charts34LineScatterCandleRadarChartDataSet <_TtP6Charts19ICandleChartDataSet_>
{
    // Error parsing type: , name: _barSpace
    // Error parsing type: , name: showCandleBar
    // Error parsing type: , name: shadowWidth
    // Error parsing type: , name: shadowColor
    // Error parsing type: , name: shadowColorSameAsCandle
    // Error parsing type: , name: neutralColor
    // Error parsing type: , name: increasingColor
    // Error parsing type: , name: decreasingColor
    // Error parsing type: , name: increasingFilled
    // Error parsing type: , name: decreasingFilled
}

- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1;
@property(nonatomic, readonly) _Bool isDecreasingFilled;
@property(nonatomic) _Bool decreasingFilled; // @synthesize decreasingFilled;
@property(nonatomic, readonly) _Bool isIncreasingFilled;
@property(nonatomic) _Bool increasingFilled; // @synthesize increasingFilled;
@property(nonatomic, retain) UIColor *decreasingColor; // @synthesize decreasingColor;
@property(nonatomic, retain) UIColor *increasingColor; // @synthesize increasingColor;
@property(nonatomic, retain) UIColor *neutralColor; // @synthesize neutralColor;
@property(nonatomic, readonly) _Bool isShadowColorSameAsCandle;
@property(nonatomic) _Bool shadowColorSameAsCandle; // @synthesize shadowColorSameAsCandle;
@property(nonatomic, retain) UIColor *shadowColor; // @synthesize shadowColor;
@property(nonatomic) double shadowWidth; // @synthesize shadowWidth;
@property(nonatomic) _Bool showCandleBar; // @synthesize showCandleBar;
@property(nonatomic) double barSpace;
- (void)calcMinMaxYWithEntry:(id)arg1;
- (id)initWithEntries:(id)arg1 label:(id)arg2;
- (id)init;

@end

