//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOONavigationCustomization-Protocol.h"
#import "JETFamilyHubCreateStationSetDelegate-Protocol.h"

@class GOONavigationStyle, JETAccessPointGroup, JETFamilyHubCreateStationSetView, NSSet, NSString, UIScrollView, UIView;
@protocol JETUserStateProtocol;

@interface JETFamilyHubCreateStationSetViewController : UIViewController <JETFamilyHubCreateStationSetDelegate, GOONavigationCustomization>
{
    JETFamilyHubCreateStationSetView *_createSetView;
    id <JETUserStateProtocol> _userState;
    JETAccessPointGroup *_group;
}

@property(retain, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
- (void).cxx_destruct;
- (id)errorStringForStationSetName:(id)arg1;
- (void)createStationSetWithName:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end
