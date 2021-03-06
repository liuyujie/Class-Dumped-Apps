//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class IGStoryMusicBrowserPlayPauseButtonRing, UIImageView;

@interface IGStoryViewerMusicSheetPlayPauseButton : IGBouncyButton
{
    IGStoryMusicBrowserPlayPauseButtonRing *_outlineRing;
    UIImageView *_playIconImageView;
    UIImageView *_pauseIconImageView;
    _Bool _showsOutlineRingWhenNotLoading;
    _Bool _disabled;
}

@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool showsOutlineRingWhenNotLoading; // @synthesize showsOutlineRingWhenNotLoading=_showsOutlineRingWhenNotLoading;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingPauseSymbol;
@property(nonatomic) _Bool isShowingPlaySymbol;
@property(nonatomic, getter=isLoading) _Bool loading;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

