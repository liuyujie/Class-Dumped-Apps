//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NLGPriorityQueue : NSObject
{
    struct __CFBinaryHeap *_heap;
}

@property(nonatomic) struct __CFBinaryHeap *heap; // @synthesize heap=_heap;
- (void)dealloc;
- (id)description;
- (void)dequeue:(id)arg1;
- (void)removeAllObjects;
- (unsigned long long)count;
- (id)allObjects;
- (id)pop;
- (id)peek;
- (void)enqueue:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end

