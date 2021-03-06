//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMultiset.h"

#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol JavaUtilConcurrentConcurrentMap;

@interface ComGoogleCommonCollectConcurrentHashMultiset : ComGoogleCommonCollectAbstractMultiset <JavaIoSerializable>
{
    id <JavaUtilConcurrentConcurrentMap> countMap_;
}

+ (id)createWithJavaUtilConcurrentConcurrentMap:(id)arg1;
+ (id)createWithJavaLangIterable:(id)arg1;
+ (id)create;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)clear;
- (id)iterator;
- (id)entryIterator;
- (_Bool)isEmpty;
- (int)distinctElements;
- (id)createEntrySet;
- (id)elementIterator;
- (id)createElementSet;
- (_Bool)setCountWithId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)setCountWithId:(id)arg1 withInt:(int)arg2;
- (_Bool)removeExactlyWithId:(id)arg1 withInt:(int)arg2;
- (int)removeWithId:(id)arg1 withInt:(int)arg2;
- (int)addWithId:(id)arg1 withInt:(int)arg2;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (int)size;
- (int)countWithId:(id)arg1;
- (id)initWithJavaUtilConcurrentConcurrentMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

