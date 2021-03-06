//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGPhotoEditorTabController.h>

#import <TelegramUI/TGPhotoEditorCollectionViewToolsDataSource-Protocol.h>

@class NSArray, NSString, NSValue, PGPhotoEditor, TGPhotoEditorCollectionView, TGPhotoEditorHUDView, TGPhotoEditorItemController, TGPhotoEditorPreviewView, TGPhotoToolsWrapperView, UIView;
@protocol TGPhotoEditorToolView;

@interface TGPhotoToolsController : TGPhotoEditorTabController <TGPhotoEditorCollectionViewToolsDataSource>
{
    NSValue *_contentOffsetAfterRotation;
    _Bool _appeared;
    double _cellWidth;
    NSArray *_allTools;
    NSArray *_simpleTools;
    TGPhotoToolsWrapperView *_wrapperView;
    UIView *_portraitToolsWrapperView;
    UIView *_landscapeToolsWrapperView;
    UIView *_portraitWrapperBackgroundView;
    UIView *_landscapeWrapperBackgroundView;
    TGPhotoEditorCollectionView *_portraitCollectionView;
    TGPhotoEditorCollectionView *_landscapeCollectionView;
    TGPhotoEditorHUDView *_hudView;
    CDUnknownBlockType _changeBlock;
    CDUnknownBlockType _interactionBegan;
    CDUnknownBlockType _interactionEnded;
    _Bool _preview;
    unsigned long long _currentTab;
    UIView<TGPhotoEditorToolView> *_toolAreaView;
    UIView<TGPhotoEditorToolView> *_portraitToolControlView;
    UIView<TGPhotoEditorToolView> *_landscapeToolControlView;
    PGPhotoEditor *_photoEditor;
    TGPhotoEditorPreviewView *_previewView;
    TGPhotoEditorItemController *_editorItemController;
}

+ (struct CGRect)photoContainerFrameForParentViewFrame:(struct CGRect)arg1 toolbarLandscapeSize:(double)arg2 orientation:(long long)arg3 panelSize:(double)arg4 hasOnScreenNavigation:(_Bool)arg5;
@property(nonatomic) __weak TGPhotoEditorItemController *editorItemController; // @synthesize editorItemController=_editorItemController;
@property(nonatomic) __weak TGPhotoEditorPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak PGPhotoEditor *photoEditor; // @synthesize photoEditor=_photoEditor;
- (void).cxx_destruct;
- (unsigned long long)highlightedTabs;
- (unsigned long long)activeTab;
- (void)handleTabAction:(unsigned long long)arg1;
- (id)toolForTab:(unsigned long long)arg1;
- (unsigned long long)availableTabs;
- (void)updateLayout:(long long)arg1;
- (void)updatePreviewView;
- (void)setPreview:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateToolViews;
- (struct CGRect)_targetFrameForTransitionInFromFrame:(struct CGRect)arg1;
- (struct CGRect)transitionOutSourceFrameForReferenceFrame:(struct CGRect)arg1 orientation:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_applyPreparedContentOffset;
- (void)_prepareCollectionViewsForTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)updateValues;
- (CDUnknownBlockType)interactionEndedForCollectionView:(id)arg1;
- (CDUnknownBlockType)changeBlockForCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 toolAtIndex:(long long)arg2;
- (long long)numberOfToolsInCollectionView:(id)arg1;
- (void)setActiveTool:(id)arg1;
- (id)currentResultRepresentation;
- (id)snapshotView;
- (id)transitionOutReferenceView;
- (struct CGRect)transitionOutReferenceFrame;
- (void)prepareForCustomTransitionOut;
- (void)_finishedTransitionInWithView:(id)arg1;
- (void)_animatePreviewViewTransitionOutToFrame:(struct CGRect)arg1 saving:(_Bool)arg2 parentView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionOutSwitching:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionIn;
- (void)showHUDForTool:(id)arg1;
- (void)setPanelHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isDismissAllowed;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithContext:(id)arg1 photoEditor:(id)arg2 previewView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

