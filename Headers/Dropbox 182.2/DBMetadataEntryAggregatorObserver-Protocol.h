//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/NSObject-Protocol.h>

@class DBMetadataEntryAggregator, NSArray, NSString;
@protocol DBDropboxPathSet;

@protocol DBMetadataEntryAggregatorObserver <NSObject>
- (void)entryAggregatorDidReceiveReset:(DBMetadataEntryAggregator *)arg1;
- (void)entryAggregator:(DBMetadataEntryAggregator *)arg1 receivedUpdatedEntries:(NSArray *)arg2 removedPaths:(id <DBDropboxPathSet>)arg3 oldDeltaSyncCursor:(NSString *)arg4 newDeltaSyncCursor:(NSString *)arg5;
@end

