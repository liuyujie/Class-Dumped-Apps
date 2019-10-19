//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingNetworkSource.h"

#import "CarouselDataSource-Protocol.h"
#import "CarouselDataSourceInternal-Protocol.h"
#import "ListingNetworkSourceDelegate-Protocol.h"

@class NSArray, NSDictionary, NSError, NSNumber, NSString;
@protocol TemplateParserContext;

@interface NetworkCarouselDataSource : ListingNetworkSource <CarouselDataSource, CarouselDataSourceInternal, ListingNetworkSourceDelegate>
{
    id <TemplateParserContext> _templateContext;
    NSString *_analyticsName;
    NSNumber *_maximumNumberOfItems;
    CDUnknownBlockType _completion;
    NSArray *_carouselItems;
}

@property(copy, nonatomic) NSArray *carouselItems; // @synthesize carouselItems=_carouselItems;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSNumber *maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property(copy, nonatomic) NSString *analyticsName; // @synthesize analyticsName=_analyticsName;
@property(readonly, nonatomic) id <TemplateParserContext> templateContext; // @synthesize templateContext=_templateContext;
- (void).cxx_destruct;
- (void)trimCarouselItemsToCount:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *analytics;
- (_Bool)listingNetworkSourceShouldFilterObject:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (void)parseMoreData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)filterCarouselItems;
- (void)filterCarouselItemsBySetOfObjects:(id)arg1;
- (void)fetchMoreData;
- (void)fetchData;
- (void)fetchLocalData;
- (void)fetchCarouselItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLString:(id)arg1 parameters:(id)arg2 analyticsName:(id)arg3 templateContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSError *lastError;
@property(readonly) Class superclass;

@end
