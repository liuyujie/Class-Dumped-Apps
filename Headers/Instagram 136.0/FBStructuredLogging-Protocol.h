//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol FBStructuredLogging <NSObject>
- (struct FBStructuredLogEventMetadata)shouldSampleEvent:(NSString *)arg1 subEvent:(NSString *)arg2;
- (void)logEventWithName:(NSString *)arg1 payload:(NSDictionary *)arg2 logEventMetadata:(struct FBStructuredLogEventMetadata)arg3 eventConfig:(struct FBStructuredLogEventConfig *)arg4;
@end

