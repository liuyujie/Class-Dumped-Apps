//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBEViewController.h"

#import "GOONavigationCustomization-Protocol.h"

@class GOOAlertView, GOONavigationStyle, JETBottomBarView, MDCActivityIndicator, NSDate, NSSet, NSString, NSTimer, UIScrollView, UIView;

@interface JETCIWReconnectOnHubViewController : JETOOBEViewController <GOONavigationCustomization>
{
    MDCActivityIndicator *_activityIndicator;
    GOOAlertView *_awaitingOnHubAlert;
    GOOAlertView *_contactSupportAlert;
    NSTimer *_checkTimer;
    NSDate *_checkTimerStart;
    JETBottomBarView *_bottomBarView;
}

+ (void)setTestCheckTimerDurationEnabled:(_Bool)arg1;
@property(retain, nonatomic) JETBottomBarView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) NSDate *checkTimerStart; // @synthesize checkTimerStart=_checkTimerStart;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) GOOAlertView *contactSupportAlert; // @synthesize contactSupportAlert=_contactSupportAlert;
@property(retain, nonatomic) GOOAlertView *awaitingOnHubAlert; // @synthesize awaitingOnHubAlert=_awaitingOnHubAlert;
@property(retain, nonatomic) MDCActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)checkTimerHandler:(id)arg1;
- (void)backButtonTapped;
- (void)doneButtonTapped;
- (void)machineStateChangedTo:(long long)arg1;
- (id)analyticsScreenName;
- (void)displayContactSupportAlert;
- (void)displayAwaitingOnHubAlert;
- (void)displayAlertForMachineState:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
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
