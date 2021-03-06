//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBAssetsCache, DBMockURLHandler, NSMutableDictionary;

@interface DBResourceLoader : NSObject
{
    DBAssetsCache *_cache;
    NSMutableDictionary *_inProgressURLs;
    DBMockURLHandler *_mockURLHandler;
}

@property(retain, nonatomic) DBMockURLHandler *mockURLHandler; // @synthesize mockURLHandler=_mockURLHandler;
- (void).cxx_destruct;
- (id)test_assetsCache;
- (void)clearCacheSync;
- (void)clearResourceForURL:(id)arg1;
- (void)imageForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_addCompletionBlockForRequestingURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)db_requestFileAtURL:(id)arg1;
- (void)db_makeRequestToURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)db_callCompletionBlocksForURL:(id)arg1 image:(id)arg2;
- (id)initWithCacheDirectory:(id)arg1 cacheDiskSize:(unsigned long long)arg2;
- (id)init;

@end

