//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSString;

@interface WAPBMessageStatusChangeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *actorJidString; // @dynamic actorJidString;
@property(nonatomic) _Bool forSender; // @dynamic forSender;
@property(nonatomic) _Bool hasActorJidString; // @dynamic hasActorJidString;
@property(nonatomic) _Bool hasForSender; // @dynamic hasForSender;
@property(nonatomic) _Bool hasMessageUniqueKey; // @dynamic hasMessageUniqueKey;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(copy, nonatomic) NSString *messageUniqueKey; // @dynamic messageUniqueKey;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) long long timestamp; // @dynamic timestamp;

@end

