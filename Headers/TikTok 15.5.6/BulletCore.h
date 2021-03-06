//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BulletCommonUrlParamsBundle, BulletContextInfo, BulletPackageRegistry, NSMutableArray, NSMutableDictionary;
@protocol BulletKitGlobalSettingsProviderFactory, BulletReporter, BulletResourceLoader;

@interface BulletCore : NSObject
{
    BulletCommonUrlParamsBundle *_provideConfig;
    BulletContextInfo *_contextInfo;
    id <BulletResourceLoader> _resourceLoader;
    id <BulletReporter> _reporter;
    BulletCommonUrlParamsBundle *_config;
    CDUnknownBlockType _pipelineProvider;
    NSMutableArray *_kitApis;
    id <BulletKitGlobalSettingsProviderFactory> _globalSettingsProviderFactory;
    BulletPackageRegistry *_defaultPackageRegistry;
    NSMutableDictionary *_packageRegistries;
    NSMutableArray *_instanceHolders;
    NSMutableArray *_pipelines;
}

@property(retain, nonatomic) NSMutableArray *pipelines; // @synthesize pipelines=_pipelines;
@property(retain, nonatomic) NSMutableArray *instanceHolders; // @synthesize instanceHolders=_instanceHolders;
@property(retain, nonatomic) NSMutableDictionary *packageRegistries; // @synthesize packageRegistries=_packageRegistries;
@property(retain, nonatomic) BulletPackageRegistry *defaultPackageRegistry; // @synthesize defaultPackageRegistry=_defaultPackageRegistry;
@property(retain, nonatomic) id <BulletKitGlobalSettingsProviderFactory> globalSettingsProviderFactory; // @synthesize globalSettingsProviderFactory=_globalSettingsProviderFactory;
@property(retain, nonatomic) NSMutableArray *kitApis; // @synthesize kitApis=_kitApis;
@property(copy, nonatomic) CDUnknownBlockType pipelineProvider; // @synthesize pipelineProvider=_pipelineProvider;
@property(retain, nonatomic) BulletCommonUrlParamsBundle *config; // @synthesize config=_config;
@property(retain, nonatomic) id <BulletReporter> reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) id <BulletResourceLoader> resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(copy, nonatomic) BulletContextInfo *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(retain, nonatomic) BulletCommonUrlParamsBundle *provideConfig; // @synthesize provideConfig=_provideConfig;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getBySessionId:(id)arg1;
- (id)getByApiType:(Class)arg1;
- (void)processUrl:(id)arg1 instancesHolder:(id)arg2 sessionInfo:(id)arg3 packageNames:(id)arg4 contextInfo:(id)arg5 resolve:(CDUnknownBlockType)arg6 reject:(CDUnknownBlockType)arg7;
- (CDUnknownBlockType)concatKitUrlProcessingInProcessor:(CDUnknownBlockType)arg1 kitApi:(id)arg2 instancesHolder:(id)arg3 sessionInfo:(id)arg4 packageNames:(id)arg5;
- (id)createRegistryBundleWithKitApi:(id)arg1 packageNames:(id)arg2;
- (id)createNewInstanceWithKitApi:(id)arg1 sessionInfo:(id)arg2 packageNames:(id)arg3 contextInfo:(id)arg4;
- (void)didKitApiProcessorResolvedWithUnit:(id)arg1 instancesHolder:(id)arg2 kitApi:(id)arg3 sessionInfo:(id)arg4 packageNames:(id)arg5 resolve:(CDUnknownBlockType)arg6 reject:(CDUnknownBlockType)arg7;
- (void)didUnboundWithHolder:(id)arg1;
- (void)didBoundWithHolder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

