//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class MPDiskLRUCache, NSCache, NSString;

@interface MPNativeCache : NSObject <NSCacheDelegate>
{
    int _cacheMethod;
    NSCache *_memoryCache;
    MPDiskLRUCache *_diskCache;
}

+ (id)sharedCache;
@property(nonatomic) int cacheMethod; // @synthesize cacheMethod=_cacheMethod;
@property(retain, nonatomic) MPDiskLRUCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)removeAllDataFromDisk;
- (void)removeAllDataFromMemory;
- (void)storeData:(id)arg1 forKey:(id)arg2 withCacheMethod:(int)arg3;
- (id)retrieveDataForKey:(id)arg1 withCacheMethod:(int)arg2;
- (_Bool)cachedDataExistsForKey:(id)arg1 withCacheMethod:(int)arg2;
- (void)removeAllDataFromCache;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (id)retrieveDataForKey:(id)arg1;
- (_Bool)cachedDataExistsForKey:(id)arg1;
- (void)setInMemoryCacheEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

