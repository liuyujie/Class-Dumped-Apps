//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGTaggingViewConfiguration-Protocol.h>

@class IGUserSession, NSSet, NSString;

@interface IGProductTaggingViewConfiguration : NSObject <IGTaggingViewConfiguration>
{
    IGUserSession *_userSession;
    NSSet *_sponsorIds;
    long long _productTaggingFlowType;
    NSString *_taggingSessionId;
}

@property(readonly, nonatomic) NSString *taggingSessionId; // @synthesize taggingSessionId=_taggingSessionId;
@property(readonly, nonatomic) long long productTaggingFlowType; // @synthesize productTaggingFlowType=_productTaggingFlowType;
@property(readonly, copy, nonatomic) NSSet *sponsorIds; // @synthesize sponsorIds=_sponsorIds;
- (void).cxx_destruct;
- (long long)_maxLineCountInTag;
- (id)indicatorEditViewText;
- (_Bool)expandedIndicatorInEditViewEnabled;
- (long long)taggingLearnMoreType;
- (long long)currentPostItemTagCountLimit;
- (long long)feedItemTagCountLimit;
- (id)viewModelForError;
- (id)viewModelForNoResults;
- (id)viewModelForNoResultsWithProductSource:(id)arg1;
- (id)viewModelsForResults:(id)arg1;
- (id)searchDataSourceWithUserSession:(id)arg1 delegate:(id)arg2;
- (id)pendingTagViewAtPosition:(struct CGPoint)arg1;
- (id)tagViewWithTag:(id)arg1 experimentSet:(id)arg2;
- (id)analyticsModuleName;
- (id)searchBarPlaceholder;
- (id)removeAllSuggestionsText;
- (id)addLimitReachedLabelText;
- (id)addMoreTagsLabelText;
- (id)addFirstTagLabelText;
- (unsigned long long)mediaOverlayIndicatorIconType;
- (id)taggingViewTitle;
- (long long)taggingType;
- (long long)taggingMode;
- (id)initWithUserSession:(id)arg1 taggingSessionId:(id)arg2 sponsorIds:(id)arg3 productTaggingFlowType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

