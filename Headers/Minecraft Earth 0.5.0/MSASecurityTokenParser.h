//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class MSARawXmlParser, NSString;

@interface MSASecurityTokenParser : MSABaseXmlParser
{
    MSARawXmlParser *_rawXmlParser;
    NSString *_tokenBlob;
}

@property(readonly) NSString *tokenBlob; // @synthesize tokenBlob=_tokenBlob;
- (void).cxx_destruct;
- (void)onStartElement:(id)arg1 namespaceURI:(id)arg2 attributes:(id)arg3;

@end
