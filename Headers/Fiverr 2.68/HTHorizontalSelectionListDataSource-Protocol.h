//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTHorizontalSelectionList, NSString, UIView;

@protocol HTHorizontalSelectionListDataSource <NSObject>
- (long long)numberOfItemsInSelectionList:(HTHorizontalSelectionList *)arg1;

@optional
- (NSString *)selectionList:(HTHorizontalSelectionList *)arg1 badgeValueForItemWithIndex:(long long)arg2;
- (UIView *)selectionList:(HTHorizontalSelectionList *)arg1 viewForItemWithIndex:(long long)arg2;
- (NSString *)selectionList:(HTHorizontalSelectionList *)arg1 titleForItemWithIndex:(long long)arg2;
@end
