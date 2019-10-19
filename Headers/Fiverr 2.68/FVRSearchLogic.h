//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FVRSearchService, NSCache, NSMutableArray, NSMutableDictionary, NSNumber, NSTimer, NSURLSessionTask, _TtC6fiverr7GigList;

@interface FVRSearchLogic : NSObject
{
    _Bool _searchIsFiltered;
    int _addvanceSearchFilterType;
    NSMutableDictionary *_resultItemsDictionary;
    NSMutableArray *_advancedSearchItemsArray;
    NSMutableDictionary *_subfiltersResultCount;
    NSNumber *_advancedSearchTotalItemsCount;
    FVRSearchService *_searchService;
    _TtC6fiverr7GigList *_gigList;
    NSCache *_autocompleteCache;
    NSURLSessionTask *_activeTask;
    NSTimer *_activeTimer;
}

@property(retain, nonatomic) NSTimer *activeTimer; // @synthesize activeTimer=_activeTimer;
@property(retain, nonatomic) NSURLSessionTask *activeTask; // @synthesize activeTask=_activeTask;
@property(retain, nonatomic) NSCache *autocompleteCache; // @synthesize autocompleteCache=_autocompleteCache;
@property(retain, nonatomic) _TtC6fiverr7GigList *gigList; // @synthesize gigList=_gigList;
@property(retain, nonatomic) FVRSearchService *searchService; // @synthesize searchService=_searchService;
@property(nonatomic) int addvanceSearchFilterType; // @synthesize addvanceSearchFilterType=_addvanceSearchFilterType;
@property(nonatomic) _Bool searchIsFiltered; // @synthesize searchIsFiltered=_searchIsFiltered;
@property(retain, nonatomic) NSNumber *advancedSearchTotalItemsCount; // @synthesize advancedSearchTotalItemsCount=_advancedSearchTotalItemsCount;
@property(retain, nonatomic) NSMutableDictionary *subfiltersResultCount; // @synthesize subfiltersResultCount=_subfiltersResultCount;
@property(retain, nonatomic) NSMutableArray *advancedSearchItemsArray; // @synthesize advancedSearchItemsArray=_advancedSearchItemsArray;
@property(retain, nonatomic) NSMutableDictionary *resultItemsDictionary; // @synthesize resultItemsDictionary=_resultItemsDictionary;
- (void).cxx_destruct;
- (id)priceRangeFilter;
- (void)saveQueryToRecentSearches:(id)arg1;
- (id)getAdvancedSearchItemCategories;
- (void)resetSearchResultItems;
- (void)getAutocompleteSearchResultsForQuery:(id)arg1 postponeRequestTime:(double)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)cancelAllAutocompleteRequests;
- (void)getUsersSearchResultsForQuery:(id)arg1 pageNumber:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)filterDictionaryFromAdvancedSearchItemsArray:(id)arg1;
- (void)getSearchPromotionsResultsForSearchPromotionId:(id)arg1 pageNumber:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getCategoriesResultsForCategory:(long long)arg1 WithQuery:(id)arg2 filterType:(long long)arg3 filterData:(id)arg4 pageNumber:(long long)arg5 proOnly:(_Bool)arg6 searchResultsType:(int)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)getCategoriesResultsForCategory:(id)arg1 subcategory:(id)arg2 nestedSubCategoryId:(id)arg3 filterType:(long long)arg4 filterData:(id)arg5 pageNumber:(long long)arg6 proOnly:(_Bool)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)getSearchResultsForQuery:(id)arg1 filterType:(long long)arg2 filterData:(id)arg3 params:(id)arg4 pageNumber:(long long)arg5 proOnly:(_Bool)arg6 useOriginalQuery:(_Bool)arg7 encodedFilters:(id)arg8 searchResultsType:(int)arg9 successBlock:(CDUnknownBlockType)arg10 failureBlock:(CDUnknownBlockType)arg11;
- (void)handleGigListSuccessBlock:(id)arg1 filterType:(long long)arg2 filterString:(id)arg3 filterData:(id)arg4 pageNumber:(long long)arg5 successBlock:(CDUnknownBlockType)arg6;
- (long long)filterTypeFromString:(id)arg1;
- (id)filterStringByType:(long long)arg1;
- (int)totalCountForFilterType:(long long)arg1;
- (id)init;

@end
