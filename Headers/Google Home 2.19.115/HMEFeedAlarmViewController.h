//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HMEAlarmViewController-Protocol.h"
#import "HMECardsViewControllerDataSource-Protocol.h"

@class HMECardsViewController, HMEFeedAlarmViewModel, HMEFeedButtonWithLabelView, HMEFeedSoundClipManager, MDCButton, NSArray, NSString, UILabel, UIView;
@protocol HMEAlarmViewControllerDelegate, HMEFeedAction;

@interface HMEFeedAlarmViewController : UIViewController <HMECardsViewControllerDataSource, HMEAlarmViewController>
{
    id <HMEAlarmViewControllerDelegate> _delegate;
    HMEFeedAlarmViewModel *_alarmViewModel;
    id <HMEFeedAction> _actionHandler;
    HMEFeedSoundClipManager *_soundClipManager;
    UIView *_headerView;
    UILabel *_headerLabel;
    MDCButton *_expandButton;
    MDCButton *_collapseButton;
    UIView *_detailView;
    HMECardsViewController *_cardsViewController;
    HMEFeedButtonWithLabelView *_dismissActionView;
    HMEFeedButtonWithLabelView *_emergencyActionView;
    NSArray *_detailViewVisibleConstraints;
    NSArray *_detailViewHiddenConstraints;
}

@property(retain, nonatomic) NSArray *detailViewHiddenConstraints; // @synthesize detailViewHiddenConstraints=_detailViewHiddenConstraints;
@property(retain, nonatomic) NSArray *detailViewVisibleConstraints; // @synthesize detailViewVisibleConstraints=_detailViewVisibleConstraints;
@property(readonly, nonatomic) HMEFeedButtonWithLabelView *emergencyActionView; // @synthesize emergencyActionView=_emergencyActionView;
@property(readonly, nonatomic) HMEFeedButtonWithLabelView *dismissActionView; // @synthesize dismissActionView=_dismissActionView;
@property(readonly, nonatomic) HMECardsViewController *cardsViewController; // @synthesize cardsViewController=_cardsViewController;
@property(readonly, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(readonly, nonatomic) MDCButton *collapseButton; // @synthesize collapseButton=_collapseButton;
@property(readonly, nonatomic) MDCButton *expandButton; // @synthesize expandButton=_expandButton;
@property(readonly, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) HMEFeedSoundClipManager *soundClipManager; // @synthesize soundClipManager=_soundClipManager;
@property(readonly, nonatomic) id <HMEFeedAction> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) HMEFeedAlarmViewModel *alarmViewModel; // @synthesize alarmViewModel=_alarmViewModel;
@property(nonatomic) __weak id <HMEAlarmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collapse;
- (id)cardsViewController:(id)arg1 viewControllerForCardAtIndexPath:(id)arg2;
- (long long)cardsViewController:(id)arg1 numberOfCardsInSection:(long long)arg2;
- (long long)numberOfSectionsInCardsViewController:(id)arg1;
- (void)dismissCard;
- (void)performEmergencyAction;
- (void)hideDetailView;
- (void)showDetailView:(id)arg1;
- (void)addDismissHandler:(CDUnknownBlockType)arg1;
- (void)buildDetailView;
- (void)buildHeaderView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlarmModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

