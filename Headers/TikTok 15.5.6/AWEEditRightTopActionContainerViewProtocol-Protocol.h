//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEEditActionContainerViewLayout, NSArray;

@protocol AWEEditRightTopActionContainerViewProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType moreButtonClickedBlock;
@property(readonly, nonatomic) AWEEditActionContainerViewLayout *containerViewLayout;
@property(readonly, copy, nonatomic) NSArray *itemViews;
@property(readonly, copy, nonatomic) NSArray *itemDatas;
@property(nonatomic) _Bool folded;
- (void)tapToDismiss;
- (id)initWithItemDatas:(NSArray *)arg1 containerViewLayout:(AWEEditActionContainerViewLayout *)arg2;
@end

