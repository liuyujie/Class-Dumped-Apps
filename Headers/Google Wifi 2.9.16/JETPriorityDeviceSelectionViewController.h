//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "JETSavableViewController-Protocol.h"
#import "QTMCollectionViewStyleDelegate-Protocol.h"

@class JETButtonContentViewObject, JETInsightsDataCache, NSMutableArray, NSString, QTMButton, UIBarButtonItem, UIImage;

@interface JETPriorityDeviceSelectionViewController : JETGroupAwareCollectionViewController <QTMCollectionViewStyleDelegate, JETSavableViewController>
{
    _Bool _closed;
    _Bool _endPriorityButtonShown;
    NSMutableArray *_clients;
    NSString *_selectedPrioritizedStationID;
    UIImage *_itemSelectedImage;
    UIImage *_itemNotSelectedImage;
    unsigned long long _selectedTimePeriod;
    JETButtonContentViewObject *_selectedItemButtons;
    QTMButton *_endPriorityButton;
    QTMButton *_changeTimeButton;
    JETInsightsDataCache *_cache;
    UIBarButtonItem *_saveButton;
    NSString *_thisStationID;
}

@property(copy, nonatomic) NSString *thisStationID; // @synthesize thisStationID=_thisStationID;
@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) JETInsightsDataCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) QTMButton *changeTimeButton; // @synthesize changeTimeButton=_changeTimeButton;
@property(retain, nonatomic) QTMButton *endPriorityButton; // @synthesize endPriorityButton=_endPriorityButton;
@property(nonatomic) _Bool endPriorityButtonShown; // @synthesize endPriorityButtonShown=_endPriorityButtonShown;
@property(retain, nonatomic) JETButtonContentViewObject *selectedItemButtons; // @synthesize selectedItemButtons=_selectedItemButtons;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) unsigned long long selectedTimePeriod; // @synthesize selectedTimePeriod=_selectedTimePeriod;
@property(retain, nonatomic) UIImage *itemNotSelectedImage; // @synthesize itemNotSelectedImage=_itemNotSelectedImage;
@property(retain, nonatomic) UIImage *itemSelectedImage; // @synthesize itemSelectedImage=_itemSelectedImage;
@property(copy, nonatomic) NSString *selectedPrioritizedStationID; // @synthesize selectedPrioritizedStationID=_selectedPrioritizedStationID;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)updateThisStationItem;
- (void)changeSelectedTimePeriod:(unsigned long long)arg1;
- (id)findItemForClient:(id)arg1;
- (id)findSelectedItem;
- (void)endPriorityButtonTapped;
- (void)changeTimeButtonTapped;
- (void)updateSelectedItemButtonsForSelectionChange:(_Bool)arg1;
- (id)selectedItemSubtitleForTimePeriod:(unsigned long long)arg1 timePeriodChanged:(_Bool)arg2 isPrioritized:(_Bool)arg3;
- (id)priorityEndSubtitle;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)navigationStyle;
- (void)close;
- (void)cancelButtonTapped;
- (void)saveButtonTapped;
- (id)collectionView:(id)arg1 innerBackgroundColorAtIndexPath:(id)arg2;
- (void)handleClientItemSelected:(id)arg1;
- (void)updateClientItemSelected:(id)arg1;
- (void)populateModel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 cache:(id)arg3 preselectedStationID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
