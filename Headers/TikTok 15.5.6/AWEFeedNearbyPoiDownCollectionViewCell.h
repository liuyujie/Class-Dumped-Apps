//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEFeedNearbyCollectionCellProtocol-Protocol.h"

@class AWEMarkView, NSString, UIImageView, UILabel;

@interface AWEFeedNearbyPoiDownCollectionViewCell : UICollectionViewCell <AWEFeedNearbyCollectionCellProtocol>
{
    UIImageView *_coverImageView;
    UIImageView *_tagView;
    UILabel *_descriptionLabel;
    AWEMarkView *_poiButton;
    UIImageView *_userImageView;
    UILabel *_distanceLabel;
    UILabel *_userNameLabel;
    double _currentAlpha;
}

@property(nonatomic) double currentAlpha; // @synthesize currentAlpha=_currentAlpha;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) AWEMarkView *poiButton; // @synthesize poiButton=_poiButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateTagsWithAweme:(id)arg1;
- (void)updateWithAweme:(id)arg1;
- (id)addBottomGradientView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

