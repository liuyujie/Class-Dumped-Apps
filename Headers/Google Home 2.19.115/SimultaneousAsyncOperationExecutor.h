//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AsyncOperationDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface SimultaneousAsyncOperationExecutor : NSObject <AsyncOperationDelegate>
{
    id _delegate;
    unsigned long long _currentOperationIndex;
    _Bool _didStartExecution;
    _Bool _isCancelled;
    NSMutableArray *_currentlyExecutingOperations;
    NSMutableArray *_errors;
    _Bool _isSuccessful;
    NSArray *_operations;
}

@property(retain, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(nonatomic) _Bool isSuccessful; // @synthesize isSuccessful=_isSuccessful;
- (void).cxx_destruct;
- (void)asyncOperation:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancel;
- (void)executeOperations;
- (void)notifyOperationsDidFinish;
- (void)execute;
- (id)initWithOperations:(id)arg1 delegate:(id)arg2;
- (id)analyticsEventsInContext:(long long)arg1 basedOnAnalyticsEvent:(id)arg2;
- (id)analyticsEventsInContext:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

