//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <Module_Framework/UIScrollViewDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol DTSmartPagingScrollViewDatasource;

@interface DTSmartPagingScrollView : UIScrollView <UIScrollViewDelegate>
{
    id <DTSmartPagingScrollViewDatasource> _pageDatasource;
    unsigned long long _numberOfPages;
    NSMutableDictionary *_viewsByPage;
    NSMutableSet *_visiblePageViews;
    unsigned long long _currentPageIndex;
    _Bool _firstLayoutDone;
}

@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) __weak id <DTSmartPagingScrollViewDatasource> pageDatasource; // @synthesize pageDatasource=_pageDatasource;
- (void).cxx_destruct;
- (void)reloadData;
- (void)scrollToPage:(long long)arg1 animated:(_Bool)arg2;
- (struct CGRect)frameForPageViewAtIndex:(unsigned long long)arg1;
- (void)_setupVisiblePageViews;
- (id)viewForIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfVisiblePages;
- (void)_updateCurrentPage;
- (void)layoutSubviews;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

