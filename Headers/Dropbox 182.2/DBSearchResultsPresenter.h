//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBViewTransitionManagerDelegate-Protocol.h"

@class DBSearchBarContainerView, DBViewTransitionManager, NSString, UIViewController;
@protocol DBSearchResultsPresentationSource, DBSearchResultsViewControllerProtocol><UISearchBarDelegate, UISearchBarDelegate;

@interface DBSearchResultsPresenter : NSObject <DBViewTransitionManagerDelegate>
{
    UIViewController<DBSearchResultsViewControllerProtocol><UISearchBarDelegate> *_searchController;
    DBViewTransitionManager *_transitionManager;
    DBSearchBarContainerView *_searchView;
    _Bool _presentedFromNavbar;
    UIViewController<DBSearchResultsPresentationSource> *_presentationController;
    id <UISearchBarDelegate> _savedSearchBarDelegate;
}

- (void).cxx_destruct;
- (void)transitionManager:(id)arg1 didTransitionToLocation:(int)arg2;
- (void)db_presentedFromNavbarTransitionSearchViewToLocation:(int)arg1;
- (void)db_transitionSearchViewToLocation:(int)arg1;
- (void)transitionManager:(id)arg1 transitionToLocation:(int)arg2;
- (void)transitionManager:(id)arg1 willTransitionToLocation:(int)arg2;
- (void)setNavigationBarHiddenOverride:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dismissSearchResults;
- (void)presentSearchResultsOnController:(id)arg1 didTapOnEntryBlock:(CDUnknownBlockType)arg2;
- (id)initWithSearchPath:(id)arg1 userState:(id)arg2 peekPreviewManager:(id)arg3 filelistConfig:(id)arg4 searchView:(id)arg5 presentedFromNavbar:(_Bool)arg6 origin:(unsigned long long)arg7;
- (id)initWithUserState:(id)arg1 peekPreviewManager:(id)arg2 filelistConfig:(id)arg3 searchView:(id)arg4 presentedFromNavbar:(_Bool)arg5 origin:(unsigned long long)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

