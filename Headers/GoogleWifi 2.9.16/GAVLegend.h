//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVBehavior-Protocol.h"
#import "GAVLegend-Protocol.h"

@class NSArray, NSString, UIView;
@protocol GAVChart, GAVLegendItemFactory, GAVLegendLayout;

@interface GAVLegend : NSObject <GAVLegend, GAVBehavior>
{
    _Bool _renderRightToLeft;
    int _orientation;
    NSString *_name;
    NSArray *_seriesList;
    UIView<GAVLegendLayout> *_legendLayout;
    Class _itemEnumeratorClass;
    id <GAVLegendItemFactory> _itemFactory;
    id <GAVChart> _chart;
}

@property(nonatomic) __weak id <GAVChart> chart; // @synthesize chart=_chart;
@property(readonly, nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) id <GAVLegendItemFactory> itemFactory; // @synthesize itemFactory=_itemFactory;
@property(readonly, nonatomic) Class itemEnumeratorClass; // @synthesize itemEnumeratorClass=_itemEnumeratorClass;
@property(readonly, nonatomic) UIView<GAVLegendLayout> *legendLayout; // @synthesize legendLayout=_legendLayout;
@property(readonly, nonatomic) _Bool renderRightToLeft; // @synthesize renderRightToLeft=_renderRightToLeft;
@property(retain, nonatomic) NSArray *seriesList; // @synthesize seriesList=_seriesList;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)layout;
- (void)draw;
- (void)onDrawWithNotification:(id)arg1;
- (void)detachFromChart:(id)arg1;
- (void)attachToChart:(id)arg1;
- (id)initWithLegendLayout:(id)arg1 itemEnumeratorClass:(Class)arg2 itemFactory:(id)arg3 orientation:(int)arg4 renderRightToLeft:(_Bool)arg5;

@end

