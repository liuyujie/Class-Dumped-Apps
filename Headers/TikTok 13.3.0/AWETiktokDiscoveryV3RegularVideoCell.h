//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEDemaciaPlayerViewDelegate-Protocol.h"
#import "AWETiktokDiscoverV3ModelRenderable-Protocol.h"
#import "AWETiktokDiscoverV3VisiableObserver-Protocol.h"

@class AWEGradientView, AWETiktokDiscoverV3Model, AWETiktokDiscoverV3PlayerView, AWETiktokDiscoverV3TagLabel, NSString, UIImageView, UILabel, UIView;

@interface AWETiktokDiscoveryV3RegularVideoCell : UICollectionViewCell <AWEDemaciaPlayerViewDelegate, AWETiktokDiscoverV3ModelRenderable, AWETiktokDiscoverV3VisiableObserver>
{
    _Bool _isFirstVideoLoop;
    long long _section;
    AWETiktokDiscoverV3PlayerView *_playerView;
    UILabel *_titleLabel;
    AWETiktokDiscoverV3TagLabel *_tagLabel;
    AWEGradientView *_maskView;
    AWETiktokDiscoverV3Model *_model;
    double _eachPlayTime;
    UIView *_loadingView;
    UIImageView *_coverImageView;
}

@property(nonatomic) _Bool isFirstVideoLoop; // @synthesize isFirstVideoLoop=_isFirstVideoLoop;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double eachPlayTime; // @synthesize eachPlayTime=_eachPlayTime;
@property(retain, nonatomic) AWETiktokDiscoverV3Model *model; // @synthesize model=_model;
@property(retain, nonatomic) AWEGradientView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) AWETiktokDiscoverV3TagLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWETiktokDiscoverV3PlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)bottomGradientLayer;
- (id)convertAwemeModel:(id)arg1;
- (id)awe_maskToColorWithLoaded:(_Bool)arg1;
- (void)cellWillDisplay;
- (void)cellDidEndDisplay;
- (void)viewControllerDidDisappear;
- (void)viewControllerDidAppear;
- (id)generateBasicTrackParams;
- (void)playerWillLoopPlaying:(id)arg1;
- (void)player:(id)arg1 didChangePlaybackStateWithAction:(long long)arg2;
- (void)resetUIWithLoaded:(_Bool)arg1;
- (void)renderWithDiscoverModel:(id)arg1 imageLoadCompletion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
