//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VELimitLogger : NSObject
{
    double _limitInterval;
    double _lastLoggerTime;
    unsigned long long _limitCount;
    unsigned long long _counter;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long counter; // @synthesize counter=_counter;
@property(nonatomic) unsigned long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) double lastLoggerTime; // @synthesize lastLoggerTime=_lastLoggerTime;
@property(nonatomic) double limitInterval; // @synthesize limitInterval=_limitInterval;
- (_Bool)checkLimitInterval;
- (_Bool)checkLimitCount;
- (void)doLogger:(CDUnknownBlockType)arg1;
- (id)initWithLimitInterval:(double)arg1;
- (id)initWithLimitCount:(unsigned long long)arg1;

@end

