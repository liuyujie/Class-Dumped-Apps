//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveAnimationImp-Protocol.h"

@class HTSLiveAnimationRocket, NSString;

@interface HTSRocketMarqueeView : UIView <HTSLiveAnimationImp>
{
    HTSLiveAnimationRocket *_animation;
    CDUnknownBlockType _onCompletion;
    UIView *_containerView;
}

- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAnimation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
