//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WAPaintCanvasTextItem;
@protocol WAPaintCanvasTextItemViewDelegate;

@interface WAPaintCanvasTextItemView : UIView
{
    WAPaintCanvasTextItem *_item;
    id <WAPaintCanvasTextItemViewDelegate> _delegate;
    double _usedLayoutWidth;
}

@property(readonly, nonatomic) double usedLayoutWidth; // @synthesize usedLayoutWidth=_usedLayoutWidth;
@property(nonatomic) __weak id <WAPaintCanvasTextItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) WAPaintCanvasTextItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)repositionInSuperview;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

