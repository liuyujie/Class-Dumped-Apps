//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWELiveRoomMessage-Protocol.h"

@class NSDate, NSString;

@interface AWELiveFeedAnimationDispatchModel : NSObject <AWELiveRoomMessage>
{
    _Bool _hasWatchLiveMoreThanOneMinute;
    _Bool _hasDisplayed;
    double _expandingDuration;
    long long _displayedTimes;
    NSDate *_lastDisplayTime;
}

@property(nonatomic) _Bool hasDisplayed; // @synthesize hasDisplayed=_hasDisplayed;
@property(retain, nonatomic) NSDate *lastDisplayTime; // @synthesize lastDisplayTime=_lastDisplayTime;
@property(nonatomic) long long displayedTimes; // @synthesize displayedTimes=_displayedTimes;
@property(nonatomic) _Bool hasWatchLiveMoreThanOneMinute; // @synthesize hasWatchLiveMoreThanOneMinute=_hasWatchLiveMoreThanOneMinute;
@property(nonatomic) double expandingDuration; // @synthesize expandingDuration=_expandingDuration;
- (void).cxx_destruct;
- (void)playedForOneMinute;
- (id)loadLastDisplayTime;
- (void)persistLastDisplayTime:(id)arg1;
- (long long)loadDisplayedTimes;
- (void)persistDisplayedTimes:(long long)arg1;
- (_Bool)shouldDisplayAgainWithLastDisplayDate:(id)arg1;
- (_Bool)donotDisplayForever;
- (void)setWatchLiveMoreThanOneMinute;
- (void)setDisplayed;
- (void)setEnterLiveFeed;
- (_Bool)shouldDisplayAnimation;
- (void)dealloc;
- (id)initWithExpandingDuration:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

