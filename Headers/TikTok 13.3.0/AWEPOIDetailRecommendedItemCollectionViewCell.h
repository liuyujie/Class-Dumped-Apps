//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface AWEPOIDetailRecommendedItemCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_tagBg;
    UILabel *_tagLabel;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIImageView *tagBg; // @synthesize tagBg=_tagBg;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setTag:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setImageURLs:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
