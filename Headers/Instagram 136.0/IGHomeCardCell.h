//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, IGGradientView, IGImageView, IGProfilePictureImageView, NSArray, NSString, UILabel;

@interface IGHomeCardCell : UICollectionViewCell
{
    UILabel *_usernameLabel;
    IGGradientView *_topGradient;
    CAGradientLayer *_backgroundLayer;
    IGImageView *_mediaImageView;
    NSArray *_backgroundColors;
    IGProfilePictureImageView *_profileImageView;
    struct CGSize _mediaAspectRatio;
}

@property(readonly, nonatomic) IGProfilePictureImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(retain, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(nonatomic) struct CGSize mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(readonly, nonatomic) IGImageView *mediaImageView; // @synthesize mediaImageView=_mediaImageView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username;
- (void)_updateImageViewContentMode;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

