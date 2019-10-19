//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class SCStickerVenuePickerViewController, SCVenueInfoSticker, UIImageView, UIView;
@protocol SCStickerVenuePickerDelegate;

@interface SCVenueStickerPickerReusableView : UICollectionReusableView
{
    id <SCStickerVenuePickerDelegate> _delegate;
    SCVenueInfoSticker *_venuesInfo;
    UIView *_windowView;
    UIView *_contentView;
    UIImageView *_backgroundImageView;
    UIImageView *_arrowImageView;
    SCStickerVenuePickerViewController *_pickerVC;
    struct CGRect _sourceRect;
    struct CGRect _finalFrame;
}

+ (id)preferredInitialAttributesForAppearingWithAttributes:(id)arg1;
+ (double)preferredHeight;
+ (id)reuseIdentifier;
@property(readonly, nonatomic) struct CGRect finalFrame; // @synthesize finalFrame=_finalFrame;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) SCStickerVenuePickerViewController *pickerVC; // @synthesize pickerVC=_pickerVC;
@property(readonly, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *windowView; // @synthesize windowView=_windowView;
@property(retain, nonatomic) SCVenueInfoSticker *venuesInfo; // @synthesize venuesInfo=_venuesInfo;
@property(nonatomic) __weak id <SCStickerVenuePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_layoutPickerView;
- (void)_layoutContentView;
- (void)_layoutWindowView;
- (void)_layoutBackgroundImage;
- (void)_layoutArrow;
- (void)layoutSubviews;
- (void)updateWithVenuesInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
