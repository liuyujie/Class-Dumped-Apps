//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"
#import "XBXHttpRequestDelegate-Protocol.h"

@class NSMutableArray, NSMutableString, NSString;

@interface SGFeaturedFeedResponseParser : NSObject <XBXHttpRequestDelegate, NSXMLParserDelegate>
{
    NSMutableArray *_mediaItems;
    NSString *_resizeImageUrl;
    NSString *_title;
    NSString *_itemId;
    NSString *_locale;
    NSMutableString *_currentValue;
    long long _mediaItemType;
}

@property(nonatomic) long long mediaItemType; // @synthesize mediaItemType=_mediaItemType;
@property(retain, nonatomic) NSMutableString *currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *resizeImageUrl; // @synthesize resizeImageUrl=_resizeImageUrl;
@property(retain, nonatomic) NSMutableArray *mediaItems; // @synthesize mediaItems=_mediaItems;
- (void).cxx_destruct;
- (long long)getMediaItemTypeFromAction:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)didProcessData:(id)arg1 requestId:(int)arg2 data:(id)arg3 requestContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

