//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveVideoDataOutput-Protocol.h"

@class HTSLiveStatsApi, IESLiveBroadCaster, LiveRoomModel, NSString;
@protocol HTSLiveAnchorActions, HTSLiveKTVProtocol, HTSLiveRecordStreamerDelegate, HTSLiveStreamEngineProvider, IESLiveCamera, IESLiveEnvironment, IESLiveSettings, IESLiveToastFactory, IESLiveUserService;

@interface HTSLiveRecordStreamer : NSObject <HTSLiveVideoDataOutput>
{
    _Bool _mute;
    _Bool _isDisconnecting;
    _Bool _offNetwork;
    long long _realTransportBitrate;
    id <HTSLiveRecordStreamerDelegate> _delegate;
    id <HTSLiveAnchorActions> _anchorActionsDispatcher;
    NSString *_urlString;
    LiveRoomModel *_liveRoomModel;
    long long _contentType;
    id <IESLiveCamera> _camera;
    IESLiveBroadCaster *_broadCaster;
    HTSLiveStatsApi *_logger;
    id <IESLiveSettings> _settings;
    id <IESLiveUserService> _userService;
    id <HTSLiveStreamEngineProvider> _streamEngineProvider;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveEnvironment> _environment;
}

@property(nonatomic) _Bool offNetwork; // @synthesize offNetwork=_offNetwork;
@property(retain, nonatomic) id <IESLiveEnvironment> environment; // @synthesize environment=_environment;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(nonatomic) __weak id <HTSLiveStreamEngineProvider> streamEngineProvider; // @synthesize streamEngineProvider=_streamEngineProvider;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) HTSLiveStatsApi *logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool isDisconnecting; // @synthesize isDisconnecting=_isDisconnecting;
@property(retain, nonatomic) IESLiveBroadCaster *broadCaster; // @synthesize broadCaster=_broadCaster;
@property(retain, nonatomic) id <IESLiveCamera> camera; // @synthesize camera=_camera;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) LiveRoomModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) id <HTSLiveAnchorActions> anchorActionsDispatcher; // @synthesize anchorActionsDispatcher=_anchorActionsDispatcher;
@property(nonatomic) __weak id <HTSLiveRecordStreamerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long realTransportBitrate; // @synthesize realTransportBitrate=_realTransportBitrate;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
- (void).cxx_destruct;
@property(nonatomic) long long maxTransportBitrate;
@property(nonatomic) long long minTransportBitrate;
- (id)outputInfoString;
- (CDStruct_5706cf93)outputConfig;
- (_Bool)running;
- (void)startOutput;
- (void)stopOutputWithNext:(CDUnknownBlockType)arg1;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (void)writePixelBuffer:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) __weak id <HTSLiveKTVProtocol> ktv;
- (void)stop;
- (void)start;
- (id)configWithRoom:(id)arg1;
- (id)optimizedURLWithOriginalURL:(id)arg1;
- (void)onNetworkStatusChanged:(id)arg1;
- (void)loadBroadCaster;
- (void)refreshModel:(id)arg1;
- (id)initWithLiveRoomModel:(id)arg1 contentType:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
