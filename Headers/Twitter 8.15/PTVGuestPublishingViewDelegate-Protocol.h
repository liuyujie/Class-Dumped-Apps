//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVGuestPublishingView, PTVGuestView;

@protocol PTVGuestPublishingViewDelegate <NSObject>
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 renderingDidChange:(_Bool)arg2 atPosition:(unsigned long long)arg3;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapUsernameButtonOnGuestView3:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapUsernameButtonOnGuestView2:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapUsernameButtonOnGuestView1:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapHangUpOnGuestView3:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapHangUpOnGuestView2:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapHangUpOnGuestView1:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapCancelCountdownOnGuestView3:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapCancelCountdownOnGuestView2:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapCancelCountdownOnGuestView1:(PTVGuestView *)arg2;
- (void)guestPublishingViewDidRequestCameraFlip:(PTVGuestPublishingView *)arg1;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapOnGuestView3:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapOnGuestView2:(PTVGuestView *)arg2;
- (void)guestPublishingView:(PTVGuestPublishingView *)arg1 didTapOnGuestView1:(PTVGuestView *)arg2;
@end

