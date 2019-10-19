//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRScribeSerializable-Protocol.h"

@class NSString, TWTRScribeCardEvent, TWTRScribeFilterDetails, TWTRScribeMediaDetails;

@interface TWTRScribeItem : NSObject <TWTRScribeSerializable>
{
    unsigned long long _itemType;
    NSString *_itemID;
    TWTRScribeCardEvent *_cardEvent;
    TWTRScribeMediaDetails *_mediaDetails;
    TWTRScribeFilterDetails *_filterDetails;
}

+ (id)scribeKey;
@property(readonly, nonatomic) TWTRScribeFilterDetails *filterDetails; // @synthesize filterDetails=_filterDetails;
@property(readonly, nonatomic) TWTRScribeMediaDetails *mediaDetails; // @synthesize mediaDetails=_mediaDetails;
@property(readonly, nonatomic) TWTRScribeCardEvent *cardEvent; // @synthesize cardEvent=_cardEvent;
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithItemType:(unsigned long long)arg1 itemID:(id)arg2 cardEvent:(id)arg3 mediaDetails:(id)arg4 filterDetails:(id)arg5;
- (id)initWithItemType:(unsigned long long)arg1 itemID:(id)arg2 cardEvent:(id)arg3 mediaDetails:(id)arg4;
- (id)initWithItemType:(unsigned long long)arg1 itemID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
