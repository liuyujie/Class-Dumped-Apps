//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface RequestContext_Phrase : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float affinity; // @dynamic affinity;
@property(nonatomic) float boost; // @dynamic boost;
@property(nonatomic) _Bool hasAffinity; // @dynamic hasAffinity;
@property(nonatomic) _Bool hasBoost; // @dynamic hasBoost;
@property(nonatomic) _Bool hasPhrase; // @dynamic hasPhrase;
@property(copy, nonatomic) NSString *phrase; // @dynamic phrase;

@end

