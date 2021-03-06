//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WZSDKMessage.h"

@class NSString, UIImage, WZAudioTrackOptions;

@interface WZAudioTrack : WZSDKMessage
{
    double _trackDuration;
    UIImage *_posterImage;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    WZAudioTrackOptions *_trackOptions;
}

@property(copy, nonatomic) WZAudioTrackOptions *trackOptions; // @synthesize trackOptions=_trackOptions;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
@property(nonatomic) double trackDuration; // @synthesize trackDuration=_trackDuration;
- (void).cxx_destruct;

@end

