//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGUnseenIndicatorView, UILabel;

@interface IGBadgeCountView : UIView
{
    UILabel *_textLabel;
    IGUnseenIndicatorView *_unseenIndicator;
}

+ (struct CGSize)sizeForBadgeCount:(long long)arg1;
- (void).cxx_destruct;
- (void)configureWithBadgeCount:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

