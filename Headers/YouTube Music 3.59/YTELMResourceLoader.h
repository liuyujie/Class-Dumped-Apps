//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ELMClientResourceLoader-Protocol.h"
#import "YTElementsResourceLoader-Protocol.h"

@class GIMMe, NSCache, NSMutableDictionary, NSString;

@interface YTELMResourceLoader : NSObject <YTElementsResourceLoader, ELMClientResourceLoader>
{
    NSMutableDictionary *_assetLoaderMap;
    NSCache *_imageCache;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)resourceBundleForModuleName:(id)arg1;
- (id)assetLoaderWithBundleId:(id)arg1;
- (id)imageWithName:(id)arg1 color:(id)arg2 bundleId:(id)arg3;
- (id)imageWithClientResource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

