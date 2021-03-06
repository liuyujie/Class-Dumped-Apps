//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SGPercentageArcView : UIView
{
    double _percentage;
    double _strokeWidth;
    UIColor *_backgroundStrokeColor;
}

@property(retain, nonatomic) UIColor *backgroundStrokeColor; // @synthesize backgroundStrokeColor=_backgroundStrokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) double percentage; // @synthesize percentage=_percentage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityLabel;

@end

