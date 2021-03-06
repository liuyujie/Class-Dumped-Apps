//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDesignableView.h>

@class TFNPlaybackButton, UIButton, UILabel, UISlider;
@protocol TFNUIPlaybackControlsViewDelegate;

@interface TFNUIPlaybackControlsView : TFNDesignableView
{
    id <TFNUIPlaybackControlsViewDelegate> _delegate;
    TFNPlaybackButton *_playPauseButton;
    UISlider *_playbackSlider;
    UIButton *_fullScreenButton;
    UILabel *_timeLabel;
}

+ (id)variantIDs;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(nonatomic) __weak UISlider *playbackSlider; // @synthesize playbackSlider=_playbackSlider;
@property(nonatomic) __weak TFNPlaybackButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) __weak id <TFNUIPlaybackControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)controlValueStoppedChanging:(id)arg1;
- (void)controlValueChanged:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)updateOutletsFromVariant:(id)arg1;
- (void)updateWithModel:(id)arg1;

@end

