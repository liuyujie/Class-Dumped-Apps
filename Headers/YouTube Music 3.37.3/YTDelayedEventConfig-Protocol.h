//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTDelayedEventConfig <NSObject>
- (_Bool)shouldUseDebugModeFlush;
- (_Bool)shouldUseLoggingDispatchQueue;
- (int)dispatchPolicyForTier:(int)arg1;
- (double)secondsBetweenDispatchesForTier:(int)arg1;
- (_Bool)isDelayedEventTiersEnabled;
- (_Bool)shouldFlushQueueOnAppToBackground;
- (double)secondsBetweenDispatches;
- (double)maxRetryWindow;
- (unsigned long long)maxNumberOfRetries;
- (unsigned long long)batchSize;
@end
