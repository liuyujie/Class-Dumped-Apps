//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DocosDiscussionModel-Protocol.h"

@class NSArray, NSString;
@protocol DocosDiscussionAuthor, DocosStorage, DocumentDocosManagerDelegate;

@interface DocumentDocosManager : NSObject <DocosDiscussionModel>
{
    id <DocosStorage> _docosStorage;
    NSString *_itemId;
    id <DocosDiscussionAuthor> _userAuthor;
    unsigned long long _docosACLStatus;
    NSArray *_activeSuggestions;
    id <DocumentDocosManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <DocumentDocosManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isActiveSuggestion:(id)arg1;
- (void)setActiveSuggestions:(id)arg1;
- (_Bool)hasFullAccess;
- (_Bool)canComment;
- (_Bool)canReadComments;
- (void)setDocosACLStatus:(unsigned long long)arg1;
- (void)sortByUpdatedTime:(id)arg1;
- (id)filterDeletedDiscussions:(id)arg1;
- (void)syncItem;
- (id)getAuthor;
- (void)setAuthorWithDocosDiscussionAuthor:(id)arg1;
- (id)getDirtyDiscussions;
- (id)getDiscussions;
- (id)getDiscussionWithDocosPostEntryId:(id)arg1;
- (void)updateWithJavaUtilCollection:(id)arg1 withJavaUtilCollection:(id)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4;
- (void)initialize__WithJavaUtilCollection:(id)arg1;
- (void)releaseListenerWithDocosDiscussionModel_DiscussionModelListener:(id)arg1;
- (void)registerListenerWithJavaUtilConcurrentExecutor:(id)arg1 withDocosDiscussionModel_DiscussionModelListener:(id)arg2;
- (void)acceptRejectSuggestion:(id)arg1 isAccept:(_Bool)arg2;
- (void)rejectSuggestion:(id)arg1;
- (void)acceptSuggestion:(id)arg1;
- (void)saveDiscussion:(id)arg1;
- (id)discussionsByUpdatedTime;
- (id)discussionForId:(id)arg1;
- (id)anchorMap;
- (id)initWithDocosStorage:(id)arg1 itemId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

