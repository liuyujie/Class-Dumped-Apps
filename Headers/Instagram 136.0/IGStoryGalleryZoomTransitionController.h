//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <InstagramAppCoreFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIView, UIViewController;
@protocol IGStoryGalleryZoomTransitionViewController;

@interface IGStoryGalleryZoomTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    UIViewController<IGStoryGalleryZoomTransitionViewController> *_galleryViewController;
    UIViewController<IGStoryGalleryZoomTransitionViewController> *_editingViewController;
    CDUnknownBlockType _presentationSourceProvider;
    UIView *_dimmingView;
    UIView *_foregroundWrapperView;
    UIView *_mediaWrapperView;
    UIView *_presentationSourceSnapshotView;
    UIView *_foregroundMaskingView;
    UIView *_mediaMaskingView;
    double _pushbackScale;
}

@property(nonatomic) double pushbackScale; // @synthesize pushbackScale=_pushbackScale;
- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithGalleryViewController:(id)arg1 editingViewController:(id)arg2 presentationSourceProvider:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

