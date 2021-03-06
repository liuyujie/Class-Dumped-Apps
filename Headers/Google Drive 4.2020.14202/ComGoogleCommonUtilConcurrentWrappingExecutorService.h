//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilConcurrentExecutorService-Protocol.h"

@class NSString;
@protocol JavaUtilConcurrentExecutorService;

@interface ComGoogleCommonUtilConcurrentWrappingExecutorService : NSObject <JavaUtilConcurrentExecutorService>
{
    id <JavaUtilConcurrentExecutorService> delegate_;
}

- (void)dealloc;
- (_Bool)awaitTerminationWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (_Bool)isTerminated;
- (_Bool)isShutdown;
- (id)shutdownNow;
- (void)shutdown;
- (id)invokeAnyWithJavaUtilCollection:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
- (id)invokeAnyWithJavaUtilCollection:(id)arg1;
- (id)invokeAllWithJavaUtilCollection:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
- (id)invokeAllWithJavaUtilCollection:(id)arg1;
- (id)submitWithJavaLangRunnable:(id)arg1 withId:(id)arg2;
- (id)submitWithJavaLangRunnable:(id)arg1;
- (id)submitWithJavaUtilConcurrentCallable:(id)arg1;
- (void)executeWithJavaLangRunnable:(id)arg1;
- (id)wrapTaskWithJavaLangRunnable:(id)arg1;
- (id)initWithJavaUtilConcurrentExecutorService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

