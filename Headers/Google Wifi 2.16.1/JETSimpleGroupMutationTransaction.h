//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JETGroupMutationTransaction-Protocol.h"

@class NSMutableArray;

@interface JETSimpleGroupMutationTransaction : NSObject <JETGroupMutationTransaction>
{
    CDUnknownBlockType _performSaveOperation;
    CDUnknownBlockType _rollbackCallback;
    CDUnknownBlockType _successCallback;
    long long _transactionState;
    NSMutableArray *_mutations;
}

@property(readonly, nonatomic) NSMutableArray *mutations; // @synthesize mutations=_mutations;
@property(nonatomic) long long transactionState; // @synthesize transactionState=_transactionState;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(copy, nonatomic) CDUnknownBlockType rollbackCallback; // @synthesize rollbackCallback=_rollbackCallback;
@property(copy, nonatomic) CDUnknownBlockType performSaveOperation; // @synthesize performSaveOperation=_performSaveOperation;
- (void).cxx_destruct;
- (void)operationSucceededWithSavedGroup:(id)arg1;
- (void)performRollbackWithError:(id)arg1;
- (void)performSaveWithPendingGroupState:(id)arg1 halfcourtClient:(id)arg2 continuationCallback:(CDUnknownBlockType)arg3;
- (void)performMutationsOnPendingGroupState:(id)arg1;
- (id)init;
- (id)initWithMutations:(id)arg1;

@end

