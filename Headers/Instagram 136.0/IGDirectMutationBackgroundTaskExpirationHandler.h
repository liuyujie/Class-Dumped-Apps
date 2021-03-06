//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectMutationRequestCoordinationCache, IGDirectMutationRequestStateStore, NSString;
@protocol IGAPIClient;

@interface IGDirectMutationBackgroundTaskExpirationHandler : NSObject
{
    IGDirectMutationRequestStateStore *_requestStateStore;
    IGDirectMutationRequestCoordinationCache *_processorCache;
    id <IGAPIClient> _networker;
    CDUnknownBlockType _shouldScheduleOffProcess;
    CDUnknownBlockType _timeProvider;
    double _offProessNetworkingTimeout;
    NSString *_userPk;
}

- (void).cxx_destruct;
- (void)_fireOffProcessNetworkRequestForMutationId:(id)arg1 withRequest:(id)arg2 logger:(id)arg3;
- (void)_fireOffProcessNetworkRequestForMutationIdIfPossible:(id)arg1;
- (void)handleExpiredBackgroundTask;
- (id)initWithRequestStateStore:(id)arg1 processorOrchestrationCache:(id)arg2 timeProvider:(CDUnknownBlockType)arg3 shouldScheduleOffProcess:(CDUnknownBlockType)arg4 offProessNetworkingTimeout:(double)arg5 networker:(id)arg6 userPk:(id)arg7;

@end

