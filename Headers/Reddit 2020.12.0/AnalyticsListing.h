//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsListing : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _lengthIsSet;
    _Bool _linksIsSet;
    _Bool _sortIsSet;
    _Bool _sort_time_filterIsSet;
    _Bool _min_rankIsSet;
    _Bool _max_rankIsSet;
    _Bool _geo_filterIsSet;
    _Bool _sourceIsSet;
    _Bool _old_sortIsSet;
    _Bool _depthIsSet;
    _Bool _cursorIsSet;
    _Bool _cursor_returnedIsSet;
    _Bool _aggregatorIsSet;
    _Bool _metadataIsSet;
    long long _length;
    NSMutableArray *_links;
    NSString *_sort;
    NSString *_sort_time_filter;
    long long _min_rank;
    long long _max_rank;
    NSString *_geo_filter;
    NSString *_source;
    NSString *_old_sort;
    long long _depth;
    NSString *_cursor;
    NSString *_cursor_returned;
    NSString *_aggregator;
    NSString *_metadata;
}

@property(nonatomic) _Bool metadataIsSet; // @synthesize metadataIsSet=_metadataIsSet;
@property(copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool aggregatorIsSet; // @synthesize aggregatorIsSet=_aggregatorIsSet;
@property(copy, nonatomic) NSString *aggregator; // @synthesize aggregator=_aggregator;
@property(nonatomic) _Bool cursor_returnedIsSet; // @synthesize cursor_returnedIsSet=_cursor_returnedIsSet;
@property(copy, nonatomic) NSString *cursor_returned; // @synthesize cursor_returned=_cursor_returned;
@property(nonatomic) _Bool cursorIsSet; // @synthesize cursorIsSet=_cursorIsSet;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool depthIsSet; // @synthesize depthIsSet=_depthIsSet;
@property(nonatomic) long long depth; // @synthesize depth=_depth;
@property(nonatomic) _Bool old_sortIsSet; // @synthesize old_sortIsSet=_old_sortIsSet;
@property(copy, nonatomic) NSString *old_sort; // @synthesize old_sort=_old_sort;
@property(nonatomic) _Bool sourceIsSet; // @synthesize sourceIsSet=_sourceIsSet;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool geo_filterIsSet; // @synthesize geo_filterIsSet=_geo_filterIsSet;
@property(copy, nonatomic) NSString *geo_filter; // @synthesize geo_filter=_geo_filter;
@property(nonatomic) _Bool max_rankIsSet; // @synthesize max_rankIsSet=_max_rankIsSet;
@property(nonatomic) long long max_rank; // @synthesize max_rank=_max_rank;
@property(nonatomic) _Bool min_rankIsSet; // @synthesize min_rankIsSet=_min_rankIsSet;
@property(nonatomic) long long min_rank; // @synthesize min_rank=_min_rank;
@property(nonatomic) _Bool sort_time_filterIsSet; // @synthesize sort_time_filterIsSet=_sort_time_filterIsSet;
@property(copy, nonatomic) NSString *sort_time_filter; // @synthesize sort_time_filter=_sort_time_filter;
@property(nonatomic) _Bool sortIsSet; // @synthesize sortIsSet=_sortIsSet;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(nonatomic) _Bool linksIsSet; // @synthesize linksIsSet=_linksIsSet;
@property(retain, nonatomic) NSMutableArray *links; // @synthesize links=_links;
@property(nonatomic) _Bool lengthIsSet; // @synthesize lengthIsSet=_lengthIsSet;
@property(nonatomic) long long length; // @synthesize length=_length;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetMetadata;
- (void)unsetAggregator;
- (void)unsetCursor_returned;
- (void)unsetCursor;
- (void)unsetDepth;
- (void)unsetOld_sort;
- (void)unsetSource;
- (void)unsetGeo_filter;
- (void)unsetMax_rank;
- (void)unsetMin_rank;
- (void)unsetSort_time_filter;
- (void)unsetSort;
- (void)unsetLinks;
- (void)unsetLength;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLength:(long long)arg1 links:(id)arg2 sort:(id)arg3 sort_time_filter:(id)arg4 min_rank:(long long)arg5 max_rank:(long long)arg6 geo_filter:(id)arg7 source:(id)arg8 old_sort:(id)arg9 depth:(long long)arg10 cursor:(id)arg11 cursor_returned:(id)arg12 aggregator:(id)arg13 metadata:(id)arg14;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

