//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol JETSpeedTestProgressDotViewDelegate;

@interface JETSpeedTestProgressDotView : UIView
{
    UIView<JETSpeedTestProgressDotViewDelegate> *_delegate;
}

@property(nonatomic) __weak UIView<JETSpeedTestProgressDotViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)moveFromStartView:(id)arg1 toEndView:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

