//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class NSNumber;

@interface FVRCustomOfferSettings : FVRBaseDataObject
{
    NSNumber *_maxExpiration;
    NSNumber *_maxPrice;
    NSNumber *_minExpiration;
    NSNumber *_minPrice;
}

@property(retain, nonatomic) NSNumber *minPrice; // @synthesize minPrice=_minPrice;
@property(retain, nonatomic) NSNumber *minExpiration; // @synthesize minExpiration=_minExpiration;
@property(retain, nonatomic) NSNumber *maxPrice; // @synthesize maxPrice=_maxPrice;
@property(retain, nonatomic) NSNumber *maxExpiration; // @synthesize maxExpiration=_maxExpiration;
- (void).cxx_destruct;
- (id)initWithElement:(id)arg1;

@end

