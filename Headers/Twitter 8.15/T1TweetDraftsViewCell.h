//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class NSString, T1TweetDraftsDraftCompositionView, TFNTwitterComposition;

@interface T1TweetDraftsViewCell : TFNTableViewCell
{
    T1TweetDraftsDraftCompositionView *_draftCompositionView;
}

+ (id)cellLayoutForComposition:(id)arg1 layoutMetrics:(id)arg2 withPreviousLayout:(id)arg3;
@property(readonly, nonatomic) T1TweetDraftsDraftCompositionView *draftCompositionView; // @synthesize draftCompositionView=_draftCompositionView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
@property(nonatomic, getter=isAnimatedLivePhotoEnabled) _Bool animatedLivePhotoEnabled;
@property(retain, nonatomic) TFNTwitterComposition *composition;
@property(copy, nonatomic) NSString *accountID;
- (void)_t1_tweetDraftsTableViewCell_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

