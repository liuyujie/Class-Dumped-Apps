//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HAMFrameSourceDelegate-Protocol.h"
#import "HAMSystemNotificationsObserver-Protocol.h"

@class CADisplayLink, CALayer, HAMPixelBuffer, NSString;
@protocol HAMFrameSource;

@interface HAMIOSurfaceMainThreadRenderingView : UIView <HAMSystemNotificationsObserver, HAMFrameSourceDelegate>
{
    CALayer *_layer;
    struct CGSize _lastRenderedFrameSize;
    CADisplayLink *_displayLink;
    id <HAMFrameSource> _frameSource;
    _Bool _isInBackground;
    HAMPixelBuffer *_lastRenderedPixelBuffer;
    CDUnknownBlockType _renderBlock;
}

+ (id)supportedPixelFormats;
+ (id)requiredPixelBufferAttributes;
+ (_Bool)isSupported;
- (void).cxx_destruct;
- (_Bool)renderPixelBuffer:(id)arg1;
- (void)displayLinkCallback:(id)arg1;
- (void)mainThreadClearFrameSource:(id)arg1;
- (void)mainThreadFrameSourceDidUnpause:(id)arg1;
- (void)mainThreadFrameSourceDidPause:(id)arg1;
- (void)mainThreadFrameSourceDidActivate:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)frameSourceDidSeek:(id)arg1;
- (void)frameSourceDidUnpause:(id)arg1;
- (void)frameSourceDidPause:(id)arg1;
- (void)frameSourceDidDeactivate:(id)arg1;
- (void)frameSourceDidActivate:(id)arg1;
@property(readonly, nonatomic) struct CGRect videoRect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithSystemNotifications:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

