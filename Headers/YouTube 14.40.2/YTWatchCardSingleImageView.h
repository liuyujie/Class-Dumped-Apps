//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTBaseWatchCardCallToActionView.h"

@class YTIWatchCardSingleImageRenderer, YTImageView;

@interface YTWatchCardSingleImageView : YTBaseWatchCardCallToActionView
{
    YTImageView *_thumbnailView;
    YTIWatchCardSingleImageRenderer *_renderer;
}

+ (double)preferredHeightForRenderer:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) YTIWatchCardSingleImageRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)didPressActionButton;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithParentResponder:(id)arg1;

@end
