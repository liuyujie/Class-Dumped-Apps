//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWESearchSugViewController;
@protocol AWESearchMiddleProtocol, AWESearchPlaceholderProtocol;

@interface AWESearchMiddleViewController : UIViewController
{
    _Bool _isShowOnView;
    _Bool _isShowPlaceholderView;
    id <AWESearchMiddleProtocol> _delegete;
    long long _enterFromType;
    UIViewController<AWESearchPlaceholderProtocol> *_searchPlaceholderViewController;
    AWESearchSugViewController *_searchSugViewController;
}

@property(retain, nonatomic) AWESearchSugViewController *searchSugViewController; // @synthesize searchSugViewController=_searchSugViewController;
@property(retain, nonatomic) UIViewController<AWESearchPlaceholderProtocol> *searchPlaceholderViewController; // @synthesize searchPlaceholderViewController=_searchPlaceholderViewController;
@property(nonatomic) long long enterFromType; // @synthesize enterFromType=_enterFromType;
@property(nonatomic) _Bool isShowPlaceholderView; // @synthesize isShowPlaceholderView=_isShowPlaceholderView;
@property(nonatomic) _Bool isShowOnView; // @synthesize isShowOnView=_isShowOnView;
@property(nonatomic) __weak id <AWESearchMiddleProtocol> delegete; // @synthesize delegete=_delegete;
- (void).cxx_destruct;
- (id)getPlaceholderViewController;
- (id)getDiscoverMVPPlaceholderViewController;
- (void)resignKeyboard;
- (void)refreshPlaceholderHotCellUseDefaultWord;
- (void)refreshPlaceholderHotCell;
- (_Bool)shouldRefreshDefaultWord;
- (void)hideSugOrPlaceholderAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)showSugOrPlaceholderAnimationOnDefaultTabTypeWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSugOrPlaceholderAnimationWithText:(id)arg1 tabType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureUI;
- (void)viewDidLoad;

@end
