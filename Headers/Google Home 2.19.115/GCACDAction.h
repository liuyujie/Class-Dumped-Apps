//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GCACDAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *androidIntent; // @dynamic androidIntent;
@property(copy, nonatomic) NSString *displayString; // @dynamic displayString;
@property(copy, nonatomic) NSString *displayStringKey; // @dynamic displayStringKey;
@property(nonatomic) _Bool hasAndroidIntent; // @dynamic hasAndroidIntent;
@property(nonatomic) _Bool hasDisplayString; // @dynamic hasDisplayString;
@property(nonatomic) _Bool hasDisplayStringKey; // @dynamic hasDisplayStringKey;
@property(nonatomic) _Bool hasIosAction; // @dynamic hasIosAction;
@property(nonatomic) _Bool hasIosData; // @dynamic hasIosData;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) int iosAction; // @dynamic iosAction;
@property(copy, nonatomic) NSString *iosData; // @dynamic iosData;
@property(nonatomic) int type; // @dynamic type;

@end

