//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSObjectArray;

@interface JavaUtilConcurrentCopyOnWriteArrayList_Slice : NSObject
{
    IOSObjectArray *expectedElements_;
    int from_;
    int to_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)checkConcurrentModificationWithNSObjectArray:(id)arg1;
- (void)checkPositionIndexWithInt:(int)arg1;
- (void)checkElementIndexWithInt:(int)arg1;
- (id)initWithNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;

@end

