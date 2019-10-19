//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class GLUEEntityRowCollectionViewCell, SPTAssistedCurationGLUETheme, UITapGestureRecognizer;
@protocol GLUEImageLoader, HUBComponentEventHandler, SPTAudioPreviewModelFactory, SPTAudioPreviewUIFactory, SPTExplicitContentAccessManager;

@interface SPTAssistedCurationTrackItemComponentView : HUBComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    SPTAssistedCurationGLUETheme *_theme;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <GLUEImageLoader> _glueImageLoader;
    GLUEEntityRowCollectionViewCell *_trackCell;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) GLUEEntityRowCollectionViewCell *trackCell; // @synthesize trackCell=_trackCell;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(readonly, nonatomic) SPTAssistedCurationGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)didClickAddButton;
- (void)onTapGesture:(id)arg1;
- (void)stopPreview;
- (void)playPreview;
- (_Bool)isPlaybackRestricted;
- (_Bool)isExplicit;
- (id)trackURI;
- (void)setupSubtitleAccessoryView;
- (void)setupTrailingAccessoryView;
- (void)setupLeadingAccessoryView;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 audioPreviewModelFactory:(id)arg2 audioPreviewUIFactory:(id)arg3 explicitContentAccessManager:(id)arg4 glueImageLoader:(id)arg5 theme:(id)arg6;

@end
