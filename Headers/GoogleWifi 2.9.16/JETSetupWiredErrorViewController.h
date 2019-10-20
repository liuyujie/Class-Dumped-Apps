//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBEViewController.h"

#import "GOONavigationCustomization-Protocol.h"

@class GOONavigationStyle, JETBottomBarView, NSSet, NSString, UIScrollView, UIView;

@interface JETSetupWiredErrorViewController : JETOOBEViewController <GOONavigationCustomization>
{
    JETBottomBarView *_bottomBarView;
}

@property(retain, nonatomic) JETBottomBarView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
- (void).cxx_destruct;
- (void)learnMoreButtonTapped;
- (id)analyticsScreenName;
- (void)nextButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
@property(readonly) Class superclass;

@end

