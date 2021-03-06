//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTPlayerResponse;
@protocol YTAdPlayerOverlayDelegate, YTCompanionAdSupportedRenderersProtocol, YTInstreamAd, YTInstreamAdBreak;

@protocol YTAdPlayerOverlayProtocol <NSObject>
@property(nonatomic) __weak id <YTAdPlayerOverlayDelegate> adsDelegate;
- (void)setCompanionAd:(id <YTCompanionAdSupportedRenderersProtocol>)arg1;
- (void)setAd:(id <YTInstreamAd>)arg1 adBreak:(id <YTInstreamAdBreak>)arg2;
- (void)stop;
- (void)start;

@optional
- (void)setAdPlayerResponse:(YTPlayerResponse *)arg1;
@end

