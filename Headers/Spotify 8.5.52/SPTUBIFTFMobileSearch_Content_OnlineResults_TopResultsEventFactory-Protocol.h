//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_RecommendationResultsEventFactory, SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_ResultItemEventFactory, SPTUBIImpressionEvent;

@protocol SPTUBIFTFMobileSearch_Content_OnlineResults_TopResultsEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_RecommendationResultsEventFactory>)recommendationResultsFactory;
- (id <SPTUBIFTFMobileSearch_Content_OnlineResults_TopResults_ResultItemEventFactory>)resultItemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
