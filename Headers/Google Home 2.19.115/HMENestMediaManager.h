//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionFetcherService, NSCache, NSMapTable, NSURLCache;

@interface HMENestMediaManager : NSObject
{
    long long _cachePolicy;
    GTMSessionFetcherService *_fetcherService;
    NSCache *_imageCache;
    NSURLCache *_urlCache;
    NSMapTable *_clipLoaders;
    NSMapTable *_imageLoaders;
}

@property(readonly, nonatomic) NSMapTable *imageLoaders; // @synthesize imageLoaders=_imageLoaders;
@property(readonly, nonatomic) NSMapTable *clipLoaders; // @synthesize clipLoaders=_clipLoaders;
@property(retain, nonatomic) NSURLCache *urlCache; // @synthesize urlCache=_urlCache;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(nonatomic) long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void).cxx_destruct;
- (void)resetCache;
- (void)invalidateCacheForURL:(id)arg1;
- (id)loaderForImageURL:(id)arg1;
- (id)loaderForClipURL:(id)arg1;
- (id)init;
- (id)initWithService:(id)arg1;

@end

