//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSMutableArray, NSString, UIView, YTBaseWatchCardCallToActionView, YTWatchCardHeaderView, YTWatchCardListHeaderView, YTWatchCardRelatedView;
@protocol YTResponder, YTWatchCardEntry;

@interface YTWatchCardCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTPageStyling, YTResponder, YTThumbnailMapping>
{
    id <YTWatchCardEntry> _renderer;
    UIView *_backgroundView;
    YTWatchCardHeaderView *_headerView;
    YTBaseWatchCardCallToActionView *_callToActionView;
    YTWatchCardListHeaderView *_expandCollapseView;
    NSMutableArray *_listViews;
    YTWatchCardRelatedView *_relatedView;
    id _expandCollapseTapTarget;
    SEL _expandCollapseSelector;
    id _menuTarget;
    SEL _menuSelector;
    _Bool _expanded;
    id <YTResponder> _parentResponder;
}

+ (_Bool)hasWideLayoutForEntry:(id)arg1 width:(double)arg2;
+ (struct CGSize)cellSizeForEntry:(id)arg1 expanded:(_Bool)arg2 size:(struct CGSize)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)expandCollapseView;
- (_Bool)hasWideLayout;
- (void)setExpandedViewsHidden:(_Bool)arg1;
- (id)thumbnailMappings;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)removeMenuTarget;
- (void)setMenuTarget:(id)arg1 action:(SEL)arg2;
- (void)removeExpandCollapseTapTarget;
- (void)setExpandCollapseTapTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

