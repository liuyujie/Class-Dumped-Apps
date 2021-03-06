//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUIListTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface AWESearchMusicTableViewCell : AWEUIListTableViewCell
{
    _Bool _shouldShowTopTagImage;
    _Bool _shouldShowActionButton;
    _Bool _needContentViewClearColor;
    _Bool _disableHighlight;
    CDUnknownBlockType _playButtonTapBlock;
    UIButton *_playButton;
    UILabel *_tagLabel;
    UIScrollView *_tagContentView;
    UIView *_panGestureView;
    UIImageView *_rankingView;
}

+ (long long)cellType;
+ (double)cellHeightWithModel:(id)arg1;
+ (double)cellHeight;
+ (id)identifier;
@property(retain, nonatomic) UIImageView *rankingView; // @synthesize rankingView=_rankingView;
@property(retain, nonatomic) UIView *panGestureView; // @synthesize panGestureView=_panGestureView;
@property(retain, nonatomic) UIScrollView *tagContentView; // @synthesize tagContentView=_tagContentView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) _Bool disableHighlight; // @synthesize disableHighlight=_disableHighlight;
@property(nonatomic) _Bool needContentViewClearColor; // @synthesize needContentViewClearColor=_needContentViewClearColor;
@property(nonatomic) _Bool shouldShowActionButton; // @synthesize shouldShowActionButton=_shouldShowActionButton;
@property(nonatomic) _Bool shouldShowTopTagImage; // @synthesize shouldShowTopTagImage=_shouldShowTopTagImage;
@property(copy, nonatomic) CDUnknownBlockType playButtonTapBlock; // @synthesize playButtonTapBlock=_playButtonTapBlock;
- (void).cxx_destruct;
- (id)imageWithUIView:(id)arg1;
- (id)colorFromHexString:(id)arg1;
- (void)p_stopAnimation;
- (void)p_startAnimation;
- (void)configWithPlayerStatus:(unsigned long long)arg1;
- (void)playButtonTapped;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)timeString:(double)arg1;
- (id)musicTagWithTitle:(id)arg1 titleColor:(id)arg2 tagColor:(id)arg3;
- (void)setupTagContentView;
- (void)configLeftTextWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)configureUI;
- (id)initWithCellType:(long long)arg1 cellStyle:(long long)arg2 reuseIdentifier:(id)arg3 enableRebrandingAvatar:(_Bool)arg4;

@end

