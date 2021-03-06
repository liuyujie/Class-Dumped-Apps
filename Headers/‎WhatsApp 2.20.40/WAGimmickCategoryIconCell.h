//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView, UIView, WAActivityIndicatorView;

@interface WAGimmickCategoryIconCell : UICollectionViewCell
{
    _Bool _currentCategory;
    _Bool _emotionCategory;
    _Bool _shouldExpandCategory;
    _Bool _selectionIndicatorVisible;
    _Bool _seenIndicatorVisible;
    WAActivityIndicatorView *_activityIndicator;
    UIImageView *_imageView;
    UIView *_backgroundCircleView;
    UIImageView *_seenBadgeView;
}

@property(retain, nonatomic) UIImageView *seenBadgeView; // @synthesize seenBadgeView=_seenBadgeView;
@property(retain, nonatomic) UIView *backgroundCircleView; // @synthesize backgroundCircleView=_backgroundCircleView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isSeenIndicatorVisible) _Bool seenIndicatorVisible; // @synthesize seenIndicatorVisible=_seenIndicatorVisible;
@property(nonatomic, getter=isSelectionIndicatorVisible) _Bool selectionIndicatorVisible; // @synthesize selectionIndicatorVisible=_selectionIndicatorVisible;
@property(nonatomic) _Bool shouldExpandCategory; // @synthesize shouldExpandCategory=_shouldExpandCategory;
@property(nonatomic, getter=isEmotionCategory) _Bool emotionCategory; // @synthesize emotionCategory=_emotionCategory;
@property(nonatomic, getter=isCurrentCategory) _Bool currentCategory; // @synthesize currentCategory=_currentCategory;
@property(retain, nonatomic) WAActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (_Bool)isAccessibilityElement;
- (void)setImageViewTintColorIfNecessary;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

