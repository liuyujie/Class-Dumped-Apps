//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBAnalyticsEvent.h>

@interface ADLOfflineFilesMetadataSyncCompletedEvent : DBAnalyticsEvent
{
}

- (id)setErrorDescription:(id)arg1;
- (id)setErrorCode:(long long)arg1;
- (id)setErrorDomain:(id)arg1;
- (id)setSyncResult:(unsigned long long)arg1;
- (id)stopTimerForMetadataSyncDuration;
- (id)startTimerForMetadataSyncDuration;
- (id)setUserDidOverrideAllowCellularDownload:(_Bool)arg1;
- (id)setUserAllowsCellularDownload:(_Bool)arg1;
- (id)setDeltaHadChanges:(_Bool)arg1;
- (id)setNoPreviousDeltaCursor:(_Bool)arg1;
- (id)setExtension:(id)arg1;
- (id)setItemType:(unsigned long long)arg1;
- (id)setSyncType:(unsigned long long)arg1;
- (id)setTriggerType:(unsigned long long)arg1;
- (id)init;

@end

