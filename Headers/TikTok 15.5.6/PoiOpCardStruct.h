//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface PoiOpCardStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cardId; // @dynamic cardId;
@property(retain, nonatomic) UrlStruct *cover; // @dynamic cover;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasCardId; // @dynamic hasCardId;
@property(nonatomic) _Bool hasCover; // @dynamic hasCover;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasLocationIndex; // @dynamic hasLocationIndex;
@property(nonatomic) _Bool hasSchema; // @dynamic hasSchema;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) long long locationIndex; // @dynamic locationIndex;
@property(copy, nonatomic) NSString *schema; // @dynamic schema;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

