//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>

@class IGStoryMusicTrack, NSDate;

@interface IGStoryMusicSongCachedModel : NSObject <NSCoding>
{
    IGStoryMusicTrack *_track;
    NSDate *_timeStamp;
}

@property(copy, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, copy, nonatomic) IGStoryMusicTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrack:(id)arg1 timeStamp:(id)arg2;

@end

