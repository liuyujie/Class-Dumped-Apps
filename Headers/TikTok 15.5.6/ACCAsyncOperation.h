//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface ACCAsyncOperation : NSOperation
{
    _Bool _ready;
    _Bool _executing;
    _Bool _finished;
}

- (void)finish;
- (void)start;
- (_Bool)isFinished;
- (void)setFinished:(_Bool)arg1;
- (_Bool)isExecuting;
- (void)setExecuting:(_Bool)arg1;
- (_Bool)isReady;
- (void)setReady:(_Bool)arg1;
- (_Bool)isAsynchronous;
- (id)init;

@end

