//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAPopupActionMenuSupport-Protocol.h"

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface WAPaymentImageTableViewCell : UITableViewCell <WAPopupActionMenuSupport>
{
    NSArray *_customConstraints;
    UIView *_bottomSeparator;
    UIView *_labelContainer;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    _Bool _compressedImageSize;
    SEL _subtitleCustomCopySelector;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
    UIImageView *_logoImageView;
}

+ (double)sizeForImageSizeType:(unsigned long long)arg1;
+ (struct UIEdgeInsets)preferredSeparatorInsetForImageSize:(unsigned long long)arg1;
+ (double)preferredHeight;
@property(readonly, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)copySubtitleToPasteboard;
- (void)performAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)shouldShowPopupActionMenu;
- (void)setHighlightedPrimaryTextSubstring:(id)arg1;
- (void)updateCellWithTitleText:(id)arg1 subtitleText:(id)arg2 detailText:(id)arg3 subtitleCustomCopySelector:(SEL)arg4 image:(id)arg5 compressedImageSize:(_Bool)arg6;
- (void)updateCellWithTitleText:(id)arg1 subtitleText:(id)arg2 detailText:(id)arg3 subtitleCustomCopySelector:(SEL)arg4 image:(id)arg5;
@property(nonatomic) _Bool customBottomSeparatorVisible;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)reloadFonts;
- (void)fontSizeDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithPrimaryTitle:(id)arg1 subtitle:(id)arg2 detailText:(id)arg3 subtitleCustomCopySelector:(SEL)arg4 image:(id)arg5 reusableIdentifier:(id)arg6;
- (id)initWithReuseIdentifier:(id)arg1 showLogoImage:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
