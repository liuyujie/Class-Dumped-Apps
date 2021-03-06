//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTLightweightCollectionViewControllerDelegate-Protocol.h"
#import "YTLightweightScrollable-Protocol.h"
#import "YTLightweightScrollableDelegate-Protocol.h"
#import "YTMSearchSuggestionsResponseProtocol-Protocol.h"
#import "YTResponseViewController-Protocol.h"

@class GIMMe, NSIndexPath, NSMutableSet, NSString, UIScrollView, UITapGestureRecognizer, YTLightweightCollectionViewController;
@protocol YTInnerTubeUIService, YTLightweightScrollableDelegate, YTResponder;

@interface YTMLightweightSearchSuggestionsResponseViewController : UIViewController <YTLightweightScrollableDelegate, YTLightweightScrollable, YTResponseViewController, YTMSearchSuggestionsResponseProtocol, YTLightweightCollectionViewControllerDelegate>
{
    _Bool _modelLoaded;
    YTLightweightCollectionViewController *_contentViewController;
    UITapGestureRecognizer *_tapRecognizer;
    NSMutableSet *_displayedIndexPaths;
    NSIndexPath *_selectedIndexPath;
    id <YTInnerTubeUIService> _service;
    _Bool _scrollableAllowsRefresh;
    id <YTResponder> _parentResponder;
    id <YTLightweightScrollableDelegate> _scrollableDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool scrollableAllowsRefresh; // @synthesize scrollableAllowsRefresh=_scrollableAllowsRefresh;
@property(nonatomic) __weak id <YTLightweightScrollableDelegate> scrollableDelegate; // @synthesize scrollableDelegate=_scrollableDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)suggestionInfoFromRenderer:(id)arg1 rowIndex:(unsigned long long)arg2;
- (void)setContentViewController:(id)arg1;
- (void)didTapBackground:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)scrollableDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)resetDisplayedInfo;
- (id)displayedSuggestionInfoList;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (unsigned long long)displayedSuggestionsCount;
@property(readonly, nonatomic) UIScrollView *scrollableView;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end

