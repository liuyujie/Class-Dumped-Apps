//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaUploadListener-Protocol.h>

@class IGFBMediaUploadListenerWrapper, NSString;
@protocol FBMediaUploadJob, IGNetworking, OS_dispatch_queue;

@interface IGImageUploader : NSObject <FBMediaUploadListener>
{
    id <IGNetworking> _networker;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
    id <FBMediaUploadJob> _uploadJob;
    IGFBMediaUploadListenerWrapper *_uploadJobListener;
}

- (void).cxx_destruct;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(CDStruct_60aa3504)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(_Bool)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3;
- (void)_cleanup;
- (void)_detectWhiteImageWithData:(id)arg1 fbUploadJobId:(id)arg2;
- (id)_fbMediaUploadConfigWithFbUploadJobId:(id)arg1 uploadParams:(id)arg2 imageUploadConfig:(id)arg3 imageEncoding:(id)arg4;
- (void)cancel;
- (void)uploadWithImageEncoding:(id)arg1 imageUploadConfig:(id)arg2 fbUploadJobId:(id)arg3 uploadParams:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 callBackQueue:(id)arg7 launcherSetProviding:(id)arg8;
- (id)initWithNetworker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

