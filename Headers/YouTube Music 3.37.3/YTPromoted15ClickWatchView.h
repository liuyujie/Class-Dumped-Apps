//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "YTPromotedNativeAdView-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIButton, UIScrollView, YTBadge, YTButton, YTFormattedStringLabel, YTIPromoted15ClickOverlayContent, YTIPromoted15ClickTextContent, YTIPromoted15ClickTextCtdContent, YTIPromotedNativeTextContent, YTIPromotedNativeTextCtdContent, YTIPromotedSparklesTextCtdWatch15ClickRenderer, YTIPromotedSparklesTextProductWatchRenderer, YTIPromotedSparklesTextWatch15ClickRenderer, YTImageView, YTQTMButton, YTRatingView;

@interface YTPromoted15ClickWatchView : UIView <UIScrollViewDelegate, YTPromotedNativeAdView>
{
    YTIPromotedSparklesTextWatch15ClickRenderer *_textRenderer;
    YTIPromotedSparklesTextCtdWatch15ClickRenderer *_textCtdRenderer;
    YTIPromotedSparklesTextProductWatchRenderer *_textProductRenderer;
    YTIPromotedNativeTextContent *_textContent;
    YTIPromoted15ClickTextContent *_extraTextContent;
    YTIPromotedNativeTextCtdContent *_textCtdContent;
    YTIPromoted15ClickTextCtdContent *_extraTextCtdContent;
    YTIPromoted15ClickOverlayContent *_overlayContent;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_descriptionLabel;
    YTFormattedStringLabel *_ratingLabel;
    YTRatingView *_ratingView;
    YTFormattedStringLabel *_infoLabel;
    YTFormattedStringLabel *_priceLabel;
    YTFormattedStringLabel *_productLabel;
    YTButton *_baseCtaButton;
    UIButton *_activeCtaButton;
    UIButton *_icon;
    YTBadge *_adBadge;
    YTBadge *_overlayBadge;
    UIScrollView *_thumbnailScrollView;
    UIView *_thumbnailOverlayView;
    UIView *_thumbnailOverlayCircle;
    YTQTMButton *_thumbnailOverlayIcon;
    YTFormattedStringLabel *_thumbnailOverlayLabel;
    YTFormattedStringLabel *_thumbnailOverlaySecondaryLabel;
    struct CGRect _clickableArea;
    NSMutableArray *_views;
    _Bool _hasSquareThumbnail;
    NSMutableDictionary *_clickLocationCodes;
    NSMutableDictionary *_baseClickBehaviors;
    NSMutableDictionary *_activeClickBehaviors;
    _Bool _active;
    YTImageView *_thumbnailView;
    YTButton *_ctaButton;
    YTImageView *_secondThumbnailView;
    NSString *_accessibilityIdentifier;
    NSString *_accessibilityLabel;
}

+ (long long)linesForCollapsedTitle;
+ (double)thumbnailToContentPaddingInsideRelated;
+ (double)thumbnailHeight;
+ (double)thumbnailWidth;
+ (double)additionalTitlePadding;
+ (double)availableWidthForContentWithMaxWidth:(double)arg1;
+ (double)cellHeightWithLabels:(id)arg1;
+ (struct CGSize)viewSizeForEntry:(id)arg1 size:(struct CGSize)arg2 active:(_Bool)arg3;
+ (struct CGSize)viewSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) YTImageView *secondThumbnailView; // @synthesize secondThumbnailView=_secondThumbnailView;
@property(retain, nonatomic) YTButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) YTImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)addIcon:(id)arg1 size:(double)arg2;
- (void)removeIcon;
- (void)addOverlayBadge:(id)arg1;
- (void)removeOverlayBadge;
- (void)configureClickableArea;
- (id)clickLocationFromView:(id)arg1;
- (id)thumbnailOverlayView;
- (void)setThumbnailZoomWithActive:(_Bool)arg1;
- (void)sizeSubviewsWithSize:(struct CGSize)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)requestedViewPadding;
- (int)codeForClickLocation:(struct CGPoint)arg1;
- (int)behaviorForClickLocation:(struct CGPoint)arg1;
- (id)indexForClickLocation:(struct CGPoint)arg1;
- (void)setTextCtdExtraContent:(id)arg1;
- (void)setTextExtraContent:(id)arg1;
- (void)setTextCtdContent:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)setOverlayContent:(id)arg1;
- (void)setClickLocationTargets:(id)arg1;
- (void)setOnePointFiveClickLocationTargets:(id)arg1;
- (void)setOnePointFiveClickContent:(id)arg1;
- (void)setTextProductRenderer:(id)arg1;
- (void)setTextCtdRenderer:(id)arg1;
- (void)setTextRenderer:(id)arg1;
- (void)setPromotedRenderer:(id)arg1;
- (void)clearRenderers;
- (id)secondThumbnail;
- (id)thumbnail;
- (void)prepareForReuse;
- (void)setVisibilityForLateAnimationWithActive:(_Bool)arg1;
- (void)setVisibilityForEarlyAnimationWithActive:(_Bool)arg1;
- (void)alignThumbnailOverlayContent;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
