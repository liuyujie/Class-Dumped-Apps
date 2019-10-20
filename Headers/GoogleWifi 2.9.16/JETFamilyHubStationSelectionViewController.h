//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

@class JETAccessPointGroup, JETAccessibilityAnnouncer, JETFamilyHubHelper, JETInsightsDataCache, NSArray, NSMutableDictionary, NSMutableSet, UIColor;
@protocol JETFamilyHubStationSelectionViewControllerDelegate, JETUserStateProtocol;

@interface JETFamilyHubStationSelectionViewController : QTMCollectionViewController
{
    JETInsightsDataCache *_cache;
    JETAccessibilityAnnouncer *_accessibilityAnnouncer;
    NSMutableSet *_selectedStations;
    JETFamilyHubHelper *_familyHubHelper;
    _Bool _startSelected;
    id <JETFamilyHubStationSelectionViewControllerDelegate> _delegate;
    UIColor *_selectedColor;
    UIColor *_deviceNameColor;
    UIColor *_deviceVendorColor;
    NSArray *_availableStationIDs;
    id <JETUserStateProtocol> _userState;
    JETAccessPointGroup *_group;
    NSMutableDictionary *_stationItems;
}

@property(retain, nonatomic) NSMutableDictionary *stationItems; // @synthesize stationItems=_stationItems;
@property(retain, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(nonatomic) __weak id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
@property(retain, nonatomic) NSArray *availableStationIDs; // @synthesize availableStationIDs=_availableStationIDs;
@property(nonatomic) _Bool startSelected; // @synthesize startSelected=_startSelected;
@property(retain, nonatomic) UIColor *deviceVendorColor; // @synthesize deviceVendorColor=_deviceVendorColor;
@property(retain, nonatomic) UIColor *deviceNameColor; // @synthesize deviceNameColor=_deviceNameColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) id <JETFamilyHubStationSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)selectedStationIds;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateThisDeviceItemLabel:(id)arg1;
- (void)constructModel;
- (id)availableStations;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 availableStationIDs:(id)arg3;

@end

