//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBRestClientDelegate-Protocol.h"

@class DBRestClient, NSError;

@protocol DBRestClientFeedbackDelegate <DBRestClientDelegate>
- (void)restClient:(DBRestClient *)arg1 sendFeedbackFailedWithError:(NSError *)arg2;
- (void)restClientDidSendFeedback:(DBRestClient *)arg1;
@end

