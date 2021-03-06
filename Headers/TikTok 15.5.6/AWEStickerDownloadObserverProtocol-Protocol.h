//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEStickerDownloadManager, IESEffectModel, NSError;

@protocol AWEStickerDownloadObserverProtocol <NSObject>

@optional
- (void)stickerDownloadManager:(AWEStickerDownloadManager *)arg1 didFailDownloadSticker:(IESEffectModel *)arg2 withError:(NSError *)arg3;
- (void)stickerDownloadManager:(AWEStickerDownloadManager *)arg1 didFinishDownloadSticker:(IESEffectModel *)arg2;
- (void)stickerDownloadManager:(AWEStickerDownloadManager *)arg1 sticker:(IESEffectModel *)arg2 downloadProgressChange:(double)arg3;
- (void)stickerDownloadManager:(AWEStickerDownloadManager *)arg1 didBeginDownloadSticker:(IESEffectModel *)arg2;
- (void)stickerDownloadManager:(AWEStickerDownloadManager *)arg1 didSelectNewSticker:(IESEffectModel *)arg2 oldSticker:(IESEffectModel *)arg3;
@end

