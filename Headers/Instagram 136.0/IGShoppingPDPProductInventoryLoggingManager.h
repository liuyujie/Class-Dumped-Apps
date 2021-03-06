//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGShoppingPDPProductInventoryLoggingManager : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _eventLogger;
    IGSessionTracker *_shoppingSessionTracker;
    _Bool _hasLoggedInventoryEvent;
}

- (void).cxx_destruct;
- (void)_logEventForProductItem:(id)arg1 productGroup:(id)arg2 checkoutSessionId:(id)arg3 feedItemPk:(id)arg4 selectedVariantMap:(id)arg5 isCTAActive:(_Bool)arg6;
- (void)markProductGroupLoaded:(id)arg1 productItem:(id)arg2 checkoutSessionId:(id)arg3 feedItemPk:(id)arg4 selectedVariantMap:(id)arg5 isCTAActive:(_Bool)arg6;
- (void)markProductItemLoaded:(id)arg1 checkoutSessionId:(id)arg2 feedItemPk:(id)arg3;
- (id)initWithEventLogger:(id)arg1 shoppingSessionTracker:(id)arg2;

@end

