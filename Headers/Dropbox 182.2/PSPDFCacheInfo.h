//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/NSCopying-Protocol.h>
#import <PSPDFKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface PSPDFCacheInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _cachedHash;
    _Bool _evicted;
    NSString *_uid;
    unsigned long long _pageIndex;
    unsigned long long _optionsHash;
    long long _cost;
    unsigned long long _documentHash;
    struct CGSize _size;
}

+ (id)cacheInfoForRequest:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)cacheInfoForRequest:(id)arg1 error:(id *)arg2;
@property unsigned long long documentHash; // @synthesize documentHash=_documentHash;
@property long long cost; // @synthesize cost=_cost;
@property _Bool evicted; // @synthesize evicted=_evicted;
@property(readonly, nonatomic) unsigned long long optionsHash; // @synthesize optionsHash=_optionsHash;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDocumentUID:(id)arg1 pageIndex:(unsigned long long)arg2 size:(struct CGSize)arg3 optionsHash:(unsigned long long)arg4;
- (id)init;

@end

