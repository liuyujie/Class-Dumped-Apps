//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGImageEncoding, IGUserSession, NSDictionary, NSString;
@protocol IGNetworking, IGPostAnalyticsProvider, IGUploadTaskListener, IGUserLauncherSetProviding, OS_dispatch_queue;

@interface IGUploadCoverPhotoOperationFactory : NSObject
{
    NSString *_taskId;
    NSString *_uploadId;
    NSString *_waterfallId;
    NSDictionary *_uploadParams;
    id <IGNetworking> _networker;
    NSObject<OS_dispatch_queue> *_executingQueue;
    IGUserSession *_userSession;
    id <IGPostAnalyticsProvider> _analyticsProvider;
    id <IGUploadTaskListener> _uploadTaskListener;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    IGImageEncoding *_coverImageEncoding;
}

@property(retain, nonatomic) IGImageEncoding *coverImageEncoding; // @synthesize coverImageEncoding=_coverImageEncoding;
- (void).cxx_destruct;
- (id)createOperation;
- (id)initWithTaskId:(id)arg1 uploadId:(id)arg2 waterfallId:(id)arg3 uploadParams:(id)arg4 networker:(id)arg5 executingQueue:(id)arg6 userSession:(id)arg7 analyticsProvider:(id)arg8 uploadTaskListener:(id)arg9 launcherSetProvider:(id)arg10;

@end

