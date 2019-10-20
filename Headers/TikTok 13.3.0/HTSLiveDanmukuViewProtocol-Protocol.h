//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveDanmukuEngineSettings, HTSLiveDanmukuNode, UIView;

@protocol HTSLiveDanmukuViewProtocol <NSObject>

@optional
- (UIView *)view;
- (void)stopAnimation;
- (void)startAnimation;
- (void)updateWithNode:(HTSLiveDanmukuNode *)arg1;
- (void)setDanmukuSettings:(HTSLiveDanmukuEngineSettings *)arg1;
- (void)setEndAnimationCompletion:(void (^)(id <HTSLiveDanmukuViewProtocol>))arg1;
- (void)setLeaveChannelCompletion:(void (^)(id <HTSLiveDanmukuViewProtocol>))arg1;
@end
