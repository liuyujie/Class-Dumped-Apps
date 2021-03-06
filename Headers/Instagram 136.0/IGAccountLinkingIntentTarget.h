//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGeneratedIntentTarget.h>

@class IGAccountLinkingInfo, IGUserSession, NSString;

@interface IGAccountLinkingIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    NSString *_sessionId;
    IGAccountLinkingInfo *_accountLinkingInfo;
}

@property(readonly, nonatomic) IGAccountLinkingInfo *accountLinkingInfo; // @synthesize accountLinkingInfo=_accountLinkingInfo;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 sessionId:(id)arg2 accountLinkingInfo:(id)arg3;

@end

