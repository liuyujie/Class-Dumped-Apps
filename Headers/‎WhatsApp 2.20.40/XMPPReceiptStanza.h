//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPStanza.h>

@class NSArray, NSString, WADeviceJID;

@interface XMPPReceiptStanza : XMPPStanza
{
}

+ (unsigned long long)typeForString:(id)arg1;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)stringsForTypes;
+ (_Bool)isCompatibleStanzaElement:(id)arg1;
- (id)log;
@property(readonly, nonatomic) NSString *originalStanzaID;
@property(readonly, nonatomic) NSArray *actorJIDWrappers;
@property(readonly, nonatomic, getter=isAggregated) _Bool aggregated;
@property(readonly, nonatomic) WADeviceJID *fromCallJID;
@property(nonatomic) unsigned long long type;
- (id)initWithType:(unsigned long long)arg1;

@end

