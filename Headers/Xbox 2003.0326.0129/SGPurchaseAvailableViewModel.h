//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXModalViewModel.h"

@class NSArray;

@interface SGPurchaseAvailableViewModel : XBXModalViewModel
{
    NSArray *_purchaseOffers;
}

@property(retain, nonatomic) NSArray *purchaseOffers; // @synthesize purchaseOffers=_purchaseOffers;
- (void).cxx_destruct;
- (void)onPurchaseOfferSelected:(id)arg1;
- (void)onPurchaseOffersChanged:(id)arg1;
- (void)onDestroy;
- (void)onDeactivate;
- (void)onActivate;
- (void)onInitialize;

@end

