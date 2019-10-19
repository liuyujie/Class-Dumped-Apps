//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCInteractiveSwipeTransitionController, UIPanGestureRecognizer, UIViewController;

@protocol SCInteractiveSwipeTransitionControllerDataSource <NSObject>
- (void)swipeTransitionController:(SCInteractiveSwipeTransitionController *)arg1 transitionViewController:(UIViewController *)arg2 withTransitionType:(unsigned long long)arg3 direction:(unsigned long long)arg4 completion:(void (^)(void))arg5;
- (_Bool)shouldBeginTransitionWithSwipeTransitionController:(SCInteractiveSwipeTransitionController *)arg1 gestureRecognizer:(UIPanGestureRecognizer *)arg2;
- (UIViewController *)presentingViewControllerWithSwipeTransitionController:(SCInteractiveSwipeTransitionController *)arg1;
- (UIViewController *)presentedViewControllerWithSwipeTransitionController:(SCInteractiveSwipeTransitionController *)arg1;
@end
