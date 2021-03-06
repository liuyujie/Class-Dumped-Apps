//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, XsgClientResolution, XsgGamePad, XsgMediaCommand, XsgMessageTarget, XsgReconnectPolicy;
@protocol XsgPrimaryDevice, XsgPrimaryDeviceState;

@protocol XsgSessionManager <NSObject>
@property(readonly) NSArray *mediaStates;
@property(readonly) NSArray *activeTitles;
@property(readonly) unsigned short pairedIdentityState;
@property(readonly) unsigned int connectionState;
@property(readonly) XsgClientResolution *clientResolution;
@property(readonly) id <XsgPrimaryDeviceState> primaryDeviceState;
@property(readonly) id <XsgPrimaryDevice> primaryDevice;
@property(readonly) NSString *virtualDeviceId;
- (NSError *)getAuxiliaryStream:(unsigned int)arg1 auxiliaryStream:(id *)arg2;
- (NSError *)sendMediaCommand:(XsgMediaCommand *)arg1;
- (NSError *)sendGamePad:(XsgGamePad *)arg1 simulateButtonPress:(_Bool)arg2;
- (NSError *)sendTitleMessage:(NSString *)arg1 target:(XsgMessageTarget *)arg2;
- (NSError *)unsnap;
- (NSError *)launchUri:(NSString *)arg1 location:(unsigned short)arg2;
- (NSError *)launchTitle:(unsigned int)arg1 withParameters:(NSString *)arg2 location:(unsigned short)arg3;
- (NSError *)stopChannel:(XsgMessageTarget *)arg1;
- (NSError *)startChannel:(XsgMessageTarget *)arg1 withActivityId:(unsigned int)arg2;
- (void)disconnect;
- (NSError *)connectWithResolution:(XsgClientResolution *)arg1 reconnectPolicy:(XsgReconnectPolicy *)arg2;
- (NSError *)connectToAddress:(NSString *)arg1 resolution:(XsgClientResolution *)arg2 reconnectPolicy:(XsgReconnectPolicy *)arg3;
- (NSError *)connectToSpecificDevice:(id <XsgPrimaryDevice>)arg1 resolution:(XsgClientResolution *)arg2 reconnectPolicy:(XsgReconnectPolicy *)arg3;
@end

