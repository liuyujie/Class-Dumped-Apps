//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface FVRProfileViewCell : UITableViewCell
{
    UIView *_seperatorView;
    UILabel *_sectionName;
    UIImageView *_arrowRightImageView;
    UIView *_badgeContainer;
    UILabel *_badgeLabel;
    UIImageView *_profieIcon;
    UIImageView *_promoteNewImage;
}

@property(nonatomic) __weak UIImageView *promoteNewImage; // @synthesize promoteNewImage=_promoteNewImage;
@property(nonatomic) __weak UIImageView *profieIcon; // @synthesize profieIcon=_profieIcon;
@property(nonatomic) __weak UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(nonatomic) __weak UIView *badgeContainer; // @synthesize badgeContainer=_badgeContainer;
@property(nonatomic) __weak UIImageView *arrowRightImageView; // @synthesize arrowRightImageView=_arrowRightImageView;
@property(nonatomic) __weak UILabel *sectionName; // @synthesize sectionName=_sectionName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

