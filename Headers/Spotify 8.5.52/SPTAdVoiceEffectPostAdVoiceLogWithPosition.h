//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTAdVoiceEffect.h"

@class NSString;

@interface SPTAdVoiceEffectPostAdVoiceLogWithPosition : SPTAdVoiceEffect
{
    NSString *_eventType;
    double _position;
}

@property(readonly, nonatomic) double position; // @synthesize position=_position;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEventType:(id)arg1 position:(double)arg2;

@end

