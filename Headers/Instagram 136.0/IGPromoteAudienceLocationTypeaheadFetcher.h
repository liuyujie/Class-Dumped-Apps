//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;
@protocol IGRequestToken;

@interface IGPromoteAudienceLocationTypeaheadFetcher : NSObject
{
    IGUserSession *_userSession;
    id <IGRequestToken> _requestToken;
}

- (void).cxx_destruct;
- (void)cancelCurrentRequest;
- (void)fetchLocalSearchResultsFromDjangoAPIWithQuery:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)fetchRegionalSearchResultsFromDjangoAPIWithQuery:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

@end

