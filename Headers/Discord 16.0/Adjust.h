//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADJSavedPreLaunch;
@protocol ADJActivityHandler, ADJLogger;

@interface Adjust : NSObject
{
    id <ADJLogger> _logger;
    id <ADJActivityHandler> _activityHandler;
    ADJSavedPreLaunch *_savedPreLaunch;
}

+ (void)setTestOptions:(id)arg1;
+ (id)adid;
+ (id)attribution;
+ (void)gdprForgetMe;
+ (void)resetSessionPartnerParameters;
+ (void)resetSessionCallbackParameters;
+ (void)removeSessionPartnerParameter:(id)arg1;
+ (void)removeSessionCallbackParameter:(id)arg1;
+ (void)addSessionPartnerParameter:(id)arg1 value:(id)arg2;
+ (void)addSessionCallbackParameter:(id)arg1 value:(id)arg2;
+ (void)sendFirstPackages;
+ (id)convertUniversalLink:(id)arg1 scheme:(id)arg2;
+ (id)sdkVersion;
+ (id)idfa;
+ (void)sendAdWordsRequest;
+ (void)setOfflineMode:(_Bool)arg1;
+ (void)setPushToken:(id)arg1;
+ (void)setDeviceToken:(id)arg1;
+ (void)appWillOpenUrl:(id)arg1;
+ (_Bool)isEnabled;
+ (void)setEnabled:(_Bool)arg1;
+ (void)trackSubsessionEnd;
+ (void)trackSubsessionStart;
+ (void)trackEvent:(id)arg1;
+ (void)appDidLaunch:(id)arg1;
+ (id)getInstance;
@property(retain, nonatomic) ADJSavedPreLaunch *savedPreLaunch; // @synthesize savedPreLaunch=_savedPreLaunch;
@property(retain, nonatomic) id <ADJActivityHandler> activityHandler; // @synthesize activityHandler=_activityHandler;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (_Bool)isInstanceEnabled;
- (_Bool)checkActivityHandler:(id)arg1;
- (_Bool)checkActivityHandler:(_Bool)arg1 trueMessage:(id)arg2 falseMessage:(id)arg3;
- (_Bool)checkActivityHandler;
- (void)setTestOptions:(id)arg1;
- (void)teardown;
- (id)sdkVersion;
- (id)adid;
- (id)attribution;
- (void)gdprForgetMe;
- (void)resetSessionPartnerParameters;
- (void)resetSessionCallbackParameters;
- (void)removeSessionPartnerParameter:(id)arg1;
- (void)removeSessionCallbackParameter:(id)arg1;
- (void)addSessionPartnerParameter:(id)arg1 value:(id)arg2;
- (void)addSessionCallbackParameter:(id)arg1 value:(id)arg2;
- (void)sendFirstPackages;
- (id)convertUniversalLink:(id)arg1 scheme:(id)arg2;
- (id)idfa;
- (void)setOfflineMode:(_Bool)arg1;
- (void)setPushToken:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)appWillOpenUrl:(id)arg1;
- (_Bool)isEnabled;
- (void)setEnabled:(_Bool)arg1;
- (void)trackSubsessionEnd;
- (void)trackSubsessionStart;
- (void)trackEvent:(id)arg1;
- (void)appDidLaunch:(id)arg1;
- (id)init;

@end

