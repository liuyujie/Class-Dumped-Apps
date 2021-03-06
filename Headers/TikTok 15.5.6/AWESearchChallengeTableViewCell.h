//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUIListTableViewCell.h"

@class AWESearchAladdinVideoListView, NSArray;

@interface AWESearchChallengeTableViewCell : AWEUIListTableViewCell
{
    NSArray *_hightlightPositions;
    AWESearchAladdinVideoListView *_videoListView;
}

+ (long long)cellType;
+ (double)cellHeightWithModel:(id)arg1;
+ (double)cellHeight;
+ (id)identifier;
@property(retain, nonatomic) AWESearchAladdinVideoListView *videoListView; // @synthesize videoListView=_videoListView;
@property(retain, nonatomic) NSArray *hightlightPositions; // @synthesize hightlightPositions=_hightlightPositions;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithModel:(id)arg1 awemeModels:(id)arg2;
- (void)configureWithModel:(id)arg1;
- (id)initWithCellType:(long long)arg1 cellStyle:(long long)arg2 reuseIdentifier:(id)arg3;

@end

