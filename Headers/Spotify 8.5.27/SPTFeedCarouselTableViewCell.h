//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, SPTFeedCollectionView, UIActivityIndicatorView, UILabel;

@interface SPTFeedCarouselTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    SPTFeedCollectionView *_collectionView;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTFeedCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupViews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
