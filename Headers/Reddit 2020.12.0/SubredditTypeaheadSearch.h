//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, RedditService;

@interface SubredditTypeaheadSearch : NSObject
{
    unsigned long long _minimumQueryLength;
    double _queryDelay;
    RedditService *_service;
    NSString *_currentQuery;
    NSTimer *_queryTimer;
}

@property(retain, nonatomic) NSTimer *queryTimer; // @synthesize queryTimer=_queryTimer;
@property(retain, nonatomic) NSString *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) double queryDelay; // @synthesize queryDelay=_queryDelay;
@property(nonatomic) unsigned long long minimumQueryLength; // @synthesize minimumQueryLength=_minimumQueryLength;
- (void).cxx_destruct;
- (void)executeCurrentQueryWithResults:(CDUnknownBlockType)arg1;
- (void)query:(id)arg1 results:(CDUnknownBlockType)arg2;
- (id)initWithService:(id)arg1;

@end

