//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIAnimationControllerProtocol-Protocol.h"

@class NSString, OverlayView;

@interface SlideAnimationController : NSObject <NFUIAnimationControllerProtocol>
{
    _Bool _reverse;
    double duration;
    long long _slideDirection;
    OverlayView *_overlayView;
    CDStruct_1ac4c79d _overlayViewConfiguration;
}

@property(retain, nonatomic) OverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) long long slideDirection; // @synthesize slideDirection=_slideDirection;
@property(nonatomic) CDStruct_1ac4c79d overlayViewConfiguration; // @synthesize overlayViewConfiguration=_overlayViewConfiguration;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(nonatomic) double duration; // @synthesize duration;
- (void).cxx_destruct;
- (struct CGAffineTransform)transformForSize:(struct CGSize)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

