//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@interface WAPBChatMessageCountEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int businessType; // @dynamic businessType;
@property(nonatomic) _Bool inAddressBook; // @dynamic inAddressBook;
@property(nonatomic) unsigned long long incomingCount; // @dynamic incomingCount;
@property(nonatomic) _Bool isMuted; // @dynamic isMuted;
@property(nonatomic) unsigned long long outgoingCount; // @dynamic outgoingCount;

@end

