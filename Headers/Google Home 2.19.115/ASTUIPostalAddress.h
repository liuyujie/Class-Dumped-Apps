//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ASTUIPostalAddress : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) _Bool hasCountry; // @dynamic hasCountry;
@property(nonatomic) _Bool hasLocality; // @dynamic hasLocality;
@property(nonatomic) _Bool hasPostalCode; // @dynamic hasPostalCode;
@property(nonatomic) _Bool hasRecipientName; // @dynamic hasRecipientName;
@property(nonatomic) _Bool hasRegion; // @dynamic hasRegion;
@property(copy, nonatomic) NSString *locality; // @dynamic locality;
@property(retain, nonatomic) NSMutableArray *postalAddressSummaryArray; // @dynamic postalAddressSummaryArray;
@property(readonly, nonatomic) unsigned long long postalAddressSummaryArray_Count; // @dynamic postalAddressSummaryArray_Count;
@property(copy, nonatomic) NSString *postalCode; // @dynamic postalCode;
@property(copy, nonatomic) NSString *recipientName; // @dynamic recipientName;
@property(copy, nonatomic) NSString *region; // @dynamic region;
@property(retain, nonatomic) NSMutableArray *streetAddressArray; // @dynamic streetAddressArray;
@property(readonly, nonatomic) unsigned long long streetAddressArray_Count; // @dynamic streetAddressArray_Count;

@end

