//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAnalyticsEventFactory.h"

@interface ShareAnalyticsFactory : BaseAnalyticsEventFactory
{
}

+ (void)addPost:(id)arg1 toEvent:(id)arg2;
+ (id)downloadEventWithPost:(id)arg1 action:(id)arg2 pageType:(id)arg3;
+ (id)shareEventWithShareSheetData:(id)arg1 activityType:(id)arg2 source:(id)arg3 action:(id)arg4 noun:(id)arg5 pageType:(id)arg6 reason:(id)arg7;
+ (id)shareEventWithShareSheetData:(id)arg1 reason:(id)arg2 activityType:(id)arg3 action:(id)arg4 pageType:(id)arg5;

@end
