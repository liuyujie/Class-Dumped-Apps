//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AVMDLiOSNetUtils : NSObject
{
    NSObject<OS_dispatch_queue> *_networkQueue;
    _Bool _scheduleing;
    unsigned long long _currentState;
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)shareInstance;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(nonatomic) _Bool scheduleing; // @synthesize scheduleing=_scheduleing;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end
