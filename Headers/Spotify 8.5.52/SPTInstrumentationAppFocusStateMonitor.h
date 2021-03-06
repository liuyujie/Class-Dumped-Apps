//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationRemotePlayingObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSNotificationCenter, NSString, SPTInstrumentationDeviceClock;
@protocol SPTInstrumentationRemotePlayingHandler, SPTInstrumentationTransport, SPTPlayer;

@interface SPTInstrumentationAppFocusStateMonitor : NSObject <SPTPlayerObserver, SPTInstrumentationRemotePlayingObserver>
{
    _Bool _inBackground;
    _Bool _playerIsPlaying;
    _Bool _gaiaIsPlayingRemotely;
    id <SPTInstrumentationTransport> _transport;
    SPTInstrumentationDeviceClock *_clock;
    NSNotificationCenter *_notificationCenter;
    id <SPTPlayer> _player;
    id <SPTInstrumentationRemotePlayingHandler> _remotePlayingHandler;
    NSString *_lastState;
}

@property(copy, nonatomic) NSString *lastState; // @synthesize lastState=_lastState;
@property(nonatomic) _Bool gaiaIsPlayingRemotely; // @synthesize gaiaIsPlayingRemotely=_gaiaIsPlayingRemotely;
@property(nonatomic) _Bool playerIsPlaying; // @synthesize playerIsPlaying=_playerIsPlaying;
@property(nonatomic, getter=isInBackground) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(retain, nonatomic) id <SPTInstrumentationRemotePlayingHandler> remotePlayingHandler; // @synthesize remotePlayingHandler=_remotePlayingHandler;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) SPTInstrumentationDeviceClock *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) id <SPTInstrumentationTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)remotePlayingStateChanged:(_Bool)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)willTerminateOrLogOutNotification:(id)arg1;
- (void)applicationResignedNotification:(id)arg1;
- (void)applicationActivatedNotification:(id)arg1;
- (void)updateState;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 clock:(id)arg2 loginStateController:(id)arg3 player:(id)arg4 remotePlayingHandler:(id)arg5 notificationCenter:(id)arg6 applicationState:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

