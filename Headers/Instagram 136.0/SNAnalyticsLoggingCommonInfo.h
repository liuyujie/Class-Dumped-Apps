//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SNAnalyticsLoggingCommonInfo : NSObject
{
    NSString *_templateName;
    NSString *_sessionId;
    NSString *_clientName;
    NSDictionary *_loggingInfo;
}

@property(readonly, nonatomic) NSDictionary *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void).cxx_destruct;
- (id)initWithTemplateName:(id)arg1 sessionId:(id)arg2 clientName:(id)arg3 loggingInfo:(id)arg4;

@end

