//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAEditableItemView.h>

#import <Core/UIGestureRecognizerDelegate-Protocol.h>
#import <Core/WAAutoPlayVideoPlayerPlaybackDelegate-Protocol.h>
#import <Core/WAMediaPlayerDelegate-Protocol.h>
#import <Core/WAVideoScrubberDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, WAMediaPlayer, WAMultiSendEditableVideo, WAMultiValueToggle, WAVideoScrubber, WAVideoScrubberContainerView;

@interface WAEditableVideoItemView : WAEditableItemView <UIGestureRecognizerDelegate, WAAutoPlayVideoPlayerPlaybackDelegate, WAMediaPlayerDelegate, WAVideoScrubberDelegate>
{
    WAVideoScrubberContainerView *_videoScrubberContainerView;
    WAMultiValueToggle *_toggle;
    WAVideoScrubber *_videoScrubber;
    UITapGestureRecognizer *_tapGesture;
    _Bool _needsRegenerateThumbnails;
    NSString *_originalFilterName;
    NSString *_originalMediaUUID;
    long long _pauseMediaPlaybackCounter;
    _Bool _didPausePlaybackWhenScrubbingBegan;
    _Bool _isRenderingInProgress;
}

+ (_Bool)isAccessibilityElementWhenNotCroppingOrFiltering;
- (void).cxx_destruct;
- (void)showDetailsAfterTransitionScreenShot;
- (void)hideDetailsForTransitionScreenShot;
- (void)editableImageScrollViewDidReceiveSingleTap:(id)arg1;
- (void)toggleIndexDidChange:(id)arg1;
@property(nonatomic) unsigned long long editableVideoPresentationFormat;
- (void)updateGIFButtonAnimated:(_Bool)arg1;
- (struct CGSize)videoScrubberThumbnailAspectRatio:(id)arg1;
- (void)videoScrubber:(id)arg1 videoFramesAtTimes:(id)arg2 size:(struct CGSize)arg3 tolerance:(CDStruct_1b6d18a9)arg4 block:(CDUnknownBlockType)arg5;
- (void)videoScrubberDidEndScrubbing:(id)arg1;
- (void)videoScrubberDidChangeCurrentTime:(id)arg1;
- (void)videoScrubberDidBeginScrubbing:(id)arg1 pausePlayback:(_Bool)arg2;
- (void)videoScrubberDidChangeSlowMotionTimeRange:(id)arg1;
- (void)videoScrubberDidChangeTrimmedTimeRange:(id)arg1;
- (void)autoPlayVideoPlayerDidUpdateContentSize:(id)arg1;
- (void)autoPlayVideoPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerDidEndScrubbing:(id)arg1;
- (void)mediaPlayerDidBeginScrubbing:(id)arg1;
- (void)mediaPlayerDidFinishLoading:(id)arg1;
- (void)mediaPlayerDidPlayToEndTime:(id)arg1;
- (void)mediaPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerStatusDidChange:(id)arg1;
- (void)mediaPlayerDidRequestPlaybackStart:(id)arg1;
- (void)resetRenderingInProgress;
- (void)didRenderContent;
- (void)willRenderContent;
@property(nonatomic, getter=isAudioMuted) _Bool audioMuted;
- (void)endPausingMediaPlayback;
- (void)beginPausingMediaPlayback;
- (_Bool)isPausingMediaPlayback;
- (void)updateAutoPlayDisabledState;
- (void)updatePreviewInterfaceLayout;
- (void)regenerateThumbnailsIfNeeded;
- (void)setNeedsRegenerateThumbnails;
- (void)didChangeMediaItemCrop;
- (void)setFiltering:(_Bool)arg1;
- (void)setCropping:(_Bool)arg1;
- (void)didUpdatePresentedSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)stopPresentation;
- (void)didScroll;
- (void)setScrolling:(_Bool)arg1;
- (void)setKeyboardHidden:(_Bool)arg1;
- (void)updateMediaPlayerPlaybackTimeRange;
- (void)updateThumb;
- (void)didEndEditingTextItem;
- (void)willBeginEditingTextItem;
- (void)configureWithItem:(id)arg1;
- (void)willChangeCurrentMediaItemToMediaItem:(id)arg1;
- (void)destroyPlayerElements;
- (void)createPlayerElementsIfNeeded;
- (void)updateMediaPlayerPlayButtonBehavior;
- (_Bool)isDurationTrimable:(CDStruct_1b6d18a9)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)viewTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) WAMediaPlayer *mediaPlayer;
- (void)dealloc;
- (id)newVideoGIFToggle;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMultiSendEditableVideo *currentMediaItem; // @dynamic currentMediaItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

