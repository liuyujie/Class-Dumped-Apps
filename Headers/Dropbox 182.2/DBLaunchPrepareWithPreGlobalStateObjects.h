//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBLaunchPrepare.h"

@class DBSetupPreGlobalStateObjectsOperation;

@interface DBLaunchPrepareWithPreGlobalStateObjects : DBLaunchPrepare
{
    DBSetupPreGlobalStateObjectsOperation *_setupOperation;
}

- (void).cxx_destruct;
- (void)setupWithDependentOperation:(id)arg1;
- (id)preGlobalStateObjects;
- (void)start;

@end

