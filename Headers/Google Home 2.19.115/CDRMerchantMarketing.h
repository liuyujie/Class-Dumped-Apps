//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CDRMerchantMarketing : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMarketingSelectionDescription; // @dynamic hasMarketingSelectionDescription;
@property(nonatomic) _Bool hasMerchantWithNoSelection; // @dynamic hasMerchantWithNoSelection;
@property(nonatomic) _Bool hasMerchantWithNoSelectionSubtext; // @dynamic hasMerchantWithNoSelectionSubtext;
@property(copy, nonatomic) NSString *marketingSelectionDescription; // @dynamic marketingSelectionDescription;
@property(copy, nonatomic) NSString *merchantWithNoSelection; // @dynamic merchantWithNoSelection;
@property(copy, nonatomic) NSString *merchantWithNoSelectionSubtext; // @dynamic merchantWithNoSelectionSubtext;
@property(retain, nonatomic) NSMutableArray *selectionArray; // @dynamic selectionArray;
@property(readonly, nonatomic) unsigned long long selectionArray_Count; // @dynamic selectionArray_Count;

@end

