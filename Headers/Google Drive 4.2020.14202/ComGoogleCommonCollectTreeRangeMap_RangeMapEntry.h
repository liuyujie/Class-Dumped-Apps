//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapEntry.h"

@class ComGoogleCommonCollectRange;

@interface ComGoogleCommonCollectTreeRangeMap_RangeMapEntry : ComGoogleCommonCollectAbstractMapEntry
{
    ComGoogleCommonCollectRange *range_;
    id value_;
}

- (void)dealloc;
- (id)getUpperBound;
- (id)getLowerBound;
- (_Bool)containsWithJavaLangComparable:(id)arg1;
- (id)getValue;
- (id)getKey;

@end

