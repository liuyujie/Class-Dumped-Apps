//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber;

@interface SCLRequestMetrics : NSObject <NSCopying>
{
    _Bool _arePathsSanitized;
    long long _type;
    NSArray *_paths;
    NSNumber *_extensionId;
    NSArray *_contentTypes;
    unsigned long long _httpReturnStatus;
    unsigned long long _headerLatency;
    unsigned long long _payloadLatency;
    unsigned long long _bytesSent;
    unsigned long long _bytesReceived;
}

@property(nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(nonatomic) unsigned long long payloadLatency; // @synthesize payloadLatency=_payloadLatency;
@property(nonatomic) unsigned long long headerLatency; // @synthesize headerLatency=_headerLatency;
@property(nonatomic) unsigned long long httpReturnStatus; // @synthesize httpReturnStatus=_httpReturnStatus;
@property(copy, nonatomic) NSArray *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(copy, nonatomic) NSNumber *extensionId; // @synthesize extensionId=_extensionId;
@property(nonatomic) _Bool arePathsSanitized; // @synthesize arePathsSanitized=_arePathsSanitized;
@property(copy, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)pathsDescription;
- (id)latencyDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;

@end

