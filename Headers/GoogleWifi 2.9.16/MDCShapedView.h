//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCShapedShadowLayer;
@protocol MDCShapeGenerating;

@interface MDCShapedView : UIView
{
    struct CGSize _pathSize;
}

+ (Class)layerClass;
@property(readonly, nonatomic) struct CGSize pathSize; // @synthesize pathSize=_pathSize;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) id <MDCShapeGenerating> shapeGenerator;
@property(nonatomic) double elevation;
- (id)initWithFrame:(struct CGRect)arg1 shapeGenerator:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MDCShapedShadowLayer *layer; // @dynamic layer;

@end

