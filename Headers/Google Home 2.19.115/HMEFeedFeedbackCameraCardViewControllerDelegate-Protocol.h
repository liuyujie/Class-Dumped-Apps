//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMEFeedFeedbackCameraCardViewController, NSError;

@protocol HMEFeedFeedbackCameraCardViewControllerDelegate <NSObject>
- (void)feedFeedbackCameraCardViewControllerDidTapCancel:(HMEFeedFeedbackCameraCardViewController *)arg1;
- (void)feedFeedbackCameraCardViewController:(HMEFeedFeedbackCameraCardViewController *)arg1 didSubmitFeedbackWithError:(NSError *)arg2;
@end

