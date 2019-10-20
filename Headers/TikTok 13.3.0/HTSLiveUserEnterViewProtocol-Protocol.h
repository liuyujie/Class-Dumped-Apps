//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveNativeAnimationUserEnterNode, UIView;

@protocol HTSLiveUserEnterViewProtocol <NSObject>
- (UIView *)view;
- (void)removeAllFromSuperView;
- (void)startAnimation;
- (void)updateWithEnterMessageNode:(HTSLiveNativeAnimationUserEnterNode *)arg1;
- (void)setTouchCompletion:(void (^)(void))arg1;
- (void)setAnimationCompletion:(void (^)(void))arg1;

@optional
- (UIView *)desciptionView;
@end
