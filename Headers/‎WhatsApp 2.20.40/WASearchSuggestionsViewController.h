//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

@class NSArray;
@protocol WASearchSuggestionsViewControllerDelegate;

@interface WASearchSuggestionsViewController : WATableViewController
{
    // Error parsing type: , name: SearchSuggestionTableViewCellReuseIdentifier
    // Error parsing type: , name: delegate
    // Error parsing type: , name: suggestions
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, copy) NSArray *suggestions;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
@property(nonatomic) __weak id <WASearchSuggestionsViewControllerDelegate> delegate; // @synthesize delegate;

@end

