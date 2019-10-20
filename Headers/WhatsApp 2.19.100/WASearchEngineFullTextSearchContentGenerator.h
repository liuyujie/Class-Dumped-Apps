//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WASearchEngineFullTextSearchContentGenerator : NSObject
{
    NSArray *_tokenGenerators;
    _Bool _inCodeTokenizationEnabled;
}

+ (void)logTokenCount:(long long)arg1 forSearchQuery:(id)arg2;
- (void).cxx_destruct;
- (id)prefixedTokensForTokens:(id)arg1 columnName:(id)arg2;
- (id)wrappedORClauseForStrings:(id)arg1;
- (id)searchTokensForSearchQueryWord:(id)arg1 tokenGenerators:(id)arg2;
- (id)enabledTokenGeneratorsForRestrictions:(id)arg1;
- (id)searchTermForSearchQuery:(id)arg1 restrictions:(id)arg2;
- (void)fullTextSearchContentsForObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTokenGenerators:(id)arg1 inCodeTokenizationEnabled:(_Bool)arg2;

@end
