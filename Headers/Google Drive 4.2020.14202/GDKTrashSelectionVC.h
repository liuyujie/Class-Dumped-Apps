//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/QTMCollectionViewController.h>

#import "GDKThemable-Protocol.h"

@class GDKTheme, NSArray, NSString, UITraitCollection;
@protocol GDKTrashSelectionVCDelegate;

@interface GDKTrashSelectionVC : QTMCollectionViewController <GDKThemable>
{
    GDKTheme *_theme;
    id <GDKTrashSelectionVCDelegate> _delegate;
    NSArray *_teamDrives;
    long long _selectedIndex;
}

@property long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *teamDrives; // @synthesize teamDrives=_teamDrives;
@property(nonatomic) __weak id <GDKTrashSelectionVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)applyTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCVOsWithSelectedTeamDrive:(id)arg1;
- (void)configureModel;
- (void)setCurrentTeamDrive:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithTeamDrives:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

