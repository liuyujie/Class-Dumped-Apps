//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBFileProviderMetadata.h>

@class DBDropboxPath, NSString;

@interface DBFileProviderMutableMetadata : DBFileProviderMetadata
{
}

- (id)debugDescription;
@property(nonatomic) double lastMetadataUpdate; // @dynamic lastMetadataUpdate;
@property(copy, nonatomic) NSString *currentOwner; // @dynamic currentOwner;
@property(nonatomic) unsigned long long uploadQueueId; // @dynamic uploadQueueId;
@property(copy, nonatomic) NSString *lastContentHash; // @dynamic lastContentHash;
@property(copy, nonatomic) NSString *lastKnownRev; // @dynamic lastKnownRev;
@property(nonatomic) unsigned long long state; // @dynamic state;
@property(retain, nonatomic) DBDropboxPath *remotePath; // @dynamic remotePath;
@property(copy, nonatomic) NSString *localPath; // @dynamic localPath;
@property(nonatomic) unsigned long long uid; // @dynamic uid;

@end

