//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKVoiceSearchSoundControllerDelegate-Protocol.h"

@class GSKVoiceSearchSoundController, NSString, UIImpactFeedbackGenerator;

@interface ASTUserFeedbackPlayer : NSObject <GSKVoiceSearchSoundControllerDelegate>
{
    _Bool _playing;
    GSKVoiceSearchSoundController *_soundController;
    UIImpactFeedbackGenerator *_vibrateGenerator;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIImpactFeedbackGenerator *vibrateGenerator; // @synthesize vibrateGenerator=_vibrateGenerator;
@property(retain, nonatomic) GSKVoiceSearchSoundController *soundController; // @synthesize soundController=_soundController;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (void).cxx_destruct;
- (id)deviceModelIdentifier;
- (id)modelVersionFromIdentifier:(id)arg1;
- (_Bool)isHapticFeedbackSupported;
- (void)didPlayUserFeedback;
- (void)playHapticVibrate;
- (void)vibrate;
- (void)voiceSearchSoundController:(id)arg1 didFinishPlaybackWithSoundType:(unsigned long long)arg2;
- (void)playSoundType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preloadSoundType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

