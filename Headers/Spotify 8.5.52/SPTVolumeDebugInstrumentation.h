//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplication;
@protocol SPTEventSender, SPTGaiaConnectAPI, SPTGaiaLockScreenControlsStateProvider;

@interface SPTVolumeDebugInstrumentation : NSObject
{
    id <SPTGaiaConnectAPI> _connectManager;
    UIApplication *_application;
    id <SPTGaiaLockScreenControlsStateProvider> _lockscreenControlStateProvider;
    id <SPTEventSender> _eventSender;
}

@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic) id <SPTGaiaLockScreenControlsStateProvider> lockscreenControlStateProvider; // @synthesize lockscreenControlStateProvider=_lockscreenControlStateProvider;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
- (void).cxx_destruct;
- (void)sendEventWithAction:(id)arg1 parameter:(id)arg2 deviceId:(id)arg3 volume:(id)arg4 appState:(id)arg5;
- (id)currentAppState;
- (id)activeDeviceId;
- (void)logVolumeSyncUpdated:(_Bool)arg1;
- (void)logRemoteVolumeReceivedFrom:(id)arg1 volume:(double)arg2;
- (void)logSystemVolumeUpdatedWithReason:(id)arg1 volume:(double)arg2;
- (void)logSendVolumeCommand:(id)arg1 volume:(double)arg2;
- (void)logSetSystemVolumeWithReason:(id)arg1 volume:(double)arg2;
- (id)initWithConnectManager:(id)arg1 application:(id)arg2 lockscreenControlStateProvider:(id)arg3 eventSender:(id)arg4;

@end

