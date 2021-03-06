//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallListener-Protocol.h>

@class FBTimer, IGTimeInAppControllerWrapper, IGUserDefaults, IGUserSession, NSString;

@interface IGTimeSpentManager : NSObject <IGUserSessionObject, IGVideoCallListener>
{
    IGTimeInAppControllerWrapper *_controllerWrapper;
    CDUnknownBlockType _reminderBlock;
    IGUserSession *_userSession;
    IGUserDefaults *_sessionUserDefaults;
    FBTimer *_triggerReminderTimer;
}

@property(retain, nonatomic) FBTimer *triggerReminderTimer; // @synthesize triggerReminderTimer=_triggerReminderTimer;
@property(readonly, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)_resizeTimePerDayForWeek:(id)arg1;
- (void)videoCallEnded;
- (void)videoCallJoined;
- (void)_triggerTimeSpentReminderDialog;
- (void)_scheduleTimeSpentReminder:(id)arg1;
- (void)_scheduleTimeSpentReminderIfExists;
- (void)clearTimeSpentReminder;
- (void)storeTimeSpentReminder:(id)arg1;
- (id)fetchTimeSpentReminder;
- (id)_reminderKey;
- (id)fetchDailyTimeSpentForToday;
- (id)fetchDailyTimeSpentForWeek;
- (void)stopTracking;
- (void)startTracking;
- (id)initWithTimeInAppController:(id)arg1 userSession:(id)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

