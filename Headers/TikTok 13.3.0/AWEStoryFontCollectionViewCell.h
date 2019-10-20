//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEStoryFontModel, UIImageView, UILabel;

@interface AWEStoryFontCollectionViewCell : UICollectionViewCell
{
    AWEStoryFontModel *_selectFont;
    UILabel *_titleLabel;
    UIImageView *_downloadImgView;
    UIImageView *_loadingImgView;
}

@property(retain, nonatomic) UIImageView *loadingImgView; // @synthesize loadingImgView=_loadingImgView;
@property(retain, nonatomic) UIImageView *downloadImgView; // @synthesize downloadImgView=_downloadImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEStoryFontModel *selectFont; // @synthesize selectFont=_selectFont;
- (void).cxx_destruct;
- (void)configSelect:(_Bool)arg1;
- (id)createRotationAnimation;
- (void)refreshFont;
- (void)stopDownloadAnimationWithSuccess:(_Bool)arg1;
- (void)startDownloadAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
