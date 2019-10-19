//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FClock-Protocol.h"

@class NSString;
@protocol FClock;

@interface FOffsetClock : NSObject <FClock>
{
    id <FClock> _clock;
    double _offset;
}

@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) id <FClock> clock; // @synthesize clock=_clock;
- (void).cxx_destruct;
- (id)initWithClock:(id)arg1 offset:(double)arg2;
- (double)currentTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
