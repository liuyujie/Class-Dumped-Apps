//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMPullerStatusChangeObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol TIMPullerStatusChangeObserverDelegate;

@interface TIMSimplePullerStatusObserver : NSObject <TIMPullerStatusChangeObserverDelegate>
{
    NSMutableDictionary *_currentReasonForInbox;
    NSMutableDictionary *_currentStatusForInbox;
    id <TIMPullerStatusChangeObserverDelegate> _notifier;
    NSMutableDictionary *_everWakeUpStatusForInbox;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *everWakeUpStatusForInbox; // @synthesize everWakeUpStatusForInbox=_everWakeUpStatusForInbox;
@property(retain, nonatomic) id <TIMPullerStatusChangeObserverDelegate> notifier; // @synthesize notifier=_notifier;
@property(retain, nonatomic) NSMutableDictionary *currentStatusForInbox; // @synthesize currentStatusForInbox=_currentStatusForInbox;
@property(retain, nonatomic) NSMutableDictionary *currentReasonForInbox; // @synthesize currentReasonForInbox=_currentReasonForInbox;
- (void).cxx_destruct;
- (void)didEndPullForUser:(long long)arg1 inbox:(int)arg2 pullerType:(long long)arg3 error:(id)arg4 hasMore:(_Bool)arg5;
- (void)didStartPullForUser:(long long)arg1 inbox:(int)arg2 pullerType:(long long)arg3;
- (void)didSetNeedsToPullWithReason:(long long)arg1 forUser:(long long)arg2 inbox:(int)arg3 pullerType:(long long)arg4;
- (void)didEndInstallInitForUser:(long long)arg1 inbox:(int)arg2 pullerType:(long long)arg3;
- (void)didStartInstallInitForUser:(long long)arg1 inbox:(int)arg2 pullerType:(long long)arg3;
- (long long)currentStatusForInbox:(int)arg1;
- (void)setStatus:(long long)arg1 forInbox:(int)arg2;
- (id)initWithNotifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

