//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGViewAdsBaseContentViewController.h>

@class NSString;

@interface IGViewAdsFeedViewController : IGViewAdsBaseContentViewController
{
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (id)processedFeedItemFromNetworkFetchedFeedItems:(id)arg1 reelItems:(id)arg2;
- (id)initWithUserSession:(id)arg1 targetUser:(id)arg2 analyticsModule:(id)arg3;

@end

