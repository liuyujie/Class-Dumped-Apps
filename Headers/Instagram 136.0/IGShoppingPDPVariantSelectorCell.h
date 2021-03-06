//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGListBindable-Protocol.h>

@class FBShimmeringView, IGShoppingPDPVariantSelectorCellViewModel, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface IGShoppingPDPVariantSelectorCell : UICollectionViewCell <IGListBindable>
{
    UIView *_topSeparator;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_chevronView;
    UIActivityIndicatorView *_activityIndicator;
    FBShimmeringView *_shimmerView;
    IGShoppingPDPVariantSelectorCellViewModel *_viewModel;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)bindViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

