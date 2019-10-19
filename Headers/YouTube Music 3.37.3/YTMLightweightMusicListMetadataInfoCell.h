//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightCell.h"

@class MDCInkTouchController, NSMutableArray, QTMButton, YTFormattedStringLabel, YTIMusicListMetadataInfoRenderer;

@interface YTMLightweightMusicListMetadataInfoCell : YTMLightweightCell
{
    YTIMusicListMetadataInfoRenderer *_renderer;
    NSMutableArray *_iconLinkRenderers;
    YTFormattedStringLabel *_metadataLabel;
    NSMutableArray *_iconButtons;
    QTMButton *_fullViewButton;
    MDCInkTouchController *_inkTouchController;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)didTapFullViewButton:(id)arg1;
- (void)didTapButton:(id)arg1;
- (void)setupIcons;
- (void)prepareForReuse;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (double)preferredHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
