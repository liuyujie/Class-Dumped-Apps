//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/Listing.h>

@class NSDictionary, NSString, NSURL;

@interface LegacyListing : Listing
{
    _Bool hasFetched;
    NSURL *_url;
    NSDictionary *_parameters;
    NSString *_afterId;
}

+ (id)keyPathsForValuesAffectingHasNextPage;
+ (id)defaultParameters;
@property(retain, nonatomic) NSString *afterId; // @synthesize afterId=_afterId;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool hasFetched; // @synthesize hasFetched;
- (void).cxx_destruct;
- (_Bool)hasNextPage;
- (void)fetchNextPageWithCorrelationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)clone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithService:(id)arg1 url:(id)arg2 parameters:(id)arg3 parseObjectBlock:(CDUnknownBlockType)arg4;

@end

