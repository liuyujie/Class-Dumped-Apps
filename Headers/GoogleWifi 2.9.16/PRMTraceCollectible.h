//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PRMCollectible.h"

#import "PRMDeferredCollectible-Protocol.h"
#import "PRMProvidableCollectible-Protocol.h"

@class NSString, PRMSpan;

@interface PRMTraceCollectible : PRMCollectible <PRMDeferredCollectible, PRMProvidableCollectible>
{
    _Bool _isPrivate;
    NSString *_name;
    PRMSpan *_rootSpan;
    unsigned long long _traceId;
}

+ (unsigned long long)collectibleType;
+ (void)addSpanToActiveTraces:(id)arg1;
+ (id)activateTraceWithEventName:(id)arg1 isPrivate:(_Bool)arg2;
+ (id)activateTraceWithEventName:(id)arg1;
+ (id)activeTraces;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) unsigned long long traceId; // @synthesize traceId=_traceId;
@property(readonly, nonatomic) PRMSpan *rootSpan; // @synthesize rootSpan=_rootSpan;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)stopCollecting;
- (void)startCollecting;
- (void)setup;
- (id)initWithName:(id)arg1 isPrivate:(_Bool)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

