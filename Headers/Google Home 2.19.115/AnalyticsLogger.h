//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AnalyticsLogger-Protocol.h"
#import "AnalyticsSink-Protocol.h"

@class NSString;
@protocol AnalyticsSink;

@interface AnalyticsLogger : NSObject <AnalyticsLogger, AnalyticsSink>
{
    int _sessionID;
    id <AnalyticsSink> _sink;
    NSString *_userID;
}

@property int sessionID; // @synthesize sessionID=_sessionID;
@property(retain) NSString *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) id <AnalyticsSink> sink; // @synthesize sink=_sink;
- (void).cxx_destruct;
- (void)flush;
- (void)logEventWithType:(int)arg1;
- (void)logEventWithType:(int)arg1 startTime:(double)arg2 duration:(double)arg3 value:(id)arg4 count:(id)arg5;
- (void)logEvents:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)completeEvent:(id)arg1 value:(id)arg2 count:(id)arg3;
- (id)startEventOfType:(int)arg1;
- (void)setCurrentIdentity:(id)arg1;
- (void)startNewSession;
- (id)initWithAnalyticsSink:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

