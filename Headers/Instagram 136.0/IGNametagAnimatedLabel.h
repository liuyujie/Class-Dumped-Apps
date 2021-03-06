//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class CADisplayLink, NSMutableArray, NSMutableAttributedString;

@interface IGNametagAnimatedLabel : UILabel
{
    CADisplayLink *_displaylink;
    NSMutableArray *_animationDelayArray;
    long long _currentAnimationFrame;
    NSMutableAttributedString *_attributedString;
    CDUnknownBlockType _frameCallback;
    double _finalAlpha;
    struct CGPoint _centerAnimationPoint;
}

@property(nonatomic) struct CGPoint centerAnimationPoint; // @synthesize centerAnimationPoint=_centerAnimationPoint;
@property(nonatomic) double finalAlpha; // @synthesize finalAlpha=_finalAlpha;
- (void).cxx_destruct;
- (id)_linesArray;
- (void)_updateAttributedString;
- (void)_calculateAnimationStartDelayWithCenterCharacterIndex:(unsigned long long)arg1;
- (void)startAnimationWithFrameFinishedCallback:(CDUnknownBlockType)arg1;
- (void)finalizeAnimation;
- (void)resetAnimation;

@end

