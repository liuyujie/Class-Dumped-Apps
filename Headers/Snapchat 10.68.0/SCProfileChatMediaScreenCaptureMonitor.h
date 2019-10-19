//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCProfileChatMediaScreenCaptureMonitorDelegate;

@interface SCProfileChatMediaScreenCaptureMonitor : NSObject
{
    NSString *_conversationId;
    id <SCProfileChatMediaScreenCaptureMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <SCProfileChatMediaScreenCaptureMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendScreenshotNotificationWithType:(long long)arg1;
- (void)_userDidScreenCaptureWithType:(long long)arg1;
- (void)_userDidScreenRecord;
- (void)_userDidTakeScreenshot;
- (void)_removeObservationOnScreenCaptureNotification;
- (void)_addObservationOnScreenCaptureNotification;
- (void)dealloc;
- (id)initWithConversationId:(id)arg1;

@end
