//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface YTSuggestRequestInfo : NSObject
{
    _Bool _isRequestSuccessful;
    NSString *_query;
    NSMutableDictionary *_suggestionArrays;
}

@property(retain, nonatomic) NSMutableDictionary *suggestionArrays; // @synthesize suggestionArrays=_suggestionArrays;
@property(nonatomic) _Bool isRequestSuccessful; // @synthesize isRequestSuccessful=_isRequestSuccessful;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;

@end
