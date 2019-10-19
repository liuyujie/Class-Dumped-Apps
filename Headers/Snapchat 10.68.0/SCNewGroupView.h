//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCShakeToReportDelegate-Protocol.h"

@class NSString, SCSendToScrollView, UICollectionView;

@interface SCNewGroupView : UIView <SCShakeToReportDelegate>
{
    double _scrollViewBottomOffset;
    double _scrollViewTopOffset;
    SCSendToScrollView *_scrollView;
    _Bool _hideScrollView;
    double _topSectionOffset;
    UICollectionView *_contentCollectionView;
    double _keyboardHeight;
    struct UIEdgeInsets _layoutInset;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) struct UIEdgeInsets layoutInset; // @synthesize layoutInset=_layoutInset;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (void)updateTopSectionOffset:(double)arg1;
- (void)hideScrollbar:(_Bool)arg1;
- (void)_updateFriendsTableIndexFrame;
- (void)_updateContentCollectionFrame;
- (void)layoutSubviews;
- (id)initWithIndexView:(id)arg1 topSectionOffset:(double)arg2 scrollbarBottomOffset:(double)arg3 backgroundColor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
