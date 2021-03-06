//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NSSecureCoding-Protocol.h>

@class NSString;

@interface NIDTokens : NSObject <NSSecureCoding>
{
    _Bool _isTest;
    NSString *_nid;
    NSString *_snid;
}

+ (_Bool)supportsSecureCoding;
+ (id)NIDTokensFromBase64:(id)arg1;
@property(readonly, nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(retain, nonatomic) NSString *snid; // @synthesize snid=_snid;
@property(retain, nonatomic) NSString *nid; // @synthesize nid=_nid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)_initWithSecureCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)customerHash;
- (id)nrdCookies;
- (id)description;
- (id)cookieForSNIDString:(id)arg1 isTest:(_Bool)arg2;
- (id)cookieForSNID;
- (id)cookieForNIDString:(id)arg1 isTest:(_Bool)arg2;
- (id)cookieForNID;
- (id)base64;
- (id)initForUseAsNIDTokenProtocolDelegate;
- (id)initWithNID:(id)arg1 SNID:(id)arg2 isTest:(_Bool)arg3;

// Remaining properties
@property(copy) NSString *base64Tokens; // @dynamic base64Tokens;

@end

