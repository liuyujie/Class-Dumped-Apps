//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGeneratedIntentTarget.h>

@class IGCTAPresenterContext, IGFeedFocusCoordinator, IGFeedItemLogger, IGFeedNetworkSource, IGSavedMediaCollection, IGSessionTracker, IGUserSession, NSString, UIBarButtonItem;
@protocol IGContextualFeedLogger, IGContextualFeedService, IGContextualFeedViewControllerDelegate, IGFeedStatusViewDataSource;

@interface IGContextualFeedIntentTarget : FBGeneratedIntentTarget
{
    _Bool _showPullToRefresh;
    _Bool _showExploreContext;
    id <IGContextualFeedService> _contextualFeedService;
    id <IGContextualFeedLogger> _contextualFeedLogger;
    IGFeedItemLogger *_feedItemLogger;
    id <IGFeedStatusViewDataSource> _feedStatusViewDataSource;
    IGFeedNetworkSource *_feedNetworkSource;
    IGUserSession *_userSession;
    NSString *_title;
    NSString *_subtitle;
    NSString *_entityId;
    NSString *_productId;
    IGFeedFocusCoordinator *_focusCoordinator;
    long long _entryPoint;
    IGSavedMediaCollection *_savedMediaCollection;
    id <IGContextualFeedViewControllerDelegate> _delegate;
    CDUnknownBlockType _emptyStateButtonTapBlock;
    UIBarButtonItem *_rightBarButtonItem;
    IGCTAPresenterContext *_ctaPresenterContext;
    IGSessionTracker *_shoppingSessionTracker;
}

@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
@property(readonly, nonatomic) IGCTAPresenterContext *ctaPresenterContext; // @synthesize ctaPresenterContext=_ctaPresenterContext;
@property(readonly, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(readonly, nonatomic) CDUnknownBlockType emptyStateButtonTapBlock; // @synthesize emptyStateButtonTapBlock=_emptyStateButtonTapBlock;
@property(readonly, nonatomic) id <IGContextualFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGSavedMediaCollection *savedMediaCollection; // @synthesize savedMediaCollection=_savedMediaCollection;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) _Bool showExploreContext; // @synthesize showExploreContext=_showExploreContext;
@property(readonly, nonatomic) IGFeedFocusCoordinator *focusCoordinator; // @synthesize focusCoordinator=_focusCoordinator;
@property(readonly, nonatomic) _Bool showPullToRefresh; // @synthesize showPullToRefresh=_showPullToRefresh;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(readonly, nonatomic) id <IGFeedStatusViewDataSource> feedStatusViewDataSource; // @synthesize feedStatusViewDataSource=_feedStatusViewDataSource;
@property(readonly, nonatomic) IGFeedItemLogger *feedItemLogger; // @synthesize feedItemLogger=_feedItemLogger;
@property(readonly, nonatomic) id <IGContextualFeedLogger> contextualFeedLogger; // @synthesize contextualFeedLogger=_contextualFeedLogger;
@property(readonly, nonatomic) id <IGContextualFeedService> contextualFeedService; // @synthesize contextualFeedService=_contextualFeedService;
- (void).cxx_destruct;
- (id)initWithContextualFeedService:(id)arg1 contextualFeedLogger:(id)arg2 feedItemLogger:(id)arg3 feedStatusViewDataSource:(id)arg4 feedNetworkSource:(id)arg5 userSession:(id)arg6 title:(id)arg7 subtitle:(id)arg8 entityId:(id)arg9 productId:(id)arg10 showPullToRefresh:(_Bool)arg11 focusCoordinator:(id)arg12 showExploreContext:(_Bool)arg13 entryPoint:(long long)arg14 savedMediaCollection:(id)arg15 delegate:(id)arg16 emptyStateButtonTapBlock:(CDUnknownBlockType)arg17 rightBarButtonItem:(id)arg18 ctaPresenterContext:(id)arg19 shoppingSessionTracker:(id)arg20;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2 title:(id)arg3 subtitle:(id)arg4 entityId:(id)arg5 productId:(id)arg6 showPullToRefresh:(_Bool)arg7 focusCoordinator:(id)arg8 showExploreContext:(_Bool)arg9 entryPoint:(long long)arg10 savedMediaCollection:(id)arg11 feedItemLogger:(id)arg12 emptyStateButtonTapBlock:(CDUnknownBlockType)arg13 rightBarButtonItem:(id)arg14 ctaPresenterContext:(id)arg15;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2 title:(id)arg3 subtitle:(id)arg4 entityId:(id)arg5 productId:(id)arg6 showPullToRefresh:(_Bool)arg7 focusCoordinator:(id)arg8 showExploreContext:(_Bool)arg9 entryPoint:(long long)arg10 savedMediaCollection:(id)arg11 feedItemLogger:(id)arg12;
- (id)initWithContextualFeedService:(id)arg1 contextualFeedLogger:(id)arg2 feedItemLogger:(id)arg3 feedStatusViewDataSource:(id)arg4 userSession:(id)arg5 title:(id)arg6 subtitle:(id)arg7 entityId:(id)arg8 productId:(id)arg9 showPullToRefresh:(_Bool)arg10 focusCoordinator:(id)arg11 showExploreContext:(_Bool)arg12 entryPoint:(long long)arg13 savedMediaCollection:(id)arg14 shoppingSessionTracker:(id)arg15;

@end

