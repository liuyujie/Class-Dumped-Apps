//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface CRPTAsyncBlockOperation : NSOperation
{
    CDUnknownBlockType _executionBlock;
    CDUnknownBlockType _finishedCallback;
    _Bool _finished;
    _Bool _executing;
}

+ (id)operationWithAsyncBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)start;
- (_Bool)isAsynchronous;
- (id)initWithAsyncBlock:(CDUnknownBlockType)arg1;

@end

