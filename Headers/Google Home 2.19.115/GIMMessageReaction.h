//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMMessageReaction_EmojiReaction, NSString;

@interface GIMMessageReaction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(retain, nonatomic) GIMMessageReaction_EmojiReaction *emoji; // @dynamic emoji;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(readonly, nonatomic) int reactionResourceOneOfCase; // @dynamic reactionResourceOneOfCase;
@property(copy, nonatomic) NSString *referencedMessageId; // @dynamic referencedMessageId;

@end

