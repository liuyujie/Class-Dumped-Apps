//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface T1ProfileCalloutArrowDecorationView : UIView
{
    UIColor *_fillColor;
    UIColor *_edgeColor;
    struct CGRect _arrowRect;
}

@property(retain, nonatomic) UIColor *edgeColor; // @synthesize edgeColor=_edgeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) struct CGRect arrowRect; // @synthesize arrowRect=_arrowRect;
- (void).cxx_destruct;
- (void)_dynamicColorsDidReload:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 arrowRect:(struct CGRect)arg2 fillColor:(id)arg3 edgeColor:(id)arg4;

@end
