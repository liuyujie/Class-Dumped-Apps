//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSString;

@protocol TFSTwitterTypeaheadServiceLookupWorker
- (void)startWithQuery:(NSString *)arg1 resultType:(long long)arg2 sourceType:(unsigned long long)arg3 prefetch:(_Bool)arg4 mediaTaggingInPrefetch:(_Bool)arg5 lastCacheAge:(NSDate *)arg6 geoRequestFilter:(_Bool)arg7 contextText:(NSString *)arg8 topicType:(unsigned long long)arg9 source:(unsigned long long)arg10 completion:(void (^)(_Bool, id, NSError *))arg11;
@end

