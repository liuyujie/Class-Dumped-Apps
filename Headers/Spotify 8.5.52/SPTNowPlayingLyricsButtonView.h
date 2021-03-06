//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol SPTNowPlayingLyricsButtonViewDelegate;

@interface SPTNowPlayingLyricsButtonView : UIView
{
    _Bool _selected;
    _Bool _isActive;
    id <SPTNowPlayingLyricsButtonViewDelegate> _delegate;
    UIButton *_lyricsButton;
}

@property(retain, nonatomic) UIButton *lyricsButton; // @synthesize lyricsButton=_lyricsButton;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <SPTNowPlayingLyricsButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)updateButtonSelectedState;
- (void)setupLyricsButton;
- (void)setupUI;
- (id)init;

@end

