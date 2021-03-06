//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveUserPreviewReactions-Protocol.h"

@class HTSLiveUserFansclubPreferentialModel, HTSLiveUserPreviewFansMedalContainerView, HTSLiveUserPreviewStore, NSString;
@protocol HTSLiveViewHierarchyProvider;

@interface HTSLiveUserPreviewFansMedalSettingView : UIView <HTSLiveUserPreviewReactions>
{
    _Bool _landscapeMode;
    HTSLiveUserPreviewStore *_store;
    UIView *_whiteBoard;
    UIView *_grayBoard;
    UIView *_backgroundMask;
    HTSLiveUserPreviewFansMedalContainerView *_medalContainer;
    HTSLiveUserFansclubPreferentialModel *_currentPreferential;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
}

@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSLiveUserFansclubPreferentialModel *currentPreferential; // @synthesize currentPreferential=_currentPreferential;
@property(retain, nonatomic) HTSLiveUserPreviewFansMedalContainerView *medalContainer; // @synthesize medalContainer=_medalContainer;
@property(retain, nonatomic) UIView *backgroundMask; // @synthesize backgroundMask=_backgroundMask;
@property(retain, nonatomic) UIView *grayBoard; // @synthesize grayBoard=_grayBoard;
@property(retain, nonatomic) UIView *whiteBoard; // @synthesize whiteBoard=_whiteBoard;
@property(retain, nonatomic) HTSLiveUserPreviewStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool landscapeMode; // @synthesize landscapeMode=_landscapeMode;
- (void).cxx_destruct;
- (void)showUserPreview;
- (void)clickBackground:(id)arg1;
- (void)tapSaveButton;
- (void)renderUI;
- (void)dismiss:(id)arg1;
- (void)dismissWithAnimationDisable;
- (void)showWithAnimation;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 landscapeMode:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

