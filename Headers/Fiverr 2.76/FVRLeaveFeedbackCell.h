//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface FVRLeaveFeedbackCell : UITableViewCell
{
    UILabel *_itemTitle;
    UIImageView *_arrowRightImageView;
    UIImageView *_itemIcon;
}

@property(nonatomic) __weak UIImageView *itemIcon; // @synthesize itemIcon=_itemIcon;
@property(nonatomic) __weak UIImageView *arrowRightImageView; // @synthesize arrowRightImageView=_arrowRightImageView;
@property(nonatomic) __weak UILabel *itemTitle; // @synthesize itemTitle=_itemTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

