//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class NSSet, UIEvent;

@protocol TFNCustomTabBarTouchEventObserver <NSObject>
- (void)observeTouchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)observeTouchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)observeTouchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)observeTouchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end
