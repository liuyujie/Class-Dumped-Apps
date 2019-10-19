//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "YTRadioLabelDelegate.h"

@class GIMMe, NSArray, NSString, YTRadioLabel;

@interface YTRadioLabelCollectionViewController : UICollectionViewController <YTRadioLabelDelegate>
{
    GIMMe *_gimme;
    long long _selectedIndex;
    id <YTRadioLabelCollectionViewDelegate> _delegate;
    NSArray *_titles;
    YTRadioLabel *_selectedRadioLabel;
}

@property(retain, nonatomic) YTRadioLabel *selectedRadioLabel; // @synthesize selectedRadioLabel=_selectedRadioLabel;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) __weak id <YTRadioLabelCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateUIWithPreviousSelection;
- (void)didSelectRadioLabel:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitles:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
