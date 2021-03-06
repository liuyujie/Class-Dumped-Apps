//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGLinearGradientView, IGStoryBackgroundGradient, UIImageView;
@protocol IGStoryMediaAsset;

@interface IGStoryFakeMediaCompositionPreviewView : UIView
{
    IGLinearGradientView *_gradientBackground;
    UIImageView *_imageView;
    id <IGStoryMediaAsset> _asset;
    IGStoryBackgroundGradient *_backgroundGradient;
    struct IGRegion _mediaRegion;
}

@property(nonatomic) struct IGRegion mediaRegion; // @synthesize mediaRegion=_mediaRegion;
@property(retain, nonatomic) IGStoryBackgroundGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) id <IGStoryMediaAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

