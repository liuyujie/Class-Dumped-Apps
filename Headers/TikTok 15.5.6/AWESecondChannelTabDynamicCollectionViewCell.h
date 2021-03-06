//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEAwemeModel, AWEGradientView, AWEMarkView, UIImageView, UILabel;

@interface AWESecondChannelTabDynamicCollectionViewCell : UICollectionViewCell
{
    UIImageView *_coverImageView;
    UIImageView *_likeImageView;
    UILabel *_likeCountLabel;
    UIImageView *_avatarImageView;
    UILabel *_descriptionLabel;
    AWEMarkView *_poiColorfulButton;
    UIImageView *_mixVideoIconView;
    AWEAwemeModel *_model;
    AWEGradientView *_gradientView;
}

+ (double)coverImageRatioForAweme:(id)arg1;
+ (double)descriptionToBottom;
+ (double)descriptionToTop:(id)arg1;
+ (_Bool)enableMixVideo:(id)arg1;
+ (id)appendMixVideoTagIfNeededWithAweme:(id)arg1 attributedString:(id)arg2 fontSize:(double)arg3;
+ (double)cellHeightForModel:(id)arg1 withWidth:(double)arg2;
+ (id)cellIdentifier;
@property(retain, nonatomic) AWEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *mixVideoIconView; // @synthesize mixVideoIconView=_mixVideoIconView;
@property(retain, nonatomic) AWEMarkView *poiColorfulButton; // @synthesize poiColorfulButton=_poiColorfulButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)configureUI;
- (void)updateWithAweme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

