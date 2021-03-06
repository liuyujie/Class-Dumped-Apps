//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKSessionDelegate-Protocol.h"

@class ASTEnrollmentFetcherSessionConfig, EnrollmentFetcherResponse, GSKSession, NSString;

@interface ASTEnrollmentFetcher : NSObject <GSKSessionDelegate>
{
    ASTEnrollmentFetcherSessionConfig *_sessionConfig;
    NSString *_localeID;
    int _preambleType;
    _Bool _fillAudio;
    _Bool _requiresFreshAudio;
    int _maxRetryCount;
    double _retryDelay;
    int _minAudioCount;
    long long _maxAgeForFreshness;
    int _currentRetryAttempt;
    CDUnknownBlockType _completion;
    GSKSession *_session;
    EnrollmentFetcherResponse *_enrollmentFetcherResponse;
}

- (void).cxx_destruct;
- (id)freshEnrollmentAudio;
- (id)enrollmentAudio;
- (void)completeWithEnrollmentAudio:(id)arg1 error:(id)arg2;
- (void)handleSessionCompletionWithEnrollmentAudio:(id)arg1 error:(id)arg2;
- (id)sufficientEnrollmentsFromResponseWithError:(id *)arg1;
- (void)clearSession;
- (id)endOfDataS3Request;
- (id)enrollmentFetcherS3Request;
- (void)tryFetchAfterDelay:(double)arg1;
- (void)sessionDidFinish:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didReceiveResponse:(id)arg2;
- (void)fetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSessionConfig:(id)arg1 localeID:(id)arg2 preambleType:(int)arg3 fillAudio:(_Bool)arg4 requiresFreshAudio:(_Bool)arg5 maxRetryCount:(int)arg6 retryDelay:(double)arg7 minAudioCount:(int)arg8 maxAgeForFreshness:(long long)arg9;
- (id)initWithSessionConfig:(id)arg1 localeID:(id)arg2 preambleType:(int)arg3 fillAudio:(_Bool)arg4 maxRetryCount:(int)arg5 requiresFreshAudio:(_Bool)arg6 minAudioCount:(int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

