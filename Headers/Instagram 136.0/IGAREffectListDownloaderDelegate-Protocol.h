//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGAREffectListDownloader, IGAREffectListModel, IGAREffectTargetResponse, NSError;

@protocol IGAREffectListDownloaderDelegate <NSObject>
- (void)arEffectsDownloader:(IGAREffectListDownloader *)arg1 didFailFetchWithError:(NSError *)arg2;
- (void)arEffectsDownloader:(IGAREffectListDownloader *)arg1 didFailFetchWithTargetResponse:(IGAREffectTargetResponse *)arg2;
- (void)arEffectsDownloader:(IGAREffectListDownloader *)arg1 didFetchEffectListModel:(IGAREffectListModel *)arg2 withTargetResponse:(IGAREffectTargetResponse *)arg3 fromNetwork:(_Bool)arg4;
@end

