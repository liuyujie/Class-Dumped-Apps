//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBAgentStatus;

@interface DBAgentStatusWithTime : NSObject
{
    DBAgentStatus *_agentStatus;
    long long _lastChangedNsec;
}

+ (id)agentStatusWithTimeWithAgentStatus:(id)arg1 lastChangedNsec:(long long)arg2;
@property(readonly, nonatomic) long long lastChangedNsec; // @synthesize lastChangedNsec=_lastChangedNsec;
@property(readonly, nonatomic) DBAgentStatus *agentStatus; // @synthesize agentStatus=_agentStatus;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAgentStatus:(id)arg1 lastChangedNsec:(long long)arg2;

@end

