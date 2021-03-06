//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOHeaderNavigationParentViewController-Protocol.h"
#import "GOONavigationCustomization-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, GOONavigationStyle, NSArray, NSDictionary, NSSet, NSString, UIScrollView, UITableView, UIView;
@protocol ASTCountryListViewDelegate;

@interface ASTCountryListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, GOOHeaderNavigationParentViewController, GOONavigationCustomization>
{
    GOOFlexibleHeaderViewController *_headerViewController;
    GOOHeaderNavigationView *_headerNavigationView;
    id <ASTCountryListViewDelegate> _delegate;
    UITableView *_tableView;
    NSArray *_sortedKeys;
    NSDictionary *_countrySectionDictionary;
}

+ (id)countryInfoDictionary;
@property(retain, nonatomic) NSDictionary *countrySectionDictionary; // @synthesize countrySectionDictionary=_countrySectionDictionary;
@property(retain, nonatomic) NSArray *sortedKeys; // @synthesize sortedKeys=_sortedKeys;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ASTCountryListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView=_headerNavigationView;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end

