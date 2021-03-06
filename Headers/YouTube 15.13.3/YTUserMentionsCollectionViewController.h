//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <Module_Framework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class GIMMe, NSArray, NSMutableArray, NSString;
@protocol YTUserMentionsCollectionViewControllerDelegate;

@interface YTUserMentionsCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>
{
    NSMutableArray *_thumbnailControllers;
    unsigned long long _displayStyle;
    GIMMe *_gimme;
    id <YTUserMentionsCollectionViewControllerDelegate> _delegate;
    NSArray *_suggestedUserMentions;
}

@property(retain, nonatomic) NSArray *suggestedUserMentions; // @synthesize suggestedUserMentions=_suggestedUserMentions;
@property(nonatomic) __weak id <YTUserMentionsCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateSuggestedUserMentions:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

