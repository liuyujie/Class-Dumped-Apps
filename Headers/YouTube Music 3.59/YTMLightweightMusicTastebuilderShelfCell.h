//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightCell.h"

#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class MDCButton, NSString, YTFormattedStringLabel, YTIMusicTastebuilderShelfRenderer, YTImageView, YTMBevelView;

@interface YTMLightweightMusicTastebuilderShelfCell : YTMLightweightCell <YTReusableView, YTThumbnailMapping>
{
    YTIMusicTastebuilderShelfRenderer *_renderer;
    YTFormattedStringLabel *_primaryTextLabel;
    YTFormattedStringLabel *_secondaryTextLabel;
    MDCButton *_button;
    YTImageView *_imageView;
    YTMBevelView *_topSeparatorView;
}

+ (id)secondaryTextLabelFont;
+ (id)primaryTextLabelFont;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)didTapButton:(id)arg1;
- (id)thumbnailMappings;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

