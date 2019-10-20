//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVStylePack-Protocol.h"

@class NSArray;

@interface GAVMaterialDesignStylePack : NSObject <GAVStylePack>
{
    NSArray *_axesStyleRules;
    NSArray *_seriesStyleRules;
}

+ (id)colorsWithHexStrings:(id)arg1;
+ (id)seriesStyleRules;
+ (id)axesStyleRules;
+ (id)pieSegmentStyleFromParallelColorArray:(id)arg1 seriesStyle:(id)arg2;
+ (id)pointStyleFromParallelColorArray:(id)arg1 seriesStyle:(id)arg2;
+ (id)lineStyleFromParallelColorArray:(id)arg1 seriesStyle:(id)arg2;
+ (unsigned long long)indexOfColor:(id)arg1 inArray:(id)arg2;
+ (id)barStyleFromParallelColorArray:(id)arg1 seriesStyle:(id)arg2;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *seriesStyleRules; // @synthesize seriesStyleRules=_seriesStyleRules;
@property(readonly, nonatomic) NSArray *axesStyleRules; // @synthesize axesStyleRules=_axesStyleRules;
- (void).cxx_destruct;
- (id)animationStrategyForRendererType:(id)arg1;
- (id)seriesAntiHighlightStyleForSeriesSpec:(id)arg1 seriesStyle:(id)arg2;
- (id)seriesHighlightStyleForSeriesSpec:(id)arg1 seriesStyle:(id)arg2;
- (id)datumAntiHighlightStyleForSeriesSpec:(id)arg1 seriesStyle:(id)arg2;
- (id)datumHighlightStyleForSeriesSpec:(id)arg1 seriesStyle:(id)arg2;
- (id)stylesFromRules:(id)arg1 filteredByKey:(id)arg2;
- (id)stylesForSeriesSpec:(id)arg1;
- (id)stylesForAxisSpec:(id)arg1;
- (id)init;

@end

