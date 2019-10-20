//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, LOTAnimationView, NSArray, NSString, UIImage, YYAnimatedImageView;

@interface AWERecordLoadingView : UIView <AVAudioPlayerDelegate>
{
    UIView *_bgView;
    YYAnimatedImageView *_gifLoadingView;
    UIImage *_gifImage;
    CDUnknownBlockType _completion;
    LOTAnimationView *_countDownAnimationView;
    AVAudioPlayer *_player;
    NSArray *_audioSegementName;
    long long _audioIndex;
}

@property(nonatomic) long long audioIndex; // @synthesize audioIndex=_audioIndex;
@property(retain, nonatomic) NSArray *audioSegementName; // @synthesize audioSegementName=_audioSegementName;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) LOTAnimationView *countDownAnimationView; // @synthesize countDownAnimationView=_countDownAnimationView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIImage *gifImage; // @synthesize gifImage=_gifImage;
@property(retain, nonatomic) YYAnimatedImageView *gifLoadingView; // @synthesize gifLoadingView=_gifLoadingView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)playerWithFirstAudioIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delayRecordMode:(long long)arg2 animationCompletion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
