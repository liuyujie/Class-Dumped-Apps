//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ORCH2ApiRequestData, ORCH2DataValueChangeData, ORCH2EventRuleEvaluationData, ORCH2FunctionalDataValueChangeData, ORCH2PrefetchedInitializeData;

@interface ORCH2Event : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2ApiRequestData *apiRequestData; // @dynamic apiRequestData;
@property(nonatomic) long long clientSessionId; // @dynamic clientSessionId;
@property(nonatomic) long long dataReference; // @dynamic dataReference;
@property(retain, nonatomic) ORCH2DataValueChangeData *dataValueChangeData; // @dynamic dataValueChangeData;
@property(retain, nonatomic) ORCH2EventRuleEvaluationData *eventRuleEvaluationData; // @dynamic eventRuleEvaluationData;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(retain, nonatomic) ORCH2FunctionalDataValueChangeData *functionalDataValueChangeData; // @dynamic functionalDataValueChangeData;
@property(nonatomic) _Bool hasClientSessionId; // @dynamic hasClientSessionId;
@property(nonatomic) _Bool hasDataReference; // @dynamic hasDataReference;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasResult; // @dynamic hasResult;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(readonly, nonatomic) int logDataOneOfCase; // @dynamic logDataOneOfCase;
@property(retain, nonatomic) ORCH2PrefetchedInitializeData *prefetchedInitializeData; // @dynamic prefetchedInitializeData;
@property(nonatomic) int result; // @dynamic result;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

