//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

@class NSMutableDictionary;

@interface NSDictionaryMap : JavaUtilAbstractMap
{
    NSMutableDictionary *dictionary_;
}

+ (id)mapWithDictionary:(id)arg1;
+ (id)map;
- (id)values;
- (int)size;
- (id)removeWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)keySet;
- (_Bool)isEmpty;
- (unsigned long long)hash;
- (id)getWithId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)entrySet;
- (_Bool)containsValueWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (void)clear;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

