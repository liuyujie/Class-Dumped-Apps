//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1Autoplayable-Protocol.h>
#import <T1Twitter/T1UnifiedCardSwipeableCollectionViewCellEventDelegate-Protocol.h>
#import <T1Twitter/T1UnifiedCardVideoCarouselObserver-Protocol.h>

@class NSNumber, NSString, T1AdFormatsFeatures, TAVUIAutoplayDisablingFilter, TFNTwitterAccount, TFNTwitterUnifiedCardSwipeableMediaComponentModel, TFSTwitterScribeContext, TIPImagePipeline, UIView;
@protocol T1UnifiedCardCarouselViewControllerDelegate;

@interface T1UnifiedCardCarouselViewController : TFNItemsDataViewController <T1Autoplayable, T1UnifiedCardVideoCarouselObserver, T1UnifiedCardSwipeableCollectionViewCellEventDelegate>
{
    _Bool _playbackDesired;
    double _mediaWidth;
    TFNTwitterAccount *_account;
    TFNTwitterUnifiedCardSwipeableMediaComponentModel *_component;
    TIPImagePipeline *_imagePipeline;
    unsigned long long _previousPageIndex;
    TFSTwitterScribeContext *_scribeContext;
    TAVUIAutoplayDisablingFilter *_autoplayDeactivationPolicy;
    unsigned long long _pageIndexBeforeRotation;
    T1AdFormatsFeatures *_featureSwitches;
    id <T1UnifiedCardCarouselViewControllerDelegate> _delegate;
    NSNumber *_mediaLeadingInset;
}

+ (Class)collectionViewClass;
@property(readonly, nonatomic) NSNumber *mediaLeadingInset; // @synthesize mediaLeadingInset=_mediaLeadingInset;
@property(nonatomic) __weak id <T1UnifiedCardCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1AdFormatsFeatures *featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(nonatomic) unsigned long long pageIndexBeforeRotation; // @synthesize pageIndexBeforeRotation=_pageIndexBeforeRotation;
@property(retain, nonatomic) TAVUIAutoplayDisablingFilter *autoplayDeactivationPolicy; // @synthesize autoplayDeactivationPolicy=_autoplayDeactivationPolicy;
@property(nonatomic) _Bool playbackDesired; // @synthesize playbackDesired=_playbackDesired;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) unsigned long long previousPageIndex; // @synthesize previousPageIndex=_previousPageIndex;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) TFNTwitterUnifiedCardSwipeableMediaComponentModel *component; // @synthesize component=_component;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) double mediaWidth; // @synthesize mediaWidth=_mediaWidth;
- (void).cxx_destruct;
- (void)_t1_animateAdvanceToNextCellWithPageIndex:(unsigned long long)arg1;
- (void)videoDidPlayToEnd;
- (id)didHapticTouchMediaOnCell:(id)arg1;
- (void)didLongPressMediaOnCell:(id)arg1;
- (void)didTapMediaOnCell:(id)arg1;
@property(readonly, nonatomic) UIView *autoplayableView;
- (void)willResignAsActiveAutoplayableWithManager:(id)arg1;
- (void)didBecomeActiveAutoplayableWithManager:(id)arg1;
- (struct CGRect)autoplayableFrameIn:(id)arg1;
@property(nonatomic) _Bool shouldAutoplay;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (double)_t1_fullBleedXOffsetForIndex:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) unsigned long long currentPageIndex;
- (void)_t1_setUpAdapter;
- (void)_t1_setupCollectionView;
- (id)_t1_layoutForCurrentBoundsWithLeadingInset:(double)arg1 trailingInset:(double)arg2;
- (void)_t1_updateCollectionViewLayout;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSwipeableComponent:(id)arg1 imagePipeline:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 delegate:(id)arg5 mediaLeadingInset:(id)arg6;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

