//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UIColor, UIImage, UIImageView, UILabel;

@interface AWEGradientBackgroundLabelView : UIView
{
    UIColor *_startColor;
    UIColor *_endColor;
    NSString *_tagContentString;
    UIImage *_image;
    UIColor *_textColor;
    UILabel *_tagContentLabel;
    CAGradientLayer *_gradientLayer;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *tagContentLabel; // @synthesize tagContentLabel=_tagContentLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *tagContentString; // @synthesize tagContentString=_tagContentString;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)showTagView;
- (id)init;

@end

