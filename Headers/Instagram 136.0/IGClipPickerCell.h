//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CALayer, UIImageView, UILabel;

@interface IGClipPickerCell : UICollectionViewCell
{
    UIImageView *_clipImageView;
    CAGradientLayer *_gradientLayer;
    UILabel *_clipDurationLabel;
    CALayer *_shadowLayer;
}

@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UILabel *clipDurationLabel; // @synthesize clipDurationLabel=_clipDurationLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *clipImageView; // @synthesize clipImageView=_clipImageView;
- (void).cxx_destruct;
- (id)LX_snapshotView;
- (void)setHighlighted:(_Bool)arg1;
- (void)setClipDurationText:(id)arg1;
- (void)setClipImage:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

