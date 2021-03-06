//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBAREngineAsyncAssetLoading-Protocol.h>
#import <InstagramAppCoreFramework/NSSecureCoding-Protocol.h>

@class FBAREffectLoggingInfo, FBAREffectModel, NSString, NSURL;
@protocol FBARAssetsManager;

@interface FBAREngineAsyncAssetLoaderAdapter : NSObject <NSSecureCoding, FBAREngineAsyncAssetLoading>
{
    id <FBARAssetsManager> _assetsManager;
    FBAREffectLoggingInfo *_effectLoggingInfo;
    FBAREffectModel *_effectModel;
    NSURL *_baseURL;
    shared_ptr_537ac97e _asyncAssetFetcher;
    shared_ptr_63cb3669 _asyncAssetLoader;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) shared_ptr_63cb3669 asyncAssetLoader; // @synthesize asyncAssetLoader=_asyncAssetLoader;
@property(readonly, nonatomic) shared_ptr_537ac97e asyncAssetFetcher; // @synthesize asyncAssetFetcher=_asyncAssetFetcher;
@property(readonly, nonatomic) FBAREffectModel *effectModel; // @synthesize effectModel=_effectModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unique_ref_6a296fc1)_fetchAsyncAssetWithGraphQLID:(id)arg1 remoteURLString:(id)arg2 cacheKey:(id)arg3 assetType:(long long)arg4 completionCallback:(Function_7d1a6639 *)arg5;
- (shared_ptr_63cb3669)createAsyncAssetLoader:(struct ILogger *)arg1 bufferPool:(shared_ref_c863b8ca)arg2 asyncAssetFetcher:(shared_ref_a2f2313a)arg3 diskIOQueueDOSString:(const basic_string_90719d97 *)arg4 useConcurrentDiskIOQueue:(_Bool)arg5 shouldStopLoadingOnFirstBundle:(_Bool)arg6;
- (basic_string_90719d97)localAssetStorageBasePath;
- (id)_assetModel;
- (void)updateWithEffectModel:(id)arg1 effectLoggingInfo:(id)arg2;
- (id)initWithAssetsManager:(id)arg1 effectModel:(id)arg2 effectLoggingInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

