//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSVastElementModel.h"

@class NSArray;

@interface HTSVastTrackingEventsModel : HTSVastElementModel
{
    NSArray *_start;
    NSArray *_firstQuartile;
    NSArray *_midPoint;
    NSArray *_thirdQuartile;
    NSArray *_complete;
    NSArray *_pause;
    NSArray *_resume;
    NSArray *_mute;
    NSArray *_unmute;
    NSArray *_close;
    NSArray *_skip;
    NSArray *_progress;
    NSArray *_playerExpand;
    NSArray *_playerCollapse;
    NSArray *_fullscreen;
    NSArray *_collapse;
}

@property(copy, nonatomic) NSArray *collapse; // @synthesize collapse=_collapse;
@property(copy, nonatomic) NSArray *fullscreen; // @synthesize fullscreen=_fullscreen;
@property(copy, nonatomic) NSArray *playerCollapse; // @synthesize playerCollapse=_playerCollapse;
@property(copy, nonatomic) NSArray *playerExpand; // @synthesize playerExpand=_playerExpand;
@property(copy, nonatomic) NSArray *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSArray *skip; // @synthesize skip=_skip;
@property(copy, nonatomic) NSArray *close; // @synthesize close=_close;
@property(copy, nonatomic) NSArray *unmute; // @synthesize unmute=_unmute;
@property(copy, nonatomic) NSArray *mute; // @synthesize mute=_mute;
@property(copy, nonatomic) NSArray *resume; // @synthesize resume=_resume;
@property(copy, nonatomic) NSArray *pause; // @synthesize pause=_pause;
@property(copy, nonatomic) NSArray *complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSArray *thirdQuartile; // @synthesize thirdQuartile=_thirdQuartile;
@property(copy, nonatomic) NSArray *midPoint; // @synthesize midPoint=_midPoint;
@property(copy, nonatomic) NSArray *firstQuartile; // @synthesize firstQuartile=_firstQuartile;
@property(copy, nonatomic) NSArray *start; // @synthesize start=_start;
- (void).cxx_destruct;

@end
