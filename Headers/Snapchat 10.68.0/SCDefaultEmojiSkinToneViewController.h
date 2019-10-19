//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, SCDefaultEmojiSkinToneFeatureManager, UICollectionReusableView, UICollectionView;

@interface SCDefaultEmojiSkinToneViewController : SCGenericSettingsViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    SCDefaultEmojiSkinToneFeatureManager *_featureManager;
    UICollectionView *_defaultEmojiSkinTonePicker;
    UICollectionReusableView *_headerCell;
}

@property(retain, nonatomic) UICollectionReusableView *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) UICollectionView *defaultEmojiSkinTonePicker; // @synthesize defaultEmojiSkinTonePicker=_defaultEmojiSkinTonePicker;
@property(retain, nonatomic) SCDefaultEmojiSkinToneFeatureManager *featureManager; // @synthesize featureManager=_featureManager;
- (void).cxx_destruct;
- (long long)_numberOfItemsInView;
- (void)_initCollectionView;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)getTitle;
- (void)loadView;
- (id)initWithFeatureManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
