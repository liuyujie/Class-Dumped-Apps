//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ModalShimContainerDelegateProtocol-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIView;
@protocol ModalShimContainerViewProtocol;

@interface ModalShimViewController : UIViewController <ModalShimContainerDelegateProtocol>
{
    _Bool _explicitSourceRectPositioning;
    struct {
        float rectMaxYEdge;
        float rectMinYEdge;
        float rectMaxXEdge;
        float rectMinXEdge;
    } _positionPriority;
    _Bool _shouldFadeOut;
    UIView *_modalBackground;
    NSArray *_verticalConstraints;
    NSArray *_horizontalConstraints;
    NSLayoutConstraint *_containerHeightConstraint;
    NSLayoutConstraint *_containerWidthConstraint;
    UIViewController *_viewControllerForContent;
    UIView *_container;
    UIView *_sourceView;
    id <ModalShimContainerViewProtocol> _content;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_topConstraint;
    struct CGRect _containerRect;
    struct CGRect _sourceRect;
}

+ (id)modalShimViewControllerForContent:(id)arg1 sourceView:(id)arg2;
+ (id)modalShimViewControllerForContent:(id)arg1 withRect:(struct CGRect)arg2;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) id <ModalShimContainerViewProtocol> content; // @synthesize content=_content;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) struct CGRect containerRect; // @synthesize containerRect=_containerRect;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) __weak UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak UIViewController *viewControllerForContent; // @synthesize viewControllerForContent=_viewControllerForContent;
@property(nonatomic) __weak NSLayoutConstraint *containerWidthConstraint; // @synthesize containerWidthConstraint=_containerWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *containerHeightConstraint; // @synthesize containerHeightConstraint=_containerHeightConstraint;
@property(copy, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(copy, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(nonatomic) _Bool shouldFadeOut; // @synthesize shouldFadeOut=_shouldFadeOut;
@property(retain, nonatomic) UIView *modalBackground; // @synthesize modalBackground=_modalBackground;
- (void).cxx_destruct;
- (void)refreshContentSize;
- (void)dismiss;
- (void)close;
- (id)modalBackgroundView;
- (id)contentContainer;
- (id)viewForContent;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)handleShimTap:(id)arg1;
- (void)setConstraints;
- (void)setupView;
- (_Bool)accessibilityPerformEscape;
- (void)viewDidLoad;
- (struct CGRect)collisionSafeRect;
- (struct CGRect)collisionSafeRectforSourceRect;
- (struct CGRect)collisionSafeRectForSourceView;
- (id)edgePositionPriorityOrder;
- (float)positionPriorityForRectEdge:(unsigned int)arg1;
- (void)setPositionPriority:(float)arg1 forRectEdge:(unsigned int)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

