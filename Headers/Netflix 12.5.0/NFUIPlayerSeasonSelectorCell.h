//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface NFUIPlayerSeasonSelectorCell : UICollectionViewCell
{
    _Bool _isFlipped;
    UILabel *_seasonTitle;
    UIView *_selectionIndicator;
    NSLayoutConstraint *_selectionIndicatorTrailing;
    NSLayoutConstraint *_selectionIndicatorLeading;
}

+ (double)seasonTitleFontSize;
@property(nonatomic) __weak NSLayoutConstraint *selectionIndicatorLeading; // @synthesize selectionIndicatorLeading=_selectionIndicatorLeading;
@property(nonatomic) __weak NSLayoutConstraint *selectionIndicatorTrailing; // @synthesize selectionIndicatorTrailing=_selectionIndicatorTrailing;
@property(nonatomic) __weak UIView *selectionIndicator; // @synthesize selectionIndicator=_selectionIndicator;
@property(nonatomic) _Bool isFlipped; // @synthesize isFlipped=_isFlipped;
@property(nonatomic) __weak UILabel *seasonTitle; // @synthesize seasonTitle=_seasonTitle;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)awakeFromNib;

@end
