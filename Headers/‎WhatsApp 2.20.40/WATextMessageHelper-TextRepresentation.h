//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATextMessageHelper.h>

@interface WATextMessageHelper (TextRepresentation)
+ (id)formattedStringWithVoiceOverContentOnlyForMessage:(id)arg1;
+ (id)attributedTextForMessage:(id)arg1;
+ (id)formattedStringWithVoiceOverSummaryForMessage:(id)arg1 groupParticipantOnly:(_Bool)arg2;
+ (id)stringRepresentationForReplyForMessage:(id)arg1;
+ (id)stringRepresentationForChatForMessage:(id)arg1;
+ (id)stringComponentsForExportForMessage:(id)arg1 withSenderName:(_Bool)arg2;
+ (void)copyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
+ (_Bool)canCopyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
@end

