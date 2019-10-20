//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSEventContext, HTSLiveNativeAnimationQueue, HTSLiveUserEnterConfiguration, IESLiveComponentContext, IESLiveECommerceUserEnterNode, IESLiveUserEnterViewFactory, LiveRoomModel, RACDisposable, UIView;
@protocol HTSLiveDetailRouter, HTSLiveUserEnterViewProtocol, HTSLiveViewHierarchyProvider, IESLiveEnvironment, IESLiveSettings, IESLiveTracker, IESLiveWebImageService;

@interface HTSLiveUserEnterFragment : NSObject
{
    _Bool _isAnimating;
    _Bool _isHideComponent;
    LiveRoomModel *_roomModel;
    HTSLiveNativeAnimationQueue *_enterNodeQueue;
    HTSLiveNativeAnimationQueue *_hightPriorityEnterNodeQueue;
    HTSLiveUserEnterConfiguration *_configuration;
    UIView<HTSLiveUserEnterViewProtocol> *_userEnterView;
    RACDisposable *_disposable;
    IESLiveUserEnterViewFactory *_viewFactory;
    long long _orientation;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveSettings> _liveSettings;
    id <IESLiveSettings> _settings;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveEnvironment> _apptarget;
    id <IESLiveWebImageService> _imageService;
    id <IESLiveTracker> _tracker;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    IESLiveECommerceUserEnterNode *_liveECommerceUserEnterNode;
}

@property(retain, nonatomic) IESLiveECommerceUserEnterNode *liveECommerceUserEnterNode; // @synthesize liveECommerceUserEnterNode=_liveECommerceUserEnterNode;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveWebImageService> imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) id <IESLiveEnvironment> apptarget; // @synthesize apptarget=_apptarget;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) _Bool isHideComponent; // @synthesize isHideComponent=_isHideComponent;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) IESLiveUserEnterViewFactory *viewFactory; // @synthesize viewFactory=_viewFactory;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIView<HTSLiveUserEnterViewProtocol> *userEnterView; // @synthesize userEnterView=_userEnterView;
@property(retain, nonatomic) HTSLiveUserEnterConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HTSLiveNativeAnimationQueue *hightPriorityEnterNodeQueue; // @synthesize hightPriorityEnterNodeQueue=_hightPriorityEnterNodeQueue;
@property(retain, nonatomic) HTSLiveNativeAnimationQueue *enterNodeQueue; // @synthesize enterNodeQueue=_enterNodeQueue;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (_Bool)isValidLiveECommMessage:(id)arg1;
- (_Bool)enableECommerceUserEnter;
- (_Bool)enableWebpUserEnter;
- (id)popEnterNodeQueue;
- (void)pushECommerceUserEnterView:(id)arg1 enterNode:(id)arg2;
- (void)pushUserEnterView:(id)arg1 node:(id)arg2;
- (void)showUserPreView:(id)arg1 trackerLabel:(id)arg2;
- (void)showComponent;
- (void)hideComponent;
- (void)resetUserEnterFrame;
- (void)setConfigurationOriginY:(double)arg1;
- (void)checkUserEnterNodeQueue;
- (void)addECommerceUserEnterNodeWithMessage:(id)arg1;
- (void)addUserEnterNodeWith:(id)arg1;
- (_Bool)isMediaRoom;
- (_Bool)isScreenShotRoom;
- (_Bool)isGameRoom;
- (_Bool)isGameMediaRoom;
- (void)componentOrientationChanged:(long long)arg1;
- (void)bindConfiguration;
- (id)initWithRoomModel:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
- (void)dealloc;

@end
