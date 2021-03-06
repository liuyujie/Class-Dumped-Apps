//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESearchChildViewControllerProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class AWESearchMiddleViewController, AWESearchResultViewController, AWESearchTabConfig, NSString;
@protocol AWERNWebContainerProtocol, AWESearchActionListenerProtocol, AWESearchChildViewControllerResultFilterProtocol;

@interface AWEGeneralSearchRNPlaceholderViewController : UIViewController <AWEUserMessage, AWESearchChildViewControllerProtocol>
{
    _Bool _isFilterSearch;
    AWESearchResultViewController *_searchResultViewController;
    AWESearchMiddleViewController *_searchMiddleViewController;
    AWESearchTabConfig *_tabConfig;
    id <AWESearchChildViewControllerResultFilterProtocol> _delegate;
    id <AWESearchActionListenerProtocol> _listener;
    unsigned long long _publishTime;
    unsigned long long _sortType;
    NSString *_refer;
    id <AWERNWebContainerProtocol> _reactContainer;
}

@property(retain, nonatomic) id <AWERNWebContainerProtocol> reactContainer; // @synthesize reactContainer=_reactContainer;
@property(retain, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) unsigned long long publishTime; // @synthesize publishTime=_publishTime;
@property(nonatomic) _Bool isFilterSearch; // @synthesize isFilterSearch=_isFilterSearch;
@property(nonatomic) __weak id <AWESearchActionListenerProtocol> listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <AWESearchChildViewControllerResultFilterProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWESearchTabConfig *tabConfig; // @synthesize tabConfig=_tabConfig;
@property(retain, nonatomic) AWESearchMiddleViewController *searchMiddleViewController; // @synthesize searchMiddleViewController=_searchMiddleViewController;
@property(nonatomic) __weak AWESearchResultViewController *searchResultViewController; // @synthesize searchResultViewController=_searchResultViewController;
- (void).cxx_destruct;
- (unsigned long long)searchTabTypeWithString:(id)arg1;
- (void)notifyReactLifecycleEvent:(id)arg1;
- (void)notifyReactToSearchWithKeyword:(id)arg1 enterMethod:(id)arg2;
@property(readonly, copy, nonatomic) NSString *reactID;
- (void)setTransitionType:(long long)arg1;
- (void)becomeActive;
- (void)reset;
- (void)saveSearchWord:(id)arg1;
- (void)fetchDataWithKeyWord:(id)arg1 enterFrom:(id)arg2 extraLogParams:(id)arg3 isSearchByUserClick:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleSearchKeywordDidChangedNotification:(id)arg1;
- (void)didLoginFailed;
- (void)didCancelLogin;
- (void)didFinishLogin;
- (void)willStartLogin;
- (void)addContainerIfNeededWithSearchKeyword:(id)arg1 enterMethod:(id)arg2;
- (void)injectReactIDIntoWebView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

