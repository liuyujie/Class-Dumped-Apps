//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TIMBaseORM.h"

#import "TIMConversationLocalInfoModelProtocol-Protocol.h"

@class NSString;

@interface TIMConversationLocalInfoORM : TIMBaseORM <TIMConversationLocalInfoModelProtocol>
{
    NSString *_belongingConversationIdentifier;
    long long _infoVersion;
}

+ (const struct WCTProperty *)infoVersion;
+ (const struct WCTProperty *)belongingConversationIdentifier;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long infoVersion; // @synthesize infoVersion=_infoVersion;
@property(retain, nonatomic) NSString *belongingConversationIdentifier; // @synthesize belongingConversationIdentifier=_belongingConversationIdentifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

