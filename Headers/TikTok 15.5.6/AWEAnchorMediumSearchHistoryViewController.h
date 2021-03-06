//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UIView;

@interface AWEAnchorMediumSearchHistoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _searchHistoryClickBlock;
    UITableView *_tableView;
    NSArray *_historyList;
    UIView *_tableFooterView;
}

@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(copy, nonatomic) NSArray *historyList; // @synthesize historyList=_historyList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType searchHistoryClickBlock; // @synthesize searchHistoryClickBlock=_searchHistoryClickBlock;
- (void).cxx_destruct;
- (void)updateDeleteAllSearchHistoryView;
- (void)deleteAllSearchHistory:(id)arg1;
- (void)deleteHistoryItemWithKeyWord:(id)arg1;
- (void)saveSearchHistoryResultWithKeyword:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setupUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

