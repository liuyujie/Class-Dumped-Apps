//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CSHMMobileJoinConversationResponse, CSHMMobileLeaveConversationResponse, CSHMMobileSendMessageResponse;

@interface CSHMMobileUpdateConversationResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CSHMMobileJoinConversationResponse *joinConversationResponse; // @dynamic joinConversationResponse;
@property(retain, nonatomic) CSHMMobileLeaveConversationResponse *leaveConversationResponse; // @dynamic leaveConversationResponse;
@property(readonly, nonatomic) int mobileUpdateConversationResponseDataOneOfCase; // @dynamic mobileUpdateConversationResponseDataOneOfCase;
@property(retain, nonatomic) CSHMMobileSendMessageResponse *sendMessageResponse; // @dynamic sendMessageResponse;

@end

