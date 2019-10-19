//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class GIMMe, NSString, UIGestureRecognizer, UIImageView, YTColorPalette, YTFormattedStringLabel, YTIEndscreenElementRenderer, YTImageView, YTQTMButton;

@interface YTEndscreenElementHoverCardView : UIView <YTThumbnailMapping, YTPageStyling, YTPageStyleProvider>
{
    UIView *_metadataBackgroundView;
    YTImageView *_imageView;
    YTFormattedStringLabel *_titleTextLabel;
    YTFormattedStringLabel *_descriptionTextLabel;
    YTFormattedStringLabel *_additionalDescriptionTextLabel;
    YTFormattedStringLabel *_priceLabel;
    YTFormattedStringLabel *_additionalFeesTextLabel;
    UIView *_backgroundView;
    YTQTMButton *_callToActionButton;
    YTQTMButton *_closeButton;
    UIImageView *_separator;
    YTColorPalette *_colorPalette;
    UIGestureRecognizer *_tapGestureRecognizer;
    UIGestureRecognizer *_tapCallToActionButtonGestureRecognizer;
    GIMMe *_gimme;
    YTIEndscreenElementRenderer *_endscreenElementRenderer;
    UIView *_callToActionRenderedButton;
}

@property(readonly, nonatomic) UIView *callToActionRenderedButton; // @synthesize callToActionRenderedButton=_callToActionRenderedButton;
@property(retain, nonatomic) YTIEndscreenElementRenderer *endscreenElementRenderer; // @synthesize endscreenElementRenderer=_endscreenElementRenderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)separatorForCurrentPageStyle;
- (void)updateVisibilityForEndscreenElementRendererStyle:(int)arg1;
- (void)hideOptionalElements;
- (void)updateCardWithStyle:(int)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (id)thumbnailMappings;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setVisible:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)removeCancelTargets;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)removeEndpointTargets;
- (void)removeCallToActionEndpointRendererTarget;
- (void)setEndpointTarget:(id)arg1 action:(SEL)arg2;
- (void)setCallToActionEndpointRendererTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
