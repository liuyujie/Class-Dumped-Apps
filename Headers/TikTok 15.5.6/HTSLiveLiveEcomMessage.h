//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, NSString;

@interface HTSLiveLiveEcomMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) long long countdown; // @dynamic countdown;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(copy, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) long long metaId; // @dynamic metaId;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(copy, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) long long purchaseCnt; // @dynamic purchaseCnt;
@property(nonatomic) long long serverTime; // @dynamic serverTime;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

