//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface YTIYPCCompleteTransactionEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(copy, nonatomic) NSString *gtmData; // @dynamic gtmData;
@property(nonatomic) _Bool hasGtmData; // @dynamic hasGtmData;
@property(nonatomic) _Bool hasSerializedTransactionFlowLoggingParams; // @dynamic hasSerializedTransactionFlowLoggingParams;
@property(nonatomic) _Bool hasTransactionParams; // @dynamic hasTransactionParams;
@property(copy, nonatomic) NSData *serializedTransactionFlowLoggingParams; // @dynamic serializedTransactionFlowLoggingParams;
@property(copy, nonatomic) NSString *transactionParams; // @dynamic transactionParams;

@end
