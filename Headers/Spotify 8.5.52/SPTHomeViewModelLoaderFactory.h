//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentDefaults, SPTHomeContentOperationFactory;
@protocol HUBContentOperation><SPTHomeCacheRenderDelegate, HUBContentOperation><SPTHomeViewControllerDelegate, SPTHomeTestManager, SPTHomeUIService, SPTHugsFactory, SPTSeedASessionService;

@interface SPTHomeViewModelLoaderFactory : NSObject
{
    SPTHomeContentOperationFactory *_contentOperationFactory;
    id <SPTHomeTestManager> _testManager;
    id <SPTHugsFactory> _hugsFactory;
    id <SPTHomeUIService> _homeUIService;
    id <SPTSeedASessionService> _seedASessionService;
    HUBComponentDefaults *_componentDefaults;
    id <HUBContentOperation><SPTHomeCacheRenderDelegate> _errorHandlerContentOperation;
    id <HUBContentOperation><SPTHomeViewControllerDelegate> _tooltipContentOperation;
}

@property(retain, nonatomic) id <HUBContentOperation><SPTHomeViewControllerDelegate> tooltipContentOperation; // @synthesize tooltipContentOperation=_tooltipContentOperation;
@property(retain, nonatomic) id <HUBContentOperation><SPTHomeCacheRenderDelegate> errorHandlerContentOperation; // @synthesize errorHandlerContentOperation=_errorHandlerContentOperation;
@property(retain, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) __weak id <SPTSeedASessionService> seedASessionService; // @synthesize seedASessionService=_seedASessionService;
@property(readonly, nonatomic) __weak id <SPTHomeUIService> homeUIService; // @synthesize homeUIService=_homeUIService;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) __weak id <SPTHomeTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTHomeContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
- (void).cxx_destruct;
- (id)createRemoteViewModelLoaderForContentURL:(id)arg1 sourceIdentifier:(id)arg2 overrides:(id)arg3;
- (id)createCachedViewModelLoaderWithOverrides:(id)arg1;
- (id)initWithContentOperationFactory:(id)arg1 testManager:(id)arg2 hugsFactory:(id)arg3 homeUIService:(id)arg4 seedASessionService:(id)arg5;

@end

