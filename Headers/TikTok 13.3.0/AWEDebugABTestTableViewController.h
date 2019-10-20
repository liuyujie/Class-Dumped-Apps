//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWEABTestInfoModel, AWEDebugABTestTableViewCell, AWESearchBar, NSArray, NSString, UITextField;

@interface AWEDebugABTestTableViewController : UITableViewController <UITextFieldDelegate, UISearchBarDelegate>
{
    UITextField *_textField;
    AWEDebugABTestTableViewCell *_currentCell;
    AWEABTestInfoModel *_currentInfoModel;
    AWESearchBar *_searchBar;
    NSArray *_sectionData;
    NSArray *_sectionIndexTitles;
}

@property(retain, nonatomic) NSArray *sectionIndexTitles; // @synthesize sectionIndexTitles=_sectionIndexTitles;
@property(retain, nonatomic) NSArray *sectionData; // @synthesize sectionData=_sectionData;
@property(retain, nonatomic) AWESearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) AWEABTestInfoModel *currentInfoModel; // @synthesize currentInfoModel=_currentInfoModel;
@property(retain, nonatomic) AWEDebugABTestTableViewCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)bindAction;
- (id)searchWithKeyString:(id)arg1;
- (void)updateNumberCellWithInputString:(id)arg1;
- (void)hideBoardAndClearTextField;
- (id)defaultOptionText:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)bindData;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
