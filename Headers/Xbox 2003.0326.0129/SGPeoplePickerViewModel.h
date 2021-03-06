//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXViewModel.h"

#import "SGBlockUserDelegate-Protocol.h"
#import "_TtP10SmartGlass23SGPeopleHubListDelegate_-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, SGPeoplePickerLaunchContext;

@interface SGPeoplePickerViewModel : XBXViewModel <SGBlockUserDelegate, _TtP10SmartGlass23SGPeopleHubListDelegate_>
{
    _Bool _enableSearch;
    _Bool _showNoDataLabel;
    NSString *_selectionString;
    NSString *_doneSelectionTitle;
    NSString *_cancelSelectionTitle;
    NSString *_peopleListTitleString;
    NSArray *_dataContexts;
    NSMutableSet *_selectedContexts;
    NSMutableArray *_pendingRequests;
    NSArray *_peopleList;
}

@property(retain, nonatomic) NSArray *peopleList; // @synthesize peopleList=_peopleList;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableSet *selectedContexts; // @synthesize selectedContexts=_selectedContexts;
@property(nonatomic) _Bool showNoDataLabel; // @synthesize showNoDataLabel=_showNoDataLabel;
@property(nonatomic) _Bool enableSearch; // @synthesize enableSearch=_enableSearch;
@property(retain, nonatomic) NSArray *dataContexts; // @synthesize dataContexts=_dataContexts;
@property(retain, nonatomic) NSString *peopleListTitleString; // @synthesize peopleListTitleString=_peopleListTitleString;
@property(retain, nonatomic) NSString *cancelSelectionTitle; // @synthesize cancelSelectionTitle=_cancelSelectionTitle;
@property(retain, nonatomic) NSString *doneSelectionTitle; // @synthesize doneSelectionTitle=_doneSelectionTitle;
@property(retain, nonatomic) NSString *selectionString; // @synthesize selectionString=_selectionString;
- (void).cxx_destruct;
- (void)localSearchWithGamertag:(id)arg1;
- (id)selectedPeople;
- (void)updateSelectionString;
- (unsigned long long)maxCountAllowed;
- (id)privacyDataModel;
@property(readonly, nonatomic) __weak SGPeoplePickerLaunchContext *pickerLaunchContext;
- (void)onUnshareIdentityWithUserFailed:(id)arg1 error:(id)arg2 requestContext:(id)arg3;
- (void)onUnshareIdentityWithUserSucceeded:(id)arg1 requestContext:(id)arg2;
- (void)onShareIdentityWithUserFailed:(id)arg1 error:(id)arg2 requestContext:(id)arg3;
- (void)onShareIdentityWithUserSucceeded:(id)arg1 requestContext:(id)arg2;
- (void)onMultiplayerSummaryFailed:(id)arg1 requestContext:(id)arg2;
- (void)onMultiplayerSummarySucceeded:(id)arg1 requestContext:(id)arg2;
- (void)updateFollowingListWithData:(id)arg1 isLocalSearch:(_Bool)arg2;
- (void)onPeopleHubListFailedWithError:(id)arg1 forPeopleType:(long long)arg2;
- (void)onPeopleHubListHydrated:(id)arg1 forPeopleType:(long long)arg2;
- (void)updateInitialSelectionWithItem:(id)arg1;
- (void)onItemDeselected:(id)arg1;
- (void)onItemSelected:(id)arg1;
- (_Bool)canSelectItem;
- (void)finishedSelecting;
- (void)refresh;
- (void)onDestroy;
- (void)onDeactivate;
- (void)onActivate;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

