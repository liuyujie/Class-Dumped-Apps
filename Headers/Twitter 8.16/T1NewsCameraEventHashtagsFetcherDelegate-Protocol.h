//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSError, T1NewsCameraEventHashtagsFetcher;

@protocol T1NewsCameraEventHashtagsFetcherDelegate <NSObject>

@optional
- (void)newsCameraEventHashtagsFetcher:(T1NewsCameraEventHashtagsFetcher *)arg1 didFetchCurrentEventHashtags:(NSArray *)arg2 error:(NSError *)arg3;
@end

