//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, T1AudioPlayer, UIViewController;

@interface T1AudioPlayerManager : NSObject
{
    UIViewController *_presentingViewController;
    T1AudioPlayer *_audioPlayer;
    NSMutableDictionary *_anonymizedUserIds;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *anonymizedUserIds; // @synthesize anonymizedUserIds=_anonymizedUserIds;
@property(retain, nonatomic) T1AudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)invalidateAnonymizedUserIds;
- (id)_computeAnonymizedUserIdWithSalt:(id)arg1 userId:(long long)arg2;
- (id)_computeAnonymizedUserIdForPartner:(id)arg1 withAccount:(id)arg2 configuration:(id)arg3;
- (id)anonymizedUserIdForPartner:(id)arg1 withAccount:(id)arg2 configuration:(id)arg3;
- (id)playAudioPlaylist:(id)arg1 withDelegate:(id)arg2 configuration:(id)arg3 actionHandler:(id)arg4 account:(id)arg5 status:(id)arg6 cardData:(id)arg7 scribeBaseParameters:(id)arg8 partner:(id)arg9 fromViewController:(id)arg10 previewView:(id)arg11;
- (void)_disposeCurrentPlayer;
- (void)_willPresentViewController:(id)arg1;
- (void)_didSwitchAccount;
- (void)_applicationWillResign;
- (id)init;

@end
