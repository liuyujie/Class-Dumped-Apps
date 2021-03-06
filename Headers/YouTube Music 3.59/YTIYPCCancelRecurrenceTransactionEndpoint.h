//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIYPCSurveyFeedbackData;

@interface YTIYPCCancelRecurrenceTransactionEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cancelParams; // @dynamic cancelParams;
@property(retain, nonatomic) YTIYPCSurveyFeedbackData *feedbackData; // @dynamic feedbackData;
@property(nonatomic) _Bool hasCancelParams; // @dynamic hasCancelParams;
@property(nonatomic) _Bool hasFeedbackData; // @dynamic hasFeedbackData;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasSerializedYpcCancelFlowLoggingParams; // @dynamic hasSerializedYpcCancelFlowLoggingParams;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(copy, nonatomic) NSData *serializedYpcCancelFlowLoggingParams; // @dynamic serializedYpcCancelFlowLoggingParams;

@end

