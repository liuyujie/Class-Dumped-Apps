//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterCrashlytics/NSObject-Protocol.h>

@class CLSURLSessionTask, NSError, NSHTTPURLResponse, NSURLRequest;

@protocol CLSURLSessionTaskDelegate <NSObject>
- (void)task:(CLSURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (NSURLRequest *)task:(CLSURLSessionTask *)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3;
@end
