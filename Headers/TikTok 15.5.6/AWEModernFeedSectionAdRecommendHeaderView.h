//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class AWEOriginalAdModel, UILabel;

@interface AWEModernFeedSectionAdRecommendHeaderView : UITableViewHeaderFooterView
{
    UILabel *_adRecommendLabel;
    AWEOriginalAdModel *_adModel;
}

+ (double)heightWithAdModel:(id)arg1;
+ (id)identifier;
@property(retain, nonatomic) AWEOriginalAdModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) UILabel *adRecommendLabel; // @synthesize adRecommendLabel=_adRecommendLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

