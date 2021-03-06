//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSXCollectionViewController.h"

#import "GSXContactSuggestionsDelegate-Protocol.h"

@class GSXContactSuggestionsList, GSXContactSuggestionsMutator, GSXEmptyView, GSXServiceID, GSXShoppingListV2, NSString;
@protocol GSXContactSuggestionsViewControllerDelegate;

@interface GSXContactSuggestionsViewController : GSXCollectionViewController <GSXContactSuggestionsDelegate>
{
    id <GSXContactSuggestionsViewControllerDelegate> _delegate;
    GSXEmptyView *_errorView;
    GSXServiceID *_currentContactsServiceID;
    GSXContactSuggestionsMutator *_mutator;
    GSXContactSuggestionsList *_currentContactSuggestionsList;
    GSXShoppingListV2 *_shoppingList;
}

- (void).cxx_destruct;
- (void)loadSuggestionsForQuery:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)showErrorViewForError:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)controllerDidStopLoading:(id)arg1;
- (void)controllerDidStartLoading:(id)arg1;
- (void)contactSuggestionsMutator:(id)arg1 didLoadContactSuggestions:(id)arg2 error:(id)arg3;
- (void)didTapContactSuggestion:(id)arg1 indexPath:(id)arg2;
- (id)contactSuggestionForCurrentQuery;
- (void)loadSuggestionsForQuery:(id)arg1;
- (id)headerConfiguration;
- (void)viewDidLoad;
- (id)initWithShoppingListID:(id)arg1 routingContext:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

