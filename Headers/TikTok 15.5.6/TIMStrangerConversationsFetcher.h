//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMMessageStoreChangesObserver-Protocol.h"
#import "TIMStrangerConversationFetcherProtocol-Protocol.h"

@class NSArray, NSString, TIMPBResponseLongConnectionCallback;
@protocol OS_dispatch_queue, TIMStrangerConversationFetcherProtocolDelegate;

@interface TIMStrangerConversationsFetcher : NSObject <TIMMessageStoreChangesObserver, TIMStrangerConversationFetcherProtocol>
{
    _Bool _hasMore;
    _Bool _fetching;
    int _inbox;
    int _count;
    NSArray *_currentConversations;
    long long _unreadCount;
    id <TIMStrangerConversationFetcherProtocolDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _cursor;
    TIMPBResponseLongConnectionCallback *_callback;
}

+ (id)sharedMessagesInConversation;
@property(retain, nonatomic) TIMPBResponseLongConnectionCallback *callback; // @synthesize callback=_callback;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak id <TIMStrangerConversationFetcherProtocolDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int inbox; // @synthesize inbox=_inbox;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSArray *currentConversations; // @synthesize currentConversations=_currentConversations;
- (void).cxx_destruct;
- (void)onConversationsCreated:(id)arg1;
- (void)deleteMessage:(long long)arg1 inConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMessagesInConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllConversationWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAllConversationReadWithCompletion:(CDUnknownBlockType)arg1;
- (void)markConversationAsRead:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markConversationAsReadWithShortID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyNewResult:(id)arg1;
- (void)fetchNextPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFirstPageAndReorderWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithInbox:(int)arg1 countPerPage:(int)arg2 callbackQueue:(id)arg3;
- (id)initWithInbox:(int)arg1 callbackQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

