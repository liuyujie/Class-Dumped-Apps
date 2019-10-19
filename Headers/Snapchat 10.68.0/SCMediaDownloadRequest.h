//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCanceling-Protocol.h"
#import "SCProgressReporting-Protocol.h"

@class NSString, SCMediaDownloadRequestGroup, SCSentinel;
@protocol OS_dispatch_queue, SCMediaDownloadLogger, SCProgressReceiving;

@interface SCMediaDownloadRequest : NSObject <SCCanceling, SCProgressReporting>
{
    id <SCMediaDownloadLogger> _logger;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionHandler;
    SCSentinel *_sentinel;
    double _requestCreatedTime;
    id <SCProgressReceiving> _progressReceiver;
    CDStruct_bac8f6e9 _mediaScenePath;
    SCMediaDownloadRequestGroup *_requestGroup;
}

@property(nonatomic) __weak SCMediaDownloadRequestGroup *requestGroup; // @synthesize requestGroup=_requestGroup;
@property(readonly, nonatomic) CDStruct_bac8f6e9 mediaScenePath; // @synthesize mediaScenePath=_mediaScenePath;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
- (void).cxx_destruct;
- (void)performWithStatus:(unsigned long long)arg1 data:(id)arg2 error:(id)arg3;
- (void)cancel;
@property(readonly, nonatomic) _Bool isCancelled;
- (id)initWithScenePath:(CDStruct_bac8f6e9)arg1 logger:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
