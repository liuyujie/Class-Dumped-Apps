//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIUpdateCommentReplyDialogSupportedRenderers;

@interface YTIUpdateCommentReplyDialogEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUpdateCommentReplyDialogSupportedRenderers *dialog; // @dynamic dialog;
@property(nonatomic) _Bool hasDialog; // @dynamic hasDialog;
@property(nonatomic) _Bool hasIsCreatorReply; // @dynamic hasIsCreatorReply;
@property(nonatomic) _Bool hasOpenInPersistentCommentBox; // @dynamic hasOpenInPersistentCommentBox;
@property(nonatomic) _Bool isCreatorReply; // @dynamic isCreatorReply;
@property(nonatomic) _Bool openInPersistentCommentBox; // @dynamic openInPersistentCommentBox;

@end
