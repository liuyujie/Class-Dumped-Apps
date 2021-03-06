//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SKProduct;

@interface GDKStoragePlan : NSObject
{
    int _quotaDurationMonths;
    NSString *_productId;
    NSString *_storageDescription;
    NSDate *_expirationDate;
    long long _quotaAmountBytes;
    SKProduct *_skProduct;
}

@property(retain, nonatomic) SKProduct *skProduct; // @synthesize skProduct=_skProduct;
@property(nonatomic) int quotaDurationMonths; // @synthesize quotaDurationMonths=_quotaDurationMonths;
@property(nonatomic) long long quotaAmountBytes; // @synthesize quotaAmountBytes=_quotaAmountBytes;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *storageDescription; // @synthesize storageDescription=_storageDescription;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic, getter=isAutoRenewableSubscription) _Bool autoRenewableSubscription;

@end

