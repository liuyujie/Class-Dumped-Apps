//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTextCell.h>

@class T1ReactionItem, T1ReactionsRowView;

@interface T1ReactionsTableViewCell : TFNTextCell
{
    T1ReactionsRowView *_reactionsStackView;
    T1ReactionItem *_moreReactionItem;
}

@property(retain, nonatomic) T1ReactionItem *moreReactionItem; // @synthesize moreReactionItem=_moreReactionItem;
@property(retain, nonatomic) T1ReactionsRowView *reactionsStackView; // @synthesize reactionsStackView=_reactionsStackView;
- (void).cxx_destruct;
- (void)setReactionsRow:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

