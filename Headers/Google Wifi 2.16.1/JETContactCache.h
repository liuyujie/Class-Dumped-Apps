//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JETLRUCache;

@interface JETContactCache : NSObject
{
    JETLRUCache *_cache;
}

@property(retain, nonatomic) JETLRUCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)dealloc;
- (void)lowMemoryWarning:(id)arg1;
- (void)addContact:(id)arg1;
- (id)contactForEmail:(id)arg1;
- (id)init;
- (id)initWithCacheSize:(unsigned long long)arg1;

@end

