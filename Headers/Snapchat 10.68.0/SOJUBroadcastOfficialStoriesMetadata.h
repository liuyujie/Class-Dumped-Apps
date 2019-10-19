//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastOfficialStoriesMetadata-Protocol.h"

@class NSString;

@interface SOJUBroadcastOfficialStoriesMetadata : NSObject <SOJUBroadcastOfficialStoriesMetadata>
{
    NSString *_safeDisplayName;
    NSString *_emojiSymbol;
    NSString *_trackingId;
    NSString *_userId;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiAvatarSelfieId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, copy, nonatomic) NSString *emojiSymbol; // @synthesize emojiSymbol=_emojiSymbol;
@property(readonly, copy, nonatomic) NSString *safeDisplayName; // @synthesize safeDisplayName=_safeDisplayName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSafeDisplayName:(id)arg1 emojiSymbol:(id)arg2 trackingId:(id)arg3 userId:(id)arg4 bitmojiAvatarId:(id)arg5 bitmojiAvatarSelfieId:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
