//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SGActivityItem, SGActivityItemDataContext, XBXTableViewCell;

@protocol SGActivityFeedListDataSource <NSObject>
- (NSString *)clubId;
- (unsigned long long)feedType;
- (NSString *)timelineId;
- (NSString *)timelineType;
- (NSString *)pinOptionText;
- (_Bool)isShowingRefreshInUtilityBar;
- (_Bool)shouldShowPromotions;
- (_Bool)isPostButtonSticky;
- (_Bool)shouldShowPostStatusButton;
- (void)tryFetchMoreData;
- (void)refreshIfNeeded;
- (void)refresh;
- (void)beginRefreshing;
- (void)updatePromotionCellDelegate:(XBXTableViewCell *)arg1;
- (void)updateCellItem:(SGActivityItem *)arg1 forRow:(unsigned long long)arg2;
- (SGActivityItemDataContext *)getContextForRow:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
@end

