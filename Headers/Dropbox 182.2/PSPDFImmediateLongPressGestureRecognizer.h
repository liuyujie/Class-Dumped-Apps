//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

#import <PSPDFKitUI/PSPDFInitialStartingPointGesture-Protocol.h>

@interface PSPDFImmediateLongPressGestureRecognizer : UILongPressGestureRecognizer <PSPDFInitialStartingPointGesture>
{
    struct CGPoint _initialLocationInWindow;
}

@property(nonatomic) struct CGPoint initialLocationInWindow; // @synthesize initialLocationInWindow=_initialLocationInWindow;
- (struct CGPoint)initialOrCurrentLocationInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

