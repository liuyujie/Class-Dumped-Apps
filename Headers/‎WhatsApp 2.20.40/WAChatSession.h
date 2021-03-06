//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAChatStorageManagedObject.h>

@class NSDate, NSSet, NSString, WAChatJID, WAChatSessionSavedReply, WAChatSessionTransaction, WAGroupInfo, WAMessage, WAPBChatSessionMetadata;
@protocol WAServerDate;

@interface WAChatSession : WAChatStorageManagedObject
{
    WAChatSessionSavedReply *_savedReply;
    WAChatSessionTransaction *_transaction;
    _Bool _contactAddedByQR;
    WAChatJID *_chatJID;
    WAPBChatSessionMetadata *_metadata;
}

+ (id)earliestPinnedMessageDate;
+ (id)commaSeparatedListOfContactNames:(id)arg1 limit:(unsigned long long)arg2;
+ (id)listOfContactNamesForContacts:(id)arg1 prioritizingContactWithJID:(id)arg2 unsorted:(_Bool)arg3;
+ (id)firstNamesOfContactsInTheList:(id)arg1 limit:(unsigned long long)arg2 unsorted:(_Bool)arg3;
+ (id)firstNamesOfContactsInTheList:(id)arg1 limit:(unsigned long long)arg2;
+ (id)excludedSystemEventsIsContactBlocked:(_Bool)arg1;
+ (id)participantsHashForUserJIDs:(id)arg1;
@property(nonatomic) _Bool contactAddedByQR; // @synthesize contactAddedByQR=_contactAddedByQR;
@property(retain, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long contactEphemeralSettingTimestamp;
@property(nonatomic) unsigned int ephemeralChatExpiration;
- (void)removeEphemeralChatExpiration;
@property(readonly, nonatomic, getter=isEphemeralChat) _Bool ephemeralChat;
@property(copy, nonatomic) WAPBChatSessionMetadata *metadata; // @synthesize metadata=_metadata;
- (_Bool)validateWebClientPinDate:(id)arg1 defaultValue:(_Bool)arg2;
@property(retain, nonatomic) NSDate *webClientPinDate;
- (id)storedWebClientPinDate;
- (long long)getLastMessageYear;
- (int)getPinnedYears;
- (id)realLastMessageDate;
- (long long)isPinned;
- (void)unpin;
- (void)pinToPosition:(unsigned long long)arg1;
- (id)queryPendingStatusMessageCounts;
- (unsigned long long)queryCompletedStatusMessageCount;
- (id)statusPredicateByAdding:(id)arg1;
- (id)statusPredicateByAdding:(id)arg1 deletionTypes:(id)arg2;
- (id)statusFilterForDeletionType:(short)arg1;
@property(readonly, nonatomic) short completedDeletionType;
@property(readonly, nonatomic) short pendingDeletionType;
- (id)firstNamesOfActiveGroupMembersPrioritizingJID:(id)arg1 limit:(long long)arg2 returningFullListSize:(out long long *)arg3;
- (id)firstNamesOfActiveGroupMembersPrioritizingJID:(id)arg1;
- (id)firstNamesOfActiveGroupMembersWithLimit:(long long)arg1 returningFullListSize:(out long long *)arg2;
- (id)firstNamesOfActiveGroupMembersForVoiceOver;
- (id)firstNamesOfActiveGroupMembers;
- (unsigned long long)numberOfActiveGroupMembers;
@property(readonly, nonatomic) NSSet *activeGroupMemberUserJIDs;
@property(readonly, nonatomic) NSSet *activeGroupMembers;
@property(readonly, nonatomic) NSSet *activeOrRemovedGroupMembers;
- (void)setSaveToCameraRollSetting:(int)arg1 allowExternalSideEffects:(_Bool)arg2;
@property(readonly, nonatomic) int saveToCameraRollSetting;
@property(readonly, nonatomic) _Bool shouldAutoSaveMediaToCameraRoll;
@property(readonly, nonatomic) _Bool requiresFetchForChatListLastMessage;
@property(readonly, nonatomic) WAMessage *lastMessageForChatList;
@property(readonly, nonatomic, getter=isSuspicious) _Bool suspicious;
@property(copy, nonatomic) NSString *savedInput; // @dynamic savedInput;
@property(readonly, copy, nonatomic) NSString *participantsHashV2;
@property(readonly, copy, nonatomic) NSString *participantsHash;
@property(readonly, nonatomic) _Bool hasParticipantsHash;
- (id)internalDisplayNameOrDefault:(_Bool)arg1;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *displayNameOrDefault;
@property(readonly, copy, nonatomic) NSString *subjectTextOrDefault;
- (void)setSubjectTextWithoutExternalSideEffects:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subjectText;
- (void)setContactNameWithoutExternalSideEffects:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contactName;
@property(readonly, nonatomic) _Bool usesSubjectText;
@property(nonatomic) int messageCounter; // @dynamic messageCounter;
- (void)setChatJID:(id)arg1 allowExternalSideEffects:(_Bool)arg2;
@property(readonly, nonatomic) WAChatJID *chatJIDIfValid;
@property(readonly, nonatomic, getter=isUnknownContact) _Bool unknownContact;
@property(readonly, nonatomic) unsigned long long maxParticipants;
@property(readonly, nonatomic, getter=isFrequentlyForwardedProhibitedGroup) _Bool frequentlyForwardedProhibitedGroup;
@property(readonly, nonatomic) _Bool currentUserCanMessageChat;
@property(readonly, nonatomic) _Bool readonlyAnnouncementOnlyGroup;
@property(readonly, nonatomic) _Bool currentUserCanEditGroup;
@property(readonly, nonatomic) _Bool currentUserIsAdmin;
- (id)groupMemberWithJID:(id)arg1;
@property(readonly, nonatomic, getter=isReadonlyGroup) _Bool readonlyGroup;
@property(readonly, nonatomic, getter=isOutgoingStatusChat) _Bool outgoingStatusChat;
@property(readonly, nonatomic, getter=isBroadcastList) _Bool broadcastList;
@property(readonly, nonatomic, getter=isGroupChat) _Bool groupChat;
@property(readonly, nonatomic, getter=isIncomingStatusChat) _Bool incomingStatusChat;
@property(readonly, nonatomic, getter=isIndividualChat) _Bool individualChat;
@property(readonly, nonatomic, getter=isContactBlocked) _Bool contactBlocked;
@property(readonly, nonatomic, getter=isSMBChat) _Bool smbChat;
@property(readonly, nonatomic, getter=isEnterpriseChat) _Bool enterpriseChat;
@property(readonly, nonatomic, getter=isBusinessChat) _Bool businessChat;
@property(nonatomic) _Bool vCardMatchDeclined;
@property(nonatomic, getter=isEligibleForGhostMessageUpdate) _Bool eligibleForGhostMessageUpdate;
- (void)setLocationSharingEndDate:(id)arg1 allowExternalSideEffects:(_Bool)arg2;
- (_Bool)testFlagBit:(int)arg1;
- (void)clearFlagBit:(int)arg1;
- (void)setFlagBit:(int)arg1;
- (void)updatePrimitiveLastMessageDate:(id)arg1;
@property(retain, nonatomic) NSDate<WAServerDate> *lastMessageDate; // @dynamic lastMessageDate;
@property(nonatomic) _Bool archived; // @dynamic archived;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)didTurnIntoFault;
- (void)awakeFromFetch;
- (id)predicateForIncomingMessagesInLastSevenDays;
- (id)predicateForLastIncomingMessages;
- (id)predicateForLastSevenDays;
- (long long)incomingMessagesCount;
- (id)lastIncomingGroupMessagesForSpamReportingWithJID:(id)arg1;
- (id)lastIncomingIndividualMessagesForSpamReporting;
- (id)lastIncomingOrOutgoingMessagesForSMBGreetingMessageBeforeMessage:(id)arg1;
- (id)lastIncomingMessage;
- (id)lastIncomingMessagesForSpamReporting;
- (id)messageWithStanzaID:(id)arg1 isFromMe:(_Bool)arg2;
- (id)messageWithStanzaID:(id)arg1 authorUserJID:(id)arg2;
- (id)messageWithStanzaID:(id)arg1 participantUserJID:(id)arg2 isFromMe:(_Bool)arg3;
- (id)messagesWithStanzaID:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *contactIdentifier; // @dynamic contactIdentifier;
@property(copy, nonatomic) NSString *contactJID; // @dynamic contactJID;
@property(copy, nonatomic) NSString *eTag; // @dynamic eTag;
@property(nonatomic) int flags; // @dynamic flags;
@property(retain, nonatomic) WAGroupInfo *groupInfo; // @dynamic groupInfo;
@property(copy, nonatomic) NSSet *groupMembers; // @dynamic groupMembers;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(nonatomic) int identityVerificationEpoch; // @dynamic identityVerificationEpoch;
@property(nonatomic) short identityVerificationState; // @dynamic identityVerificationState;
@property(retain, nonatomic) WAMessage *lastMessage; // @dynamic lastMessage;
@property(retain, nonatomic) NSDate<WAServerDate> *locationSharingEndDate; // @dynamic locationSharingEndDate;
@property(copy, nonatomic) NSString *partnerName; // @dynamic partnerName;
@property(nonatomic) _Bool removed; // @dynamic removed;
@property(nonatomic) short sessionType; // @dynamic sessionType;
@property(nonatomic) short spotlightStatus; // @dynamic spotlightStatus;
@property(nonatomic) int unreadCount; // @dynamic unreadCount;

@end

