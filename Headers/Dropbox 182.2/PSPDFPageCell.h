//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, NSString, UIImage, UIImageView, UILabel, UIView;
@protocol PSPDFPageCellImageLoading, PSPDFPageCellImageRequestToken;

@interface PSPDFPageCell : UICollectionViewCell
{
    struct CGSize _lastSize;
    struct CGSize _cachedImageSize;
    unsigned long long _imageRequestIdentifier;
    struct {
        unsigned int needsUpdateImage:1;
        unsigned int insideUpdateImage:1;
        unsigned int insideLayoutSubviews:1;
    } _flags;
    _Bool _shadowEnabled;
    _Bool _pageLabelEnabled;
    _Bool _shouldSetErrorImageIfLoadingFails;
    UIView *_highlightView;
    UILabel *_pageLabel;
    unsigned long long _pageIndex;
    id <PSPDFPageCellImageLoading> _imageLoader;
    UIImageView *_imageView;
    CALayer *_shadowLayer;
    id <PSPDFPageCellImageRequestToken> _token;
    struct UIEdgeInsets _edgeInsets;
}

+ (struct UIEdgeInsets)defaultHighlightViewPadding;
@property(nonatomic) _Bool shouldSetErrorImageIfLoadingFails; // @synthesize shouldSetErrorImageIfLoadingFails=_shouldSetErrorImageIfLoadingFails;
@property(retain, nonatomic) id <PSPDFPageCellImageRequestToken> token; // @synthesize token=_token;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) id <PSPDFPageCellImageLoading> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic, getter=isPageLabelEnabled) _Bool pageLabelEnabled; // @synthesize pageLabelEnabled=_pageLabelEnabled;
@property(nonatomic, getter=isShadowEnabled) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *pageLabelString;
@property(readonly, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
- (void)updateMaskForShadowLayer:(id)arg1;
- (void)updateShadow;
- (void)updateHighlightView;
@property(readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
- (void)updateImageViewBackgroundColor;
- (void)updateImageFrame;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (_Bool)verifyImageRequestIdentifier:(unsigned long long)arg1 andSetImage:(id)arg2;
- (void)updateImage;
- (void)updateImageIfNeeded;
- (void)setNeedsUpdateImage;
- (void)invalidateRequestToken;
- (void)layoutSubviews;
- (_Bool)isSelectedOrHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateBorderColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentSizeDidChange;
- (void)prepareForReuse;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (id)pathShadowForView:(id)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)updatePageLabel;

@end

