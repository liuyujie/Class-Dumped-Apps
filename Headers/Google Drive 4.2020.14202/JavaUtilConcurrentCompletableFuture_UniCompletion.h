//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentCompletableFuture_Completion.h"

@interface JavaUtilConcurrentCompletableFuture_UniCompletion : JavaUtilConcurrentCompletableFuture_Completion
{
    unsigned long long executor_;
    unsigned long long dep_;
    unsigned long long src_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (_Bool)isLive;
- (_Bool)claim;
- (id)initWithJavaUtilConcurrentExecutor:(id)arg1 withJavaUtilConcurrentCompletableFuture:(id)arg2 withJavaUtilConcurrentCompletableFuture:(id)arg3;

@end

