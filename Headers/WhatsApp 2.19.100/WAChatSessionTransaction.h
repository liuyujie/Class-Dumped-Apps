//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSPointerArray, NSSet, WAChatSession;

@interface WAChatSessionTransaction : NSObject
{
    WAChatSession *_chatSession;
    NSPointerArray *_listeners;
    unsigned long long _participantJournalMode;
    NSSet *_participantSnapshotJIDs;
    NSMutableSet *_participantModifications;
    NSMutableArray *_deferredActions;
    NSMutableArray *_messagesAdded;
    NSMutableArray *_messagesUpdated;
    NSMutableArray *_messagesReceived;
    _Bool _modifiedHidden;
    NSArray *_messagesNeedingDate;
    long long _chatBarUnreadCountDelta;
    _Bool _temporary;
    _Bool _modifiedRemoved;
    WAChatSession *_chatSessionThatWasReplaced;
    int _lastBusinessEventType;
    const void *_mode;
    WAChatSession *_internalChatSession;
}

+ (_Bool)commitTransactions:(id)arg1 error:(out id *)arg2;
+ (void)beginTransactions:(id)arg1;
+ (void)removeGlobalListener:(id)arg1;
+ (void)addGlobalListener:(id)arg1;
+ (id)forChatSession:(id)arg1;
+ (id)insertChatSessionWithJID:(id)arg1 addEncryptionLockMessage:(_Bool)arg2 context:(id)arg3;
@property(nonatomic) __weak WAChatSession *internalChatSession; // @synthesize internalChatSession=_internalChatSession;
@property(nonatomic) const void *mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHighlyVerified) _Bool highlyVerified;
- (void)commit;
- (id)begin;
- (unsigned long long)chatSessionLifecycle;
- (void)didCommit;
- (void)willCommit;
- (void)defer:(CDUnknownBlockType)arg1;
- (void)updatePendingGhostMessages:(id)arg1;
- (void)unarchive;
- (void)updateLastMessageDateWithMessage:(id)arg1;
- (void)updateChatSessionWithMessage:(id)arg1;
- (void)processMessage:(id)arg1;
- (_Bool)shouldMarkSessionTrustedForMessage:(id)arg1;
- (void)addMessage:(id)arg1;
- (unsigned long long)addExternalMessage:(id)arg1 batchedGroupMembers:(id)arg2 notify:(_Bool)arg3;
- (void)trackReceivedMessage:(id)arg1;
- (void)trackUpdatedMessage:(id)arg1;
- (void)trackAddedMessage:(id)arg1;
- (id)insertGroupEvent:(int)arg1 date:(id)arg2;
- (id)insertGroupEvent:(int)arg1 date:(id)arg2 notify:(_Bool)arg3;
- (_Bool)shouldInsertGroupEventOfType:(int)arg1;
- (id)insertSystemEvent:(int)arg1 fromJID:(id)arg2 date:(id)arg3 notify:(_Bool)arg4;
- (_Bool)shouldInsertSystemEventOfType:(int)arg1;
- (id)insertEventOfType:(int)arg1 fromJID:(id)arg2 date:(id)arg3 notify:(_Bool)arg4;
- (_Bool)shouldInsertEventOfType:(int)arg1;
- (id)insertOutgoingMessageOfType:(int)arg1 needsMediaItem:(_Bool)arg2;
- (void)setIndividualDeviceJIDs:(id)arg1;
- (_Bool)setSubjectText:(id)arg1;
- (_Bool)setUnreadCount:(int)arg1;
- (_Bool)markHidden:(_Bool)arg1;
- (_Bool)markArchived:(_Bool)arg1;
- (void)markTrusted;
@property(readonly, nonatomic) WAChatSession *replacedChatSession;
- (id)insertEmptyChatSession;
- (void)markRemoved;
- (void)markTemporary;
- (void)didInsertChatSession;
@property(readonly, nonatomic) _Bool wasRemoved;
@property(readonly, nonatomic) _Bool wasInserted;
- (void)enumerateListeners:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)enterRestoreMode;
@property(readonly, nonatomic) WAChatSession *chatSession;
- (void)dealloc;
- (id)initWithChatSession:(id)arg1;
- (void)insertInitialVerificationLevelMessageIfNeeded;
- (void)prepareChatSessionWithEncryptionLockMessage:(_Bool)arg1;
- (void)addTwoTierSystemMessageForVerificationLevel:(int)arg1 hasConflictingAddressBookEntry:(_Bool)arg2 verifiedName:(id)arg3;
- (void)removeParticipant:(id)arg1 insertMessage:(_Bool)arg2 authorJID:(id)arg3 fromOffline:(_Bool)arg4 timestamp:(id)arg5;
- (void)removeParticipant:(id)arg1 insertMessage:(_Bool)arg2;
- (void)addParticipants:(id)arg1 insertMessage:(_Bool)arg2 authorJID:(id)arg3 reason:(unsigned char)arg4 fromOffline:(_Bool)arg5 timestamp:(id)arg6;
- (void)addParticipant:(id)arg1 insertMessage:(_Bool)arg2;
- (id)fetchParticipantsWithJIDs:(id)arg1 preferredContacts:(id)arg2;
- (id)fetchParticipantsWithContacts:(id)arg1;
- (id)fetchParticipantsWithJIDs:(id)arg1;
- (id)fetchParticipantWithJID:(id)arg1;
- (void)handleParticipantChangedActive:(id)arg1;
- (void)handleChangeTrackingForAction:(int)arg1 participantJID:(id)arg2 timestamp:(id)arg3;
- (void)changeParticipantJournalMode:(unsigned long long)arg1;
- (void)updateDescription:(id)arg1 descriptionID:(id)arg2 notification:(id)arg3;
- (void)updateSubject:(id)arg1 notification:(id)arg2;
- (void)updateWithXMPPGroup:(id)arg1 notification:(id)arg2 attributes:(id)arg3;
- (id)insertInitialMessage;

@end
