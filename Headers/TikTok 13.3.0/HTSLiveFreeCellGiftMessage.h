//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveFreeCellGiftMessage_FreeCellData, HTSLiveUser;

@interface HTSLiveFreeCellGiftMessage : GPBMessage
{
    _Bool _isFakedChainsGift;
}

+ (id)descriptor;
@property(nonatomic) _Bool isFakedChainsGift; // @synthesize isFakedChainsGift=_isFakedChainsGift;

// Remaining properties
@property(nonatomic) long long comboCount; // @dynamic comboCount;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) long long fanTicketCount; // @dynamic fanTicketCount;
@property(retain, nonatomic) HTSLiveFreeCellGiftMessage_FreeCellData *freeCell; // @dynamic freeCell;
@property(nonatomic) long long giftId; // @dynamic giftId;
@property(nonatomic) long long groupCount; // @dynamic groupCount;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasFreeCell; // @dynamic hasFreeCell;
@property(nonatomic) _Bool hasToUser; // @dynamic hasToUser;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) long long repeatCount; // @dynamic repeatCount;
@property(retain, nonatomic) HTSLiveUser *toUser; // @dynamic toUser;
@property(retain, nonatomic) HTSLiveUser *user; // @dynamic user;

@end
