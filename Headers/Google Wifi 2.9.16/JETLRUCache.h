//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JETLRUDictionaryEntry, NSMutableDictionary;

@interface JETLRUCache : NSObject
{
    JETLRUDictionaryEntry *_first;
    JETLRUDictionaryEntry *_last;
    NSMutableDictionary *_entries;
    unsigned long long _maxCacheSize;
}

@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(retain, nonatomic) NSMutableDictionary *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) JETLRUDictionaryEntry *last; // @synthesize last=_last;
@property(retain, nonatomic) JETLRUDictionaryEntry *first; // @synthesize first=_first;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;
- (id)initWithSize:(unsigned long long)arg1;

@end
