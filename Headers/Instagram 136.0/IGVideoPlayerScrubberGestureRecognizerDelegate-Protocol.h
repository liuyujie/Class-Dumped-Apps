//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGVideoPlayerScrubberGestureRecognizer, UITouch;

@protocol IGVideoPlayerScrubberGestureRecognizerDelegate <UIGestureRecognizerDelegate>
- (void)gestureRecognizerDidFailAwaitingPressRequirements:(IGVideoPlayerScrubberGestureRecognizer *)arg1;
- (void)gestureRecognizerDidCompleteAwaitingPressRequirements:(IGVideoPlayerScrubberGestureRecognizer *)arg1;
- (void)gestureRecognizer:(IGVideoPlayerScrubberGestureRecognizer *)arg1 didMoveWithTouch:(UITouch *)arg2;
- (void)gestureRecognizer:(IGVideoPlayerScrubberGestureRecognizer *)arg1 didBeginAwaitingPressRequirementsWithTouch:(UITouch *)arg2;
@end

