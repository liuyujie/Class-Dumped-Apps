//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GwtImmutableJsMap_Builder.h"

@class ComGoogleCommonCollectImmutableMap_Builder;

@interface GwtImmutableJsMapBuilder : GwtImmutableJsMap_Builder
{
    ComGoogleCommonCollectImmutableMap_Builder *delegate_;
}

+ (id)createWithGwtHashFunction:(id)arg1;
+ (id)forStringKeys;
- (void)dealloc;
- (id)build;
- (id)putAllWithJavaUtilMap:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)initPackagePrivate;

@end

