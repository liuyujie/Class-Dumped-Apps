//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentConcurrentHashMap_BulkTask.h"

@protocol JavaUtilFunctionConsumer, JavaUtilFunctionFunction;

@interface JavaUtilConcurrentConcurrentHashMap_ForEachTransformedEntryTask : JavaUtilConcurrentConcurrentHashMap_BulkTask
{
    id <JavaUtilFunctionFunction> transformer_;
    id <JavaUtilFunctionConsumer> action_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)compute;
- (id)initWithJavaUtilConcurrentConcurrentHashMap_BulkTask:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg5 withJavaUtilFunctionFunction:(id)arg6 withJavaUtilFunctionConsumer:(id)arg7;

@end

