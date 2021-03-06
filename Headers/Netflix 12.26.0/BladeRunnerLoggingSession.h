//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APIStateStore, NSString, WatchableInfo;
@protocol OS_dispatch_queue, PlatformLogger;

@interface BladeRunnerLoggingSession : NSObject
{
    _Bool _downloadStartSent;
    _Bool _cancelled;
    _Bool _isSmartDownload;
    long long _trackingId;
    NSString *_downloadDownloadContextId;
    NSString *_downloadInitiatedOfflineTransactionId;
    NSString *_downloadInitiatedDownloadTransactionId;
    NSString *_downloadInitiatedCdnId;
    unsigned long long _downloadInitiatedDownloadedServerCorrectedStartTime;
    unsigned long long _downloadInitiatedDownloadedNSDateStartTime;
    unsigned long long _downloadInitiatedStartByteOffset;
    unsigned long long _downloadInitiatedBytes;
    unsigned long long _downloadInitiatedDuration;
    id <PlatformLogger> _logging;
    NSString *_xid;
    NSString *_esn;
    NSString *_currentNetwork;
    WatchableInfo *_watchableInfo;
    NSString *_playbackId;
    APIStateStore *_stateStore;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)extractDownloadableIds:(id)arg1;
+ (id)contextString:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool isSmartDownload; // @synthesize isSmartDownload=_isSmartDownload;
@property(retain, nonatomic) APIStateStore *stateStore; // @synthesize stateStore=_stateStore;
@property(retain, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
@property(retain, nonatomic) WatchableInfo *watchableInfo; // @synthesize watchableInfo=_watchableInfo;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool downloadStartSent; // @synthesize downloadStartSent=_downloadStartSent;
@property(copy, nonatomic) NSString *currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property(copy, nonatomic) NSString *esn; // @synthesize esn=_esn;
@property(copy, nonatomic) NSString *xid; // @synthesize xid=_xid;
@property(nonatomic) __weak id <PlatformLogger> logging; // @synthesize logging=_logging;
@property(nonatomic) unsigned long long downloadInitiatedDuration; // @synthesize downloadInitiatedDuration=_downloadInitiatedDuration;
@property(nonatomic) unsigned long long downloadInitiatedBytes; // @synthesize downloadInitiatedBytes=_downloadInitiatedBytes;
@property(nonatomic) unsigned long long downloadInitiatedStartByteOffset; // @synthesize downloadInitiatedStartByteOffset=_downloadInitiatedStartByteOffset;
@property(nonatomic) unsigned long long downloadInitiatedDownloadedNSDateStartTime; // @synthesize downloadInitiatedDownloadedNSDateStartTime=_downloadInitiatedDownloadedNSDateStartTime;
@property(nonatomic) unsigned long long downloadInitiatedDownloadedServerCorrectedStartTime; // @synthesize downloadInitiatedDownloadedServerCorrectedStartTime=_downloadInitiatedDownloadedServerCorrectedStartTime;
@property(copy, nonatomic) NSString *downloadInitiatedCdnId; // @synthesize downloadInitiatedCdnId=_downloadInitiatedCdnId;
@property(copy, nonatomic) NSString *downloadInitiatedDownloadTransactionId; // @synthesize downloadInitiatedDownloadTransactionId=_downloadInitiatedDownloadTransactionId;
@property(copy, nonatomic) NSString *downloadInitiatedOfflineTransactionId; // @synthesize downloadInitiatedOfflineTransactionId=_downloadInitiatedOfflineTransactionId;
@property(copy, nonatomic) NSString *downloadDownloadContextId; // @synthesize downloadDownloadContextId=_downloadDownloadContextId;
@property(nonatomic) long long trackingId; // @synthesize trackingId=_trackingId;
- (void).cxx_destruct;
- (void)_logOfflineError:(id)arg1;
- (void)_logOfflineDLReport;
- (id)_baseDownloadLogblob;
- (void)sendDownloadActionEvent:(unsigned long long)arg1 withPayload:(id)arg2;
- (void)logDownloadError:(id)arg1 withPlaybackId:(id)arg2 context:(id)arg3;
- (void)logDownloadComplete:(unsigned long long)arg1;
- (void)logDownloadProgress:(long long)arg1;
- (void)logDownloadStart;
- (void)logDownloadCancelled;
- (unsigned long long)msDurationSinceDownloadInitiated;
- (struct NSDictionary *)_linksForEventWithAPIState:(id)arg1;
- (id)loggingEventForAction:(unsigned long long)arg1 withPlaybackId:(id)arg2 withContext:(id)arg3 andError:(id)arg4;
- (id)loggingEventForAction:(unsigned long long)arg1 withPercentage:(long long)arg2;
- (id)paramsForDownloadEvent:(id)arg1 location:(id)arg2 error:(id)arg3;
- (id)paramsForDownloadEvent:(id)arg1 withPercentagePlayback:(int)arg2;
- (id)downloadPlaybackContextId;
- (id)downloadInitiateDownloadableIds;
- (id)contextStringArray:(id)arg1;
- (id)initWithOfflineLogging:(id)arg1 downloadTransaction:(id)arg2 trackingInfo:(id)arg3 cdnId:(id)arg4 esn:(id)arg5 network:(id)arg6 watchableInfo:(id)arg7 stateStore:(id)arg8;

@end

