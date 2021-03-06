//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoinSale, NSArray, RedditService, SKProductsRequest;

@interface GoldProductDataSource : NSObject
{
    _Bool _isFetching;
    NSArray *_products;
    NSArray *_deals;
    CoinSale *_coinSale;
    RedditService *_service;
    SKProductsRequest *_productsRequest;
}

@property(retain, nonatomic) SKProductsRequest *productsRequest; // @synthesize productsRequest=_productsRequest;
@property(nonatomic) __weak RedditService *service; // @synthesize service=_service;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) CoinSale *coinSale; // @synthesize coinSale=_coinSale;
@property(retain, nonatomic) NSArray *deals; // @synthesize deals=_deals;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
- (void).cxx_destruct;
- (void)notifyFailure;
- (void)notifySuccess;
- (id)productWithIdentifier:(id)arg1;
- (void)updateProductsUsingSKProducts:(id)arg1 productsInfo:(id)arg2;
- (void)processResponseData:(id)arg1;
- (void)findRecommendProductForAward:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetch;
- (id)initWithService:(id)arg1;

@end

