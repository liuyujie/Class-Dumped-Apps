//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItem, NSString;

@interface IGFeedItemRealtimeSubscriptionData : NSObject
{
    IGFeedItem *_feedItem;
    NSString *_subscriptionTopic;
}

@property(readonly, copy, nonatomic) NSString *subscriptionTopic; // @synthesize subscriptionTopic=_subscriptionTopic;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)initWithFeedItem:(id)arg1 subscriptionTopic:(id)arg2;

@end

