//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXOperation.h>

@class NSPredicate, NSRunLoop;

@interface NFLXRunLoopOperation : NFLXOperation
{
    NSRunLoop *_runLoop;
    double _loopInterval;
    NSPredicate *_runPredicate;
}

@property(copy, nonatomic) NSPredicate *runPredicate; // @synthesize runPredicate=_runPredicate;
@property(nonatomic) double loopInterval; // @synthesize loopInterval=_loopInterval;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void).cxx_destruct;
- (_Bool)runMode:(id)arg1 beforeDate:(id)arg2;
- (void)startAndWaitFor:(double)arg1;
- (void)startAndWaitUntil:(id)arg1;
- (id)initWithRunPredicate:(id)arg1;
- (_Bool)isAsynchronous;
- (id)init;
- (void)scheduleTimer:(double)arg1;
- (void)execute;

@end

