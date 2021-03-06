//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface WABufferLoaderManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sem;
    unsigned long long _requestCount;
    struct WAUnfairLock _requestLock;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)shouldReleaseLoader;
- (void)releaseLoader:(id *)arg1;
- (id)nextLoaderWithTrack:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2;
- (id)init;

@end

