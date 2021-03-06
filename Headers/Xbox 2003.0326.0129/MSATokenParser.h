//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class MSAPassportParser, MSAProofTokenParser, MSASecurityScope, MSASecurityTokenParser, MSAStsError, MSATimeListParser, NSData, NSDate, NSString;

@interface MSATokenParser : MSABaseXmlParser
{
    MSASecurityScope *_ticketScope;
    long long _securityTokenMode;
    NSString *_tokenType;
    NSString *_target;
    NSString *_tokenBlob;
    MSATimeListParser *_timeListParser;
    MSASecurityTokenParser *_securityTokenParser;
    MSAPassportParser *_passportParser;
    MSAProofTokenParser *_sessionKeyParser;
    NSDate *_expiry;
    NSString *_daToken;
    NSData *_sessionKey;
    NSString *_ticketValue;
    MSAStsError *_ticketError;
    NSString *_ticketInlineAuthUrl;
}

@property(readonly) NSString *ticketInlineAuthUrl; // @synthesize ticketInlineAuthUrl=_ticketInlineAuthUrl;
@property(readonly) MSAStsError *ticketError; // @synthesize ticketError=_ticketError;
@property(readonly) NSString *ticketValue; // @synthesize ticketValue=_ticketValue;
@property(readonly) NSData *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(readonly) NSString *daToken; // @synthesize daToken=_daToken;
@property(readonly) NSDate *expiry; // @synthesize expiry=_expiry;
- (void).cxx_destruct;
- (void)parseRequestedSecurityTokenNode;
- (void)onParserFinished;
- (void)onStartElement:(id)arg1 namespaceURI:(id)arg2 attributes:(id)arg3;
- (id)initWithParentParser:(id)arg1 ticketScope:(id)arg2 securityTokenMode:(long long)arg3;
- (id)initWithParentParser:(id)arg1 securityTokenMode:(long long)arg2;

@end

