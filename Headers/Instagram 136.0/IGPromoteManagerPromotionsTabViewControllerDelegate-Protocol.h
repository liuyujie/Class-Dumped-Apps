//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSString;

@protocol IGPromoteManagerPromotionsTabViewControllerDelegate <NSObject>
- (void)notifyManagerDidTapPauseWithOrganicMediaFbId:(NSString *)arg1 mediaId:(NSString *)arg2 tappedPauseCompletion:(void (^)(void))arg3;
- (void)notifyManagerDidTapResumeWithOrganicMediaFbId:(NSString *)arg1 mediaId:(NSString *)arg2 tappedResumeCompletion:(void (^)(void))arg3;
- (void)notifyManagerDidTapViewInsightsWithMediaId:(NSString *)arg1;
- (void)notifyManagerDidTapNullStatePromote;
@end

