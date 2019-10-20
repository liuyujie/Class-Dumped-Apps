//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GAZDuplicationHint, GPBEnumArray;

@interface GAZTxParamsRendered : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GAZDuplicationHint *duplicationHint; // @dynamic duplicationHint;
@property(nonatomic) unsigned long long expiryTimeMillis; // @dynamic expiryTimeMillis;
@property(nonatomic) long long forceUnlockMillis; // @dynamic forceUnlockMillis;
@property(nonatomic) _Bool hasDuplicationHint; // @dynamic hasDuplicationHint;
@property(nonatomic) _Bool hasExpiryTimeMillis; // @dynamic hasExpiryTimeMillis;
@property(nonatomic) _Bool hasForceUnlockMillis; // @dynamic hasForceUnlockMillis;
@property(nonatomic) _Bool hasInteraction; // @dynamic hasInteraction;
@property(nonatomic) _Bool hasInteractionAfterTrigger; // @dynamic hasInteractionAfterTrigger;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int interaction; // @dynamic interaction;
@property(nonatomic) int interactionAfterTrigger; // @dynamic interactionAfterTrigger;
@property(retain, nonatomic) GPBEnumArray *triggersArray; // @dynamic triggersArray;
@property(readonly, nonatomic) unsigned long long triggersArray_Count; // @dynamic triggersArray_Count;
@property(nonatomic) int type; // @dynamic type;

@end

