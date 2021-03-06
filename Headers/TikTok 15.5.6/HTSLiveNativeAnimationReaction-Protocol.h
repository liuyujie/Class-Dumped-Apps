//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveChatMessage, HTSLiveDiggMessage, HTSLiveFreeCellGiftMessage, HTSLiveGiftMessage, HTSLiveLiveEcomMessage, HTSLiveMemberMessage, HTSLiveRoomMessage, HTSLiveScreenChatMessage, IESLiveGiftSticker;

@protocol HTSLiveNativeAnimationReaction <NSObject>
- (void)reverseGiftAnimationEnable;
- (void)resetUserEnterFrame;
- (void)setUserEnterOriginY:(double)arg1;
- (void)resetSmallGiftFrame;
- (void)setSmallGiftOriginY:(double)arg1;
- (void)dispatchECommerceUserEnterMessage:(HTSLiveLiveEcomMessage *)arg1;
- (void)dispatchGiftChainsMessage:(HTSLiveFreeCellGiftMessage *)arg1;
- (void)dispatchRoomMessage:(HTSLiveRoomMessage *)arg1;
- (void)dispatchNormalDanmukuMessage:(HTSLiveChatMessage *)arg1;
- (void)dispatchUserEnterMessage:(HTSLiveMemberMessage *)arg1;
- (void)dispatchDanmakuMessage:(HTSLiveScreenChatMessage *)arg1;
- (void)dispatchOwnDiggMessage;
- (void)dispatchDiggMessage:(HTSLiveDiggMessage *)arg1;
- (void)dispatchGiftMessage:(HTSLiveGiftMessage *)arg1;
- (void)dispatchSticker:(IESLiveGiftSticker *)arg1;
@end

