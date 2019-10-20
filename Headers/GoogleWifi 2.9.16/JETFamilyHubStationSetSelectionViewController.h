//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

@class JETAccessibilityAnnouncer, JETFamilyHubHelper, NSArray, UIColor;
@protocol JETFamilyHubStationSetSelectionDelegate;

@interface JETFamilyHubStationSetSelectionViewController : JETGroupAwareCollectionViewController
{
    _Bool _startSelected;
    NSArray *_stationSets;
    UIColor *_selectedColor;
    UIColor *_itemTitleColor;
    UIColor *_itemSubtitleColor;
    id <JETFamilyHubStationSetSelectionDelegate> _delegate;
    JETAccessibilityAnnouncer *_accessibilityAnnouncer;
    JETFamilyHubHelper *_familyHubHelper;
}

@property(retain, nonatomic) JETFamilyHubHelper *familyHubHelper; // @synthesize familyHubHelper=_familyHubHelper;
@property(retain, nonatomic) JETAccessibilityAnnouncer *accessibilityAnnouncer; // @synthesize accessibilityAnnouncer=_accessibilityAnnouncer;
@property(nonatomic) __weak id <JETFamilyHubStationSetSelectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool startSelected; // @synthesize startSelected=_startSelected;
@property(retain, nonatomic) UIColor *itemSubtitleColor; // @synthesize itemSubtitleColor=_itemSubtitleColor;
@property(retain, nonatomic) UIColor *itemTitleColor; // @synthesize itemTitleColor=_itemTitleColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (id)stationSetAtIndexPath:(id)arg1;
- (id)selectedStationSetIDs;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)constructModel;
@property(readonly, nonatomic) NSArray *stationSets; // @synthesize stationSets=_stationSets;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

@end
