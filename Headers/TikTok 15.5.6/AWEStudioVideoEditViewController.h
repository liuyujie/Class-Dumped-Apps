//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ACCComponentController-Protocol.h"
#import "ACCViewModelContainerHolder-Protocol.h"
#import "AWEEditPageProtocol-Protocol.h"
#import "AWEMediaBigAnimationProtocol-Protocol.h"

@class ACCComponentManager, ACCContainerView, ACCEditViewControllerInputData, ACCEditViewModelFactory, ACCVideoEditComponentsFactory, ACCViewModelContainer, NSString;
@protocol ACCComponentBusProtocol;

@interface AWEStudioVideoEditViewController : UIViewController <AWEMediaBigAnimationProtocol, ACCViewModelContainerHolder, AWEEditPageProtocol, ACCComponentController>
{
    ACCEditViewControllerInputData *inputData;
    id <ACCComponentBusProtocol> _componentBus;
    ACCViewModelContainer *_modelContainer;
    ACCComponentManager *_componentManager;
    ACCVideoEditComponentsFactory *_componentFactory;
    ACCEditViewModelFactory *_viewModelFactory;
    ACCContainerView *_containerView;
}

@property(retain, nonatomic) ACCContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) ACCEditViewModelFactory *viewModelFactory; // @synthesize viewModelFactory=_viewModelFactory;
@property(retain, nonatomic) ACCVideoEditComponentsFactory *componentFactory; // @synthesize componentFactory=_componentFactory;
@property(retain, nonatomic) ACCComponentManager *componentManager; // @synthesize componentManager=_componentManager;
@property(retain, nonatomic) ACCViewModelContainer *modelContainer; // @synthesize modelContainer=_modelContainer;
@property(retain, nonatomic) id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)close;
- (void)prepareForClose;
- (id)viewModelContainer;
- (id)captionComponent;
- (id)activityContainerView;
- (id)transitionComponent;
- (id)editViewComponent;
- (id)playerComponent;
- (id)textStickerContainerComponent;
- (id)pollStickerContainerComponent;
- (id)rootComponent;
- (id)awesst_enterFrom;
- (struct CGRect)mediaBigMediaFrame;
- (id)mediaBigButtonsContainer;
- (id)mediaBigButtonsContainerSnap;
- (id)mediaBigMediaSnap;
- (CDUnknownBlockType)cancelBlock;
@property(retain, nonatomic) ACCEditViewControllerInputData *inputData; // @synthesize inputData;
- (id)captionManager;
- (id)aweplayer;
- (void)setCoverImage:(id)arg1;
- (id)sourceModel;
- (id)publishModel;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInputData:(id)arg1;
- (void)dealloc;
- (void)ACC_didReceiveMemoryWarning;
- (void)ACC_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)ACC_viewDidDisappear:(_Bool)arg1;
- (void)ACC_viewWillDisappear:(_Bool)arg1;
- (void)ACC_viewDidAppear:(_Bool)arg1;
- (void)ACC_viewWillAppear:(_Bool)arg1;
- (void)ACC_viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

