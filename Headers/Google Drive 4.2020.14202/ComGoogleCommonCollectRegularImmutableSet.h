//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableSet.h"

@class IOSObjectArray;

@interface ComGoogleCommonCollectRegularImmutableSet : ComGoogleCommonCollectImmutableSet
{
    IOSObjectArray *table_;
    IOSObjectArray *elements_;
    int mask_;
    int hashCode_;
}

+ (void)initialize;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)isHashCodeFast;
- (unsigned long long)hash;
- (_Bool)isPartialView;
- (id)createAsList;
- (int)copyIntoArrayWithNSObjectArray:(id)arg1 withInt:(int)arg2;
- (int)internalArrayEnd;
- (int)internalArrayStart;
- (id)internalArray;
- (id)spliterator;
- (id)iterator;
- (int)size;
- (_Bool)containsWithId:(id)arg1;
- (id)initPackagePrivateWithNSObjectArray:(id)arg1 withInt:(int)arg2 withNSObjectArray:(id)arg3 withInt:(int)arg4;

@end

