//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRShoppingContentQuery.h"

@class NSString;

@interface GTLRShoppingContentQuery_InventorySet : GTLRShoppingContentQuery
{
}

+ (id)queryWithObject:(id)arg1 merchantId:(unsigned long long)arg2 storeCode:(id)arg3 productId:(id)arg4;

// Remaining properties
@property(nonatomic) _Bool dryRun; // @dynamic dryRun;
@property(nonatomic) unsigned long long merchantId; // @dynamic merchantId;
@property(copy, nonatomic) NSString *productId; // @dynamic productId;
@property(copy, nonatomic) NSString *storeCode; // @dynamic storeCode;

@end
