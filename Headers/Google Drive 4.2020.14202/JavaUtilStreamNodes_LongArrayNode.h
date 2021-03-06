//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilStreamNode_OfLong-Protocol.h"

@class IOSLongArray, NSString;

@interface JavaUtilStreamNodes_LongArrayNode : NSObject <JavaUtilStreamNode_OfLong>
{
    IOSLongArray *array_;
    int curSize_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getChildCount;
- (id)asArrayWithJavaUtilFunctionIntFunction:(id)arg1;
- (id)getChildWithInt:(int)arg1;
- (id)getShape;
- (id)newArrayWithInt:(int)arg1;
- (id)truncateWithLong:(long long)arg1 withLong:(long long)arg2 withJavaUtilFunctionIntFunction:(id)arg3;
- (void)copyIntoWithNSObjectArray:(id)arg1 withInt:(int)arg2;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)forEachWithId:(id)arg1;
- (long long)count;
- (void)copyIntoWithId:(id)arg1 withInt:(int)arg2;
- (id)asPrimitiveArray;
- (id)spliterator;
- (id)initWithLongArray:(id)arg1;
- (id)initWithLong:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

