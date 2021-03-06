//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBXDeviceCrashesDatabase, NSMutableArray;
@protocol OS_dispatch_queue;

@interface DBXDeviceCrashesModel : NSObject
{
    NSMutableArray *_listenerWrappers;
    DBXDeviceCrashesDatabase *_db;
    NSObject<OS_dispatch_queue> *_db_queue;
}

- (void).cxx_destruct;
- (void)dbx_purgeDeadListeners;
- (id)dbx_wrapperForListener:(id)arg1;
- (void)dbx_updateListeners;
- (void)listCrashInfos:(CDUnknownBlockType)arg1;
- (void)setDiagnosticMessage:(id)arg1 forEventId:(id)arg2;
- (void)setDetailsURI:(id)arg1 forEventId:(id)arg2;
- (void)transitionCrashWithEventId:(id)arg1 toState:(int)arg2;
- (void)insertNewCrashWithEventID:(id)arg1;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (id)init;

@end

