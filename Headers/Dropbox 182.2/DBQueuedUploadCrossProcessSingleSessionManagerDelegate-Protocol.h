//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class DBQueuedUpload, DBQueuedUploadCrossProcessSingleSessionManager, NSError;

@protocol DBQueuedUploadCrossProcessSingleSessionManagerDelegate <NSObject>
- (void)singleSessionManager:(DBQueuedUploadCrossProcessSingleSessionManager *)arg1 didBecomeInvalidatedWithError:(NSError *)arg2;
- (void)singleSessionManager:(DBQueuedUploadCrossProcessSingleSessionManager *)arg1 didFailToReconnectForUpload:(DBQueuedUpload *)arg2 reason:(unsigned long long)arg3;
- (void)singleSessionManager:(DBQueuedUploadCrossProcessSingleSessionManager *)arg1 didReconnectForUpload:(DBQueuedUpload *)arg2;
@end

