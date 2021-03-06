//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDFCFileCache : NSObject
{
    struct Handle<std::__1::shared_ptr<PDFC::FileCache>, std::__1::shared_ptr<PDFC::FileCache>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)clear;
- (id)remove:(id)arg1;
- (id)get:(id)arg1;
- (id)put:(id)arg1 filePath:(id)arg2 options:(id)arg3;
- (long long)currentCacheSize;
- (long long)maxCacheSize;
- (void)setMaxCacheSize:(long long)arg1;
- (_Bool)hasEntry:(id)arg1;
- (id)initWithCpp:(const shared_ptr_61833e66 *)arg1;

@end

