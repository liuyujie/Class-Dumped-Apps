//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLXImageDiskCache, NSCache;

@interface NFLXImageCacheManager : NSObject
{
    NFLXImageDiskCache *_diskCache;
    NSCache *_inMemoryCache;
}

+ (id)diskCache;
+ (id)manager;
@property(retain, nonatomic) NSCache *inMemoryCache; // @synthesize inMemoryCache=_inMemoryCache;
@property(retain, nonatomic) NFLXImageDiskCache *diskCache; // @synthesize diskCache=_diskCache;
- (void).cxx_destruct;
- (void)clearDiskCache;
- (void)clearInMemoryCache;
- (void)saveImageInMemory:(id)arg1 hashString:(id)arg2;
- (id)loadFromMemoryCacheImageHashString:(id)arg1;
- (id)loadFromMemoryCacheImageIdentity:(id)arg1;
- (void)saveImage:(id)arg1 urlPathString:(id)arg2 size:(struct CGSize)arg3 context:(id)arg4;
- (void)saveImage:(id)arg1 withIdentity:(id)arg2;
- (void)setImage:(id)arg1 imageRequest:(id)arg2;
- (id)loadImage:(id)arg1 size:(struct CGSize)arg2 context:(id)arg3;
- (id)loadImage:(id)arg1;
- (void)internalLowDiskSpaceNotification:(id)arg1;
- (id)init;

@end

