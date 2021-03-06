//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRKeyRefinementGroup, CDRRangeRefinementGroup, NSMutableArray;

@interface CDRAvailableRefinements : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CDRKeyRefinementGroup *brandRefinement; // @dynamic brandRefinement;
@property(retain, nonatomic) CDRKeyRefinementGroup *categoryRefinement; // @dynamic categoryRefinement;
@property(retain, nonatomic) NSMutableArray *facetRefinementsArray; // @dynamic facetRefinementsArray;
@property(readonly, nonatomic) unsigned long long facetRefinementsArray_Count; // @dynamic facetRefinementsArray_Count;
@property(retain, nonatomic) CDRKeyRefinementGroup *genderRefinement; // @dynamic genderRefinement;
@property(nonatomic) _Bool hasBrandRefinement; // @dynamic hasBrandRefinement;
@property(nonatomic) _Bool hasCategoryRefinement; // @dynamic hasCategoryRefinement;
@property(nonatomic) _Bool hasGenderRefinement; // @dynamic hasGenderRefinement;
@property(nonatomic) _Bool hasMerchantRefinement; // @dynamic hasMerchantRefinement;
@property(nonatomic) _Bool hasPriceRefinement; // @dynamic hasPriceRefinement;
@property(nonatomic) _Bool hasSaleRefinement; // @dynamic hasSaleRefinement;
@property(retain, nonatomic) CDRKeyRefinementGroup *merchantRefinement; // @dynamic merchantRefinement;
@property(retain, nonatomic) CDRRangeRefinementGroup *priceRefinement; // @dynamic priceRefinement;
@property(retain, nonatomic) CDRRangeRefinementGroup *saleRefinement; // @dynamic saleRefinement;

@end

