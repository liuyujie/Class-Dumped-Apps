//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMessageProtocol-Protocol.h>
#import <FBSharedFramework/IGMediaViewerSpecifierProvider-Protocol.h>

@class IGDirectMessageMetadata, IGDirectQuotedPublishedMessage, IGLiveBroadcast, NSArray, NSString;

@interface IGDirectLiveViewerInvite : NSObject <IGDirectMessageProtocol, IGMediaViewerSpecifierProvider>
{
    long long _textType;
    IGDirectQuotedPublishedMessage *_quotedMessage;
    NSArray *_likers;
    NSArray *_reactions;
    IGDirectMessageMetadata *_metadata;
    NSString *_comment;
    IGLiveBroadcast *_broadcast;
    long long _startPlaybackAtOffset;
    NSString *_placeholderTitle;
    NSString *_placeholderMessage;
}

@property(readonly, copy, nonatomic) NSString *placeholderMessage; // @synthesize placeholderMessage=_placeholderMessage;
@property(readonly, copy, nonatomic) NSString *placeholderTitle; // @synthesize placeholderTitle=_placeholderTitle;
@property(readonly, nonatomic) long long startPlaybackAtOffset; // @synthesize startPlaybackAtOffset=_startPlaybackAtOffset;
@property(readonly, nonatomic) IGLiveBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) IGDirectMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, nonatomic) NSArray *likers; // @synthesize likers=_likers;
@property(readonly, nonatomic) IGDirectQuotedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mediaViewerSpecifier;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;
- (id)coverFrameUrl;
- (_Bool)isExpired;
@property(readonly, nonatomic) long long textType;
- (id)initWithMetadata:(id)arg1 broadcast:(id)arg2 comment:(id)arg3 textType:(long long)arg4 placeholderTitle:(id)arg5 placeholderMessage:(id)arg6 likers:(id)arg7 reactions:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

