//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGSmartStickerModelType-Protocol.h>
#import <FBSharedFramework/IGStickerModelType-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface IGInternalStickerModel : NSObject <IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSSecureCoding>
{
    _Bool _instagramInternalAvailable;
    _Bool _facebookInternalAvailable;
    NSArray *_stickers;
}

+ (_Bool)supportsSecureCoding;
+ (id)valueWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool facebookInternalAvailable; // @synthesize facebookInternalAvailable=_facebookInternalAvailable;
@property(readonly, nonatomic) _Bool instagramInternalAvailable; // @synthesize instagramInternalAvailable=_instagramInternalAvailable;
@property(readonly, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)smartStickerType;
@property(readonly, nonatomic) _Bool includeInRecent;
@property(readonly, copy, nonatomic) NSString *pk;
- (id)initWithInstagramInternalAvailable:(_Bool)arg1 facebookInternalAvailable:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

