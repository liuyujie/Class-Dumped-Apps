//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEMusicModel, NSMutableArray, NSString;

@interface AWEDraftSection : NSObject
{
    long long _timeType;
    NSString *_musicId;
    AWEMusicModel *_music;
    NSMutableArray *_drafts;
}

@property(retain, nonatomic) NSMutableArray *drafts; // @synthesize drafts=_drafts;
@property(retain, nonatomic) AWEMusicModel *music; // @synthesize music=_music;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) long long timeType; // @synthesize timeType=_timeType;
- (void).cxx_destruct;

@end

