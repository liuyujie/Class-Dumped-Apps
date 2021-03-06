//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AnalyticsLogger-Protocol.h"
#import "AnalyticsSink-Protocol.h"

@class CastSSIDSuffix, NSNumber, NSString;
@protocol AnalyticsSink;

@interface SetupAnalyticsLogger : NSObject <AnalyticsLogger, AnalyticsSink>
{
    _Bool _linkingAccountOnly;
    int _setupSessionID;
    int _predefinedSessionID;
    int _sequenceID;
    int _connectionType;
    int _currentPageID;
    int _flowType;
    id <AnalyticsSink> _analyticsSink;
    CastSSIDSuffix *_SSIDSuffix;
    NSString *_UMAClientID;
    NSString *_hotspotBSSID;
    NSString *_build;
    NSNumber *_sendUsageStatsOptedOutBoolValue;
}

+ (id)isSendStatsOptedOutForOptIn:(id)arg1;
+ (id)hotspotBSSIDHashSalt;
+ (int)generateSequenceOrRequestID;
+ (int)generateSetupSessionID;
@property(retain, nonatomic) NSNumber *sendUsageStatsOptedOutBoolValue; // @synthesize sendUsageStatsOptedOutBoolValue=_sendUsageStatsOptedOutBoolValue;
@property(nonatomic) int flowType; // @synthesize flowType=_flowType;
@property(nonatomic, getter=isLinkingAccountOnly) _Bool linkingAccountOnly; // @synthesize linkingAccountOnly=_linkingAccountOnly;
@property(nonatomic) int currentPageID; // @synthesize currentPageID=_currentPageID;
@property(copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(copy, nonatomic) NSString *hotspotBSSID; // @synthesize hotspotBSSID=_hotspotBSSID;
@property(copy, nonatomic) NSString *UMAClientID; // @synthesize UMAClientID=_UMAClientID;
@property(retain, nonatomic) CastSSIDSuffix *SSIDSuffix; // @synthesize SSIDSuffix=_SSIDSuffix;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) int sequenceID; // @synthesize sequenceID=_sequenceID;
@property(readonly, nonatomic) id <AnalyticsSink> analyticsSink; // @synthesize analyticsSink=_analyticsSink;
@property(nonatomic) int predefinedSessionID; // @synthesize predefinedSessionID=_predefinedSessionID;
@property(nonatomic) int setupSessionID; // @synthesize setupSessionID=_setupSessionID;
- (void).cxx_destruct;
- (void)logManagerOnboardingAction:(int)arg1;
- (void)completeRequest:(id)arg1 error:(id)arg2 count:(id)arg3;
- (id)startRequestOfType:(int)arg1;
- (void)logEventWithType:(int)arg1 userActionType:(int)arg2;
- (void)logEventWithType:(int)arg1;
- (void)logEventWithType:(int)arg1 startTime:(double)arg2 duration:(double)arg3 value:(id)arg4 count:(id)arg5;
- (void)completeEvent:(id)arg1 value:(id)arg2 count:(id)arg3;
- (id)startEventOfType:(int)arg1;
- (void)flush;
- (void)logEvents:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)logPageOut:(int)arg1;
- (void)logPageIn;
- (void)logContinueToPage:(int)arg1;
- (void)logLeavePage:(int)arg1;
- (void)logPageShown:(int)arg1;
- (_Bool)isGaiaSetupSession;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (id)createEventWithCurrentPageID;
- (void)logEventsForQueue:(id)arg1 context:(long long)arg2;
- (id)createUserActionOfType:(int)arg1;
- (id)createAnalyticsEvent;
- (void)startNestAwareSetupSession;
- (void)startNewmanNestCamSetupWithDevice:(id)arg1;
- (void)startDigitalWellbeingSetupSession;
- (void)startStandaloneSmartDeviceSession;
- (void)startSmartDeviceSessionDuringOOBE;
- (void)startManagerSetupSession;
- (void)startPersonalizationWithDevice:(id)arg1;
- (void)startSetupSessionWithBluetoothDevice:(id)arg1;
- (void)startSetupSessionWithDevice:(id)arg1;
- (void)createPredefinedSessionID;
- (int)getPredefinedSessionIdOrGenerateSetupSessionID;
- (void)reset;
- (void)resetDevice;
- (void)dealloc;
- (id)initWithAnalyticsSink:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

