//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class GIMMe, NSString, YTIVerticalWatchCardListRenderer, YTQTMButton;

@interface YTVerticalCardListView : UIView <YTPageStyling>
{
    YTIVerticalWatchCardListRenderer *_renderer;
    GIMMe *_gimme;
    id <YTVerticalCardListViewDelegate><YTCardListViewDelegate> _delegate;
    UIView *_collectionView;
    YTQTMButton *_overflowButton;
}

@property(retain, nonatomic) YTQTMButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(retain, nonatomic) UIView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) YTIVerticalWatchCardListRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak id <YTVerticalCardListViewDelegate><YTCardListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)didTapOverflowButton:(id)arg1;
- (double)preferredCollectionViewHeight;
- (double)collectionViewHeight;
- (id)accessibilityElements;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)entry;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
