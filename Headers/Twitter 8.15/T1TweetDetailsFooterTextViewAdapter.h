//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNComposableViewAdapter.h>

#import <T1Twitter/T1TweetDetailsFooterTextViewDelegate-Protocol.h>

@class T1TweetDetailsFooterTextView;

@interface T1TweetDetailsFooterTextViewAdapter : TFNComposableViewAdapter <T1TweetDetailsFooterTextViewDelegate>
{
    unsigned long long _displayType;
}

@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void)tweetDetailsFooterTextViewDidTapHiddenRepliesButton:(id)arg1;
- (void)tweetDetailsFooterTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (_Bool)isLayoutState:(id)arg1 validForViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (id)layoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateWithInfo:(id)arg2 forView:(id)arg3;
- (void)setViewModel:(id)arg1 forView:(id)arg2;
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)arg1;
@property(readonly, nonatomic) T1TweetDetailsFooterTextView *footerTextView;
- (id)initWithViewIdentifier:(long long)arg1 displayType:(unsigned long long)arg2;

@end
