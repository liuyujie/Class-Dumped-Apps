//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTPlaylistSettings : NSObject
{
    int _privacyStatus;
    NSString *_playlistName;
    NSString *_playlistDescription;
}

@property(nonatomic) int privacyStatus; // @synthesize privacyStatus=_privacyStatus;
@property(readonly, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(readonly, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 description:(id)arg2 privacyStatus:(int)arg3;

@end

