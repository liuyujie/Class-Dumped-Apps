//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIPRGetPeopleRequest, NSString;

@interface GIPRStarPersonRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPRGetPeopleRequest *getPeopleRequest; // @dynamic getPeopleRequest;
@property(nonatomic) _Bool hasGetPeopleRequest; // @dynamic hasGetPeopleRequest;
@property(copy, nonatomic) NSString *personId; // @dynamic personId;
@property(nonatomic) _Bool skipPostMutateGet; // @dynamic skipPostMutateGet;
@property(nonatomic) _Bool unstar; // @dynamic unstar;

@end

