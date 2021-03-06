//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGSearchTypeaheadCacheProvider-Protocol.h>

@class IGSearchHashtagLocalSuggestionsProvider, IGSearchPlaceLocalSuggestionsProvider, IGUserListLocalDataSource, IGUserSession, NSString;

@interface IGSearchTypeaheadCacheDataSource : NSObject <IGSearchTypeaheadCacheProvider>
{
    IGUserSession *_userSession;
    unsigned long long _tabType;
    unsigned long long _cacheMaxResultCount;
    IGUserListLocalDataSource *_localUserDataSource;
    IGSearchPlaceLocalSuggestionsProvider *_placesLocalSuggestionProvider;
    IGSearchHashtagLocalSuggestionsProvider *_hashtagLocalSuggestionProvider;
}

- (void).cxx_destruct;
- (_Bool)isDelayEnabled;
- (long long)typeaheadClientCacheSourceType;
- (id)cachedItemsForSearchText:(id)arg1;
- (id)initWithUserSession:(id)arg1 tabType:(unsigned long long)arg2 cacheMaxResultCount:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

