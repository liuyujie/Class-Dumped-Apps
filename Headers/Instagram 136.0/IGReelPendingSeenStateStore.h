//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionObject-Protocol.h>

@class FBTimer, IGReelSeenStateFileManager, IGReelSeenStateUploader, NSMutableDictionary, NSString;
@protocol IGAnalyticsEventLoggingProtocol, OS_dispatch_queue;

@interface IGReelPendingSeenStateStore : NSObject <IGUserSessionObject>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    _Bool _uploadInBackgroundTask;
    NSString *_userSessionPK;
    IGReelSeenStateUploader *_uploader;
    IGReelSeenStateFileManager *_fileManager;
    FBTimer *_uploadTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pendingSeenStates;
}

@property(readonly, nonatomic) NSMutableDictionary *pendingSeenStates; // @synthesize pendingSeenStates=_pendingSeenStates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) FBTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(readonly, nonatomic) IGReelSeenStateFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) IGReelSeenStateUploader *uploader; // @synthesize uploader=_uploader;
@property(readonly, copy, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void).cxx_destruct;
- (void)_logSeenStateUpload:(id)arg1 error:(id)arg2;
- (void)_handleBackgroundPeriodicUpload;
- (void)_uploadSeenState:(id)arg1;
- (void)processSeenState:(id)arg1;
- (void)dealloc;
- (id)initWithUserSessionPK:(id)arg1 uploader:(id)arg2 fileManager:(id)arg3 analyticsLogger:(id)arg4 uploadInBackgroundTask:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

