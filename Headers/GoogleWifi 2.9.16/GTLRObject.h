//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTLRRuntimeCommon-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol GTLRObjectClassResolver;

@interface GTLRObject : NSObject <GTLRRuntimeCommon, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_childCache;
    NSMutableDictionary *_json;
    id <GTLRObjectClassResolver> _objectClassResolver;
    NSDictionary *_userProperties;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (Class)ancestorClass;
+ (id)arrayPropertyToClassMapForClass:(Class)arg1;
+ (id)propertyToJSONKeyMapForClass:(Class)arg1;
+ (void)initialize;
+ (id)objectForJSON:(id)arg1 defaultClass:(Class)arg2 objectClassResolver:(id)arg3;
+ (id)allKnownKeys;
+ (id)allDeclaredProperties;
+ (id)nullValue;
+ (id)patchDictionaryForJSON:(id)arg1 fromOriginalJSON:(id)arg2;
+ (id)fieldsElementsForJSON:(id)arg1;
+ (id)fieldsDescriptionForJSON:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)isKindValidForClassRegistry;
+ (Class)classForAdditionalProperties;
+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;
+ (id)objectWithJSON:(id)arg1 objectClassResolver:(id)arg2;
+ (id)objectWithJSON:(id)arg1;
+ (id)object;
@property(retain, nonatomic) NSDictionary *userProperties; // @synthesize userProperties=_userProperties;
@property(retain, nonatomic) id <GTLRObjectClassResolver> objectClassResolver; // @synthesize objectClassResolver=_objectClassResolver;
@property(retain, nonatomic) NSMutableDictionary *JSON; // @synthesize JSON=_json;
- (void).cxx_destruct;
- (id)JSONDescription;
@property(readonly, copy) NSString *description;
- (id)cacheChildForKey:(id)arg1;
- (void)setCacheChild:(id)arg1 forKey:(id)arg2;
- (id)additionalProperties;
- (void)setAdditionalProperty:(id)arg1 forName:(id)arg2;
- (id)additionalPropertyForName:(id)arg1;
- (id)patchObjectFromOriginal:(id)arg1;
- (id)fieldsDescription;
- (id)additionalJSONKeys;
- (id)JSONString;
- (id)JSONValueForKey:(id)arg1;
- (void)setJSONValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

