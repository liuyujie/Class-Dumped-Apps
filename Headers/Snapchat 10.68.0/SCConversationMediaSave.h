//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCConversationMediaSave : NSObject <NSCopying>
{
    BOOL _destination;
    NSString *_senderId;
    NSString *_messageId;
    NSArray *_mediaTypeSavedCount;
}

@property(readonly, copy, nonatomic) NSArray *mediaTypeSavedCount; // @synthesize mediaTypeSavedCount=_mediaTypeSavedCount;
@property(readonly, nonatomic) BOOL destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSenderId:(id)arg1 messageId:(id)arg2 destination:(BOOL)arg3 mediaTypeSavedCount:(id)arg4;

@end
