//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGEmojiPickerTrayViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryQuickReactionsEmojiCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGTooltipView, IGUserSession, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel;
@protocol IGStoryQuickReactionsViewDelegate;

@interface IGStoryQuickReactionsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IGStoryQuickReactionsEmojiCellDelegate, IGEmojiPickerTrayViewControllerDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UILabel *_quickReactionsTitle;
    NSArray *_emojiModels;
    IGUserSession *_userSession;
    NSIndexPath *_swappedIndexPath;
    IGTooltipView *_creationTooltip;
    id <IGStoryQuickReactionsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryQuickReactionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)emojiPickerTrayViewControllerDidTapSearchCancel:(id)arg1;
- (void)emojiPickerTrayViewController:(id)arg1 didSelectEmoji:(id)arg2;
- (void)quickReactionsEmojiCellDidLongPress:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)_collectionViewHeight;
- (void)showTooltipIfNecessary;
- (void)setEmojiModels:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithEmojiModels:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

