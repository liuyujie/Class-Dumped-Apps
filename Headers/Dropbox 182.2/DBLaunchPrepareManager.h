//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface DBLaunchPrepareManager : NSObject
{
    NSMutableDictionary *_aggregatedLogParams;
    unsigned long long _numLaunchPreparesQueued;
    CDUnknownBlockType _appDelegateUpdateBlock;
    CDUnknownBlockType _onComplete;
    NSOperationQueue *_launchPrepareSerialQueue;
}

+ (id)db_defaultLaunchPrepareChecks;
- (void).cxx_destruct;
- (unsigned long long)numLaunchPreparesQueued;
- (unsigned long long)currentOperationCount;
- (id)db_setupCheckOperationWithClass:(Class)arg1 outOperationsArray:(id)arg2 outAlreadySetupOperationDict:(id)arg3 application:(id)arg4 options:(id)arg5 window:(id)arg6;
- (id)db_setupLaunchPrepareOperationsWithClasses:(id)arg1 application:(id)arg2 options:(id)arg3 window:(id)arg4;
- (id)db_allLogParams;
- (void)db_addLogParams:(id)arg1;
- (id)initWithApplication:(id)arg1 options:(id)arg2 window:(id)arg3 prepareChecks:(id)arg4 internalAppDelegateUpdate:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithApplication:(id)arg1 options:(id)arg2 window:(id)arg3 internalAppDelegateUpdate:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

