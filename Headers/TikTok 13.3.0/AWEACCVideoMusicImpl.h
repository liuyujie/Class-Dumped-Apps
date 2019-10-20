//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCVideoMusicProtocol-Protocol.h"

@class NSString;

@interface AWEACCVideoMusicImpl : NSObject <ACCVideoMusicProtocol>
{
}

- (id)defaultPhotoMovieMusic;
- (void)fetchMusicListForPhotoMovieWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshMusicItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMusicItemWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLocalURLForMusic:(id)arg1 lyricURL:(id)arg2 withProgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchLocalURLForMusic:(id)arg1 withProgress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)localLyricURLForMusic:(id)arg1;
- (id)localURLForMusic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
