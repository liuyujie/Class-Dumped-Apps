//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface POEMCustomerInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long customerId; // @dynamic customerId;
@property(copy, nonatomic) NSString *customerName; // @dynamic customerName;
@property(nonatomic) _Bool hasCustomerId; // @dynamic hasCustomerId;
@property(nonatomic) _Bool hasCustomerName; // @dynamic hasCustomerName;
@property(nonatomic) _Bool hasObfuscatedCustomerId; // @dynamic hasObfuscatedCustomerId;
@property(copy, nonatomic) NSString *obfuscatedCustomerId; // @dynamic obfuscatedCustomerId;

@end

