//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface AWEFetchListInfo : NSObject
{
    _Bool _hasMore;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSNumber *_totalCount;
}

@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *maxCursor; // @synthesize maxCursor=_maxCursor;
@property(retain, nonatomic) NSNumber *minCursor; // @synthesize minCursor=_minCursor;
- (void).cxx_destruct;

@end

