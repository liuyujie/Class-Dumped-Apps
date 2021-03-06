//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEDemaciaPlayerViewDelegate-Protocol.h"

@class AWEAwemePlayVideoPauseIcon, AWEDemaciaPlayerVideoModel, AWEDemaciaPlayerView, AWEURLModel, AWEVideoModel, NSDictionary, NSString, UIButton, UIImageView;
@protocol AWEVideoPlayProgressDelegate;

@interface AWEVideoPlaySimpleViewController : UIViewController <AWEDemaciaPlayerViewDelegate>
{
    AWEVideoModel *_video;
    AWEURLModel *_playURL;
    AWEURLModel *_coverURL;
    CDUnknownBlockType _loopHandler;
    NSDictionary *_eventParams;
    double _initPlayTime;
    id <AWEVideoPlayProgressDelegate> _playerDelegate;
    AWEAwemePlayVideoPauseIcon *_pauseIcon;
    UIButton *_closeButton;
    AWEDemaciaPlayerView *_playerView;
    AWEDemaciaPlayerVideoModel *_playerModel;
    double _playTime;
    UIImageView *_coverImageView;
    NSString *_imageURL;
}

@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(retain, nonatomic) AWEDemaciaPlayerVideoModel *playerModel; // @synthesize playerModel=_playerModel;
@property(retain, nonatomic) AWEDemaciaPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) AWEAwemePlayVideoPauseIcon *pauseIcon; // @synthesize pauseIcon=_pauseIcon;
@property(nonatomic) __weak id <AWEVideoPlayProgressDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) double initPlayTime; // @synthesize initPlayTime=_initPlayTime;
@property(copy, nonatomic) NSDictionary *eventParams; // @synthesize eventParams=_eventParams;
@property(copy, nonatomic) CDUnknownBlockType loopHandler; // @synthesize loopHandler=_loopHandler;
@property(retain, nonatomic) AWEURLModel *coverURL; // @synthesize coverURL=_coverURL;
@property(retain, nonatomic) AWEURLModel *playURL; // @synthesize playURL=_playURL;
@property(retain, nonatomic) AWEVideoModel *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)playerDidReadyForDisplay:(id)arg1;
- (void)demaciaPlayerPlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
@property(readonly, nonatomic) long long playState;
@property(nonatomic) _Bool repeated;
- (void)playerWillLoopPlaying:(id)arg1;
- (void)playerViewTapped:(id)arg1;
- (void)dismiss;
- (_Bool)pause;
- (_Bool)play;
- (void)loadImageUrl;
- (void)setupImage;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithCoverImage:(id)arg1;
- (id)initWithCoverImageURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

