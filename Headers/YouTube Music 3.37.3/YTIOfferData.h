//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIFormattedString;

@interface YTIOfferData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *encryptedPurchaseParams; // @dynamic encryptedPurchaseParams;
@property(nonatomic) _Bool hasEncryptedPurchaseParams; // @dynamic hasEncryptedPurchaseParams;
@property(nonatomic) _Bool hasIapProductId; // @dynamic hasIapProductId;
@property(nonatomic) _Bool hasOfferJwt; // @dynamic hasOfferJwt;
@property(nonatomic) _Bool hasOfferParams; // @dynamic hasOfferParams;
@property(nonatomic) _Bool hasPrice; // @dynamic hasPrice;
@property(copy, nonatomic) NSString *iapProductId; // @dynamic iapProductId;
@property(copy, nonatomic) NSString *offerJwt; // @dynamic offerJwt;
@property(copy, nonatomic) NSString *offerParams; // @dynamic offerParams;
@property(retain, nonatomic) YTIFormattedString *price; // @dynamic price;

@end
