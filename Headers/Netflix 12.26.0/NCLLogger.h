//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;
@protocol NCLMetricDelegate, NCLUploadDelegate, OS_dispatch_queue;

@interface NCLLogger : NSObject
{
    long long _MAX_BITS_COUNT;
    long long _INCREMENTING_BITS_COUNT;
    long long _RANDOM_BITS_COUNT;
    long long _INCREMENTING_BITS_MASK;
    long long _RANDOM_BITS_SHIFT;
    long long _lastIncrementingBits;
    NSDictionary *_CL_TYPES;
    long long _sequence;
    NSNumber *_logSessionId;
    NSString *_source;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool flushOnInterval;
    id <NCLUploadDelegate> _delegate;
    id <NCLMetricDelegate> _metricDelegate;
    NSNumber *_batchSize;
    NSNumber *_batchInterval;
    NSMutableArray *_reverseDeltas;
    NSMutableArray *_currentDelta;
    NSMutableDictionary *_pendingContexts;
    NSMutableDictionary *_currentContexts;
    NSNumber *_initialContextId;
}

+ (id)logger;
@property(retain, nonatomic) NSNumber *initialContextId; // @synthesize initialContextId=_initialContextId;
@property(retain, nonatomic) NSMutableDictionary *currentContexts; // @synthesize currentContexts=_currentContexts;
@property(retain, nonatomic) NSMutableDictionary *pendingContexts; // @synthesize pendingContexts=_pendingContexts;
@property(retain, nonatomic) NSMutableArray *currentDelta; // @synthesize currentDelta=_currentDelta;
@property(retain, nonatomic) NSMutableArray *reverseDeltas; // @synthesize reverseDeltas=_reverseDeltas;
@property(retain, nonatomic) NSNumber *batchInterval; // @synthesize batchInterval=_batchInterval;
@property(retain, nonatomic) NSNumber *batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) __weak id <NCLMetricDelegate> metricDelegate; // @synthesize metricDelegate=_metricDelegate;
@property(nonatomic) __weak id <NCLUploadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)severWithFlushCompletion:(CDUnknownBlockType)arg1;
- (void)sever;
- (id)serialize;
- (void)end;
- (void)queueNextBatch;
- (void)start;
- (void)_flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)flush;
- (void)snapshot:(id)arg1;
- (id)endSession:(id)arg1 withDataReturnPayload:(id)arg2;
- (id)endSession:(id)arg1 withData:(id)arg2;
- (id)endSession:(id)arg1;
- (id)startSession:(id)arg1;
- (id)startSession:(id)arg1 withData:(id)arg2;
- (id)logEvent:(id)arg1;
- (id)createDebugObjectWithData:(id)arg1;
- (id)logEvent:(id)arg1 withData:(id)arg2;
- (id)createEventContext:(id)arg1 withData:(id)arg2;
- (void)removeContext:(id)arg1;
- (id)addContext:(id)arg1;
- (id)addContext:(id)arg1 withData:(id)arg2;
- (double)getClientTimeInMS;
- (id)getNextContextId;
- (void)configure:(id)arg1;
- (void)configureWithState:(id)arg1;
- (void)initState;
- (id)init;

@end

