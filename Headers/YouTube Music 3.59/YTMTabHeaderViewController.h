//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTMTabHeaderView;
@protocol YTMTabHeaderViewControllerDelegate, YTResponder;

@interface YTMTabHeaderViewController : UIViewController <YTResponder, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSMutableArray *_tabItems;
    double _tabHeight;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTMTabHeaderViewControllerDelegate> _delegate;
    unsigned long long _selectedIndex;
}

@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <YTMTabHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)selectedItem;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)tabHeaderCellAtIndex:(unsigned long long)arg1;
- (void)setIndicatorPosition:(double)arg1;
- (id)selectedTitle;
- (id)selectedIcon;
- (void)setTabTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTabWithTabRenderer:(id)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTMTabHeaderView *view; // @dynamic view;

@end

