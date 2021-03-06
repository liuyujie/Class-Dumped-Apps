//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, SKPayment, SKPaymentQueue, SKPaymentTransaction, SKProduct;

@protocol IESStoreManagerHandler <NSObject>
- (void)checkFinalResultWithOrderID:(NSString *)arg1 receipt:(NSString *)arg2 transaction:(SKPaymentTransaction *)arg3 completion:(void (^)(_Bool, _Bool, _Bool, NSError *))arg4;
- (void)sendTransactionWithOrderID:(NSString *)arg1 receipt:(NSString *)arg2 transaction:(SKPaymentTransaction *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)fetchOrderInfoWithProductID:(NSNumber *)arg1 product:(SKProduct *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (NSString *)currentUserID;

@optional
- (_Bool)shouldAddAppStorePayment:(SKPaymentQueue *)arg1 payment:(SKPayment *)arg2 forProduct:(SKProduct *)arg3;
@end

