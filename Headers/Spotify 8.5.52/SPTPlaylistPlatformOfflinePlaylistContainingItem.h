//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "SPTPlaylistPlatformFieldName-Protocol.h"
#import "SPTPlaylistPlatformFieldURL-Protocol.h"

@class NSString, NSURL;

@interface SPTPlaylistPlatformOfflinePlaylistContainingItem : GPBMessage <SPTPlaylistPlatformFieldName, SPTPlaylistPlatformFieldURL>
{
}

+ (id)descriptor;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSURL *URL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *playlistLink; // @dynamic playlistLink;
@property(copy, nonatomic) NSString *playlistName; // @dynamic playlistName;
@property(readonly) Class superclass;

@end
