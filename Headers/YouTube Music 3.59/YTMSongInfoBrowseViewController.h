//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMBrowseViewController.h"

@class UIColor;
@protocol YTMSongInfoBrowseViewControllerDelegate;

@interface YTMSongInfoBrowseViewController : YTMBrowseViewController
{
    double _lastVerticalContentOffset;
    id <YTMSongInfoBrowseViewControllerDelegate> _delegate;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) __weak id <YTMSongInfoBrowseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)innerTubeCollectionViewDarkBackgroundColor;
- (id)innerTubeCollectionViewBackgroundColor;
- (int)innerTubeCollectionStatusViewStyle;
- (_Bool)allowsOfflineTransition;
- (void)scrollableDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollableDidScroll:(id)arg1;
- (void)scrollableWillBeginDragging:(id)arg1;
- (_Bool)browseResponseViewControllerShouldLogScreen:(id)arg1;
- (void)loadWithResponse:(id)arg1;
- (_Bool)shouldLayoutFullscreen;
- (void)loadWithRequest:(id)arg1;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)navigationBarAppearance;
- (_Bool)preferLightweightCollections;
- (_Bool)pullToRefreshEnabled;

@end

