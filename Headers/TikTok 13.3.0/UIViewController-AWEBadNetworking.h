//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWEBadNetworkStateView;

@interface UIViewController (AWEBadNetworking)
@property(retain, nonatomic) AWEBadNetworkStateView *awe_networkingStateView; // @dynamic awe_networkingStateView;
- (void)awe_hideBadNetworkingState;
- (void)awe_showBadNetworkingState;
- (void)awe_setupBadNetworkingViewWithTarget:(id)arg1 retryAction:(SEL)arg2 aboveView:(id)arg3;
@end
