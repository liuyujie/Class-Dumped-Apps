//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JETAccessPointGroup, NSDate, NSString;
@protocol JETGroupMutationTransaction;

@interface JETGroupUpdateOperation : NSObject
{
    NSString *_operationID;
    id <JETGroupMutationTransaction> _transaction;
    JETAccessPointGroup *_group;
    NSDate *_submissionTime;
}

@property(readonly, nonatomic) NSDate *submissionTime; // @synthesize submissionTime=_submissionTime;
@property(readonly, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) id <JETGroupMutationTransaction> transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOperationID:(id)arg1 group:(id)arg2 submissionTime:(id)arg3 transaction:(id)arg4;

@end

