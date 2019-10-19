//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventListener-Protocol.h"
#import "SCOperaLayerView-Protocol.h"
#import "SCOperaWebAppLoadingViewDelegate-Protocol.h"
#import "SCSecretFeatureCheckerListener-Protocol.h"

@class NSString, NSURL, SCEventListenerAnnouncer, SCOperaWebAppInteractionView, SCOperaWebAppLoadingScreenConfig, SCOperaWebAppLoadingView, SCSecretFeatureChecker, WKWebView;
@protocol SCOperaWebAppLayerViewDelegate;

@interface SCOperaWebAppLayerView : UIView <SCEventListener, SCOperaWebAppLoadingViewDelegate, SCSecretFeatureCheckerListener, SCOperaLayerView>
{
    SCOperaWebAppLoadingView *_loadingView;
    _Bool _loadingViewPassedSkippableDisplayTime;
    _Bool _loadingViewTappedToSkip;
    unsigned long long _playerState;
    struct UIEdgeInsets _contentInsets;
    NSURL *_url;
    _Bool _didStartLoading;
    _Bool _didFinishLoading;
    UIView *_presenceBar;
    SCEventListenerAnnouncer *_dataUpdateAnnouncer;
    SCOperaWebAppLoadingScreenConfig *_loadingScreenConfig;
    _Bool _enableVideoLoadingView;
    double _loadingStartTime;
    SCSecretFeatureChecker *_secretFeatureChecker;
    long long _secretFeatureMode;
    _Bool _gameAudioDisabled;
    UIView *_containerView;
    SCOperaWebAppInteractionView *_interactionView;
    UIView *_conversationView;
    WKWebView *_webView;
    id <SCOperaWebAppLayerViewDelegate> _delegate;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <SCOperaWebAppLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *conversationView; // @synthesize conversationView=_conversationView;
@property(retain, nonatomic) SCOperaWebAppInteractionView *interactionView; // @synthesize interactionView=_interactionView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)_startLoadingIfNeeded;
- (void)secretFeatureChecker:(id)arg1 didCheckSecretFeatureMode:(long long)arg2;
- (void)operaWebAppLoadingViewDidLoadImages:(id)arg1;
- (void)operaWebAppLoadingViewDidTap:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_disableUnwantedGestureRecognizers;
- (void)_updateLoadingView;
- (id)_loggingParams;
- (void)_fadeOutLoadingView;
- (_Bool)_shouldShowLoadingProgressBar;
- (_Bool)_shouldHideLoadingView;
- (void)_updateProgress;
- (void)stopLoading;
- (void)reload;
- (void)_layoutConversationView;
- (void)_layoutInteractionView;
- (void)_layoutPresenceView;
- (void)layoutSubviews;
- (void)_updatePresenceBarViewIfNecessary:(id)arg1;
- (void)updateWithLayer:(id)arg1;
- (void)setupViewForLayer:(id)arg1;
- (void)_setupLoadingView;
- (void)_setupWebView;
- (void)_setupContainerView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
