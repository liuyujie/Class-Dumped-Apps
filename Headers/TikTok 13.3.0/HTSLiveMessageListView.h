//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "HTSLivePluginLayoutView-Protocol.h"

@class HTSLiveMessageListStore, NSString, RACDisposable;
@protocol HTSLiveMessageListActions;

@interface HTSLiveMessageListView : UITableView <HTSLivePluginLayoutView>
{
    HTSLiveMessageListStore *_store;
    RACDisposable *_disposable;
    id <HTSLiveMessageListActions> _dispatcher;
}

@property(retain, nonatomic) id <HTSLiveMessageListActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) __weak HTSLiveMessageListStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)_attemptToDragParent:(id)arg1 forNewBounds:(struct CGRect)arg2 oldBounds:(struct CGRect)arg3;
- (void)heightDidChanged:(id)arg1;
- (void)widthDidChanged:(id)arg1;
- (unsigned long long)viewType;
- (struct CGSize)pluginLayoutContentSize;
- (void)stopObserveSize;
- (void)startObserveSize;
- (id)initWithStore:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
