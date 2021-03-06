//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DBCollatedFileListDataProvider, NSDate;
@protocol DBFileListDataProviderProtocol;

@protocol DBCollatedFileListDataProviderFactoryProtocol
+ (DBCollatedFileListDataProvider *)scoreCollatedProvider:(id <DBFileListDataProviderProtocol>)arg1 withScoreAccessor:(NSNumber * (^)(id))arg2 secondaryComparator:(long long (^)(id, id))arg3;
+ (DBCollatedFileListDataProvider *)dateCollatedProvider:(id <DBFileListDataProviderProtocol>)arg1 withDateAccessor:(NSDate * (^)(id))arg2 secondaryComparator:(long long (^)(id, id))arg3 referenceTime:(NSDate *)arg4;
+ (DBCollatedFileListDataProvider *)stringCollatedProvider:(id <DBFileListDataProviderProtocol>)arg1 withStringAccessor:(NSString * (^)(id))arg2;
@end

