//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PinholeParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URLPath; // @dynamic URLPath;
@property(retain, nonatomic) NSMutableArray *cgiParamsArray; // @dynamic cgiParamsArray;
@property(readonly, nonatomic) unsigned long long cgiParamsArray_Count; // @dynamic cgiParamsArray_Count;
@property(nonatomic) _Bool emitPrefetches; // @dynamic emitPrefetches;
@property(nonatomic) _Bool hasEmitPrefetches; // @dynamic hasEmitPrefetches;
@property(nonatomic) _Bool hasSendResultsAfterEndOfSpeech; // @dynamic hasSendResultsAfterEndOfSpeech;
@property(nonatomic) _Bool hasURLPath; // @dynamic hasURLPath;
@property(retain, nonatomic) NSMutableArray *headersArray; // @dynamic headersArray;
@property(readonly, nonatomic) unsigned long long headersArray_Count; // @dynamic headersArray_Count;
@property(nonatomic) _Bool sendResultsAfterEndOfSpeech; // @dynamic sendResultsAfterEndOfSpeech;

@end

