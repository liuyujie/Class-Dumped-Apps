//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@protocol NFPlaylist, NFPlaylistPlayerMutableDataSource, NFPlaylistSegment;

@protocol NFPlaylistPlayerDataSourceChangeObserver <NSObject>
- (void)dataSource:(id <NFPlaylistPlayerMutableDataSource>)arg1 didUpdatePlaylist:(id <NFPlaylist>)arg2;
- (void)dataSource:(id <NFPlaylistPlayerMutableDataSource>)arg1 didChangeNextSegmentAfterSegment:(id <NFPlaylistSegment>)arg2;
@end

