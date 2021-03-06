//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonCacheAsyncCacheLoader, JavaLangThreadLocal, JavaUtilConcurrentAtomicAtomicReference;
@protocol ComGoogleCommonCacheAbstractCache_StatsCounter, ComGoogleCommonCacheShimAsyncCache_StatsFixer, JavaUtilConcurrentConcurrentMap;

@interface ComGoogleCommonCacheShimAsyncCache_Entry : NSObject
{
    id <JavaUtilConcurrentConcurrentMap> cache_;
    ComGoogleCommonCacheAsyncCacheLoader *loader_;
    JavaLangThreadLocal *batch_;
    id key_;
    JavaUtilConcurrentAtomicAtomicReference *state_;
    id <ComGoogleCommonCacheAbstractCache_StatsCounter> statsCounter_;
    id <ComGoogleCommonCacheShimAsyncCache_StatsFixer> statsFixer_;
}

- (void)dealloc;
- (void)loadOrBatchWithComGoogleCommonUtilConcurrentSettableFuture:(id)arg1;
- (void)listenWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1 withComGoogleCommonCacheShimAsyncCache_RecordCompletion:(id)arg2;
- (void)refreshEntry;
- (void)addFutureWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1 withComGoogleCommonCacheShimAsyncCache_RecordCompletion:(id)arg2;
- (void)maybeLoadWithComGoogleCommonCacheShimAsyncCache_LoadWhen:(id)arg1;
- (id)getOrLoadFuture;
- (id)getIfPresent;

@end

