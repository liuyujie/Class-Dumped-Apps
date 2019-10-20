//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSLiveDiggAPI, HTSLiveDiggViewFactory, HTSLiveNativeAnimationStore, NSArray, NSMutableArray, NSTimer;
@protocol HTSLiveViewHierarchyProvider, IESLiveLanguageService, OS_dispatch_queue;

@interface HTSLiveDiggFragment : NSObject
{
    _Bool _isHideComponent;
    NSTimer *_diggTimer;
    unsigned long long _diggCount;
    NSMutableArray *_imageCache;
    HTSLiveDiggViewFactory *_diggViewFactory;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    long long _orientation;
    HTSLiveDiggAPI *_diggAPI;
    NSArray *_urlModels;
    NSObject<OS_dispatch_queue> *_workQueue;
    HTSLiveNativeAnimationStore *_store;
    NSMutableArray *_diggIndexQueue;
    id <IESLiveLanguageService> _languageService;
}

@property(nonatomic) _Bool isHideComponent; // @synthesize isHideComponent=_isHideComponent;
@property(retain, nonatomic) id <IESLiveLanguageService> languageService; // @synthesize languageService=_languageService;
@property(retain, nonatomic) NSMutableArray *diggIndexQueue; // @synthesize diggIndexQueue=_diggIndexQueue;
@property(retain, nonatomic) HTSLiveNativeAnimationStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *urlModels; // @synthesize urlModels=_urlModels;
@property(retain, nonatomic) HTSLiveDiggAPI *diggAPI; // @synthesize diggAPI=_diggAPI;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSLiveDiggViewFactory *diggViewFactory; // @synthesize diggViewFactory=_diggViewFactory;
@property(retain, nonatomic) NSMutableArray *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) unsigned long long diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) NSTimer *diggTimer; // @synthesize diggTimer=_diggTimer;
- (void).cxx_destruct;
- (_Bool)_enableDigg;
- (void)updateDiggPosition;
- (void)scheduleDigg;
- (void)loadImageWithComplete:(CDUnknownBlockType)arg1;
- (void)imageFromCacheWithComplete:(CDUnknownBlockType)arg1;
- (void)checkIfDigg;
- (void)showComponent;
- (void)hideComponent;
- (void)componentOrientationChanged:(long long)arg1;
- (void)showDigg;
- (void)addOwnDiggMessage;
- (void)addDiggMessage:(id)arg1;
- (void)loadDiggImageFromRemote;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end
