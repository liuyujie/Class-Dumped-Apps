//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>

@class IGTimeSpentReminderModel;

@interface IGUsageInsightsManageViewModel : NSObject <IGListDiffable>
{
    IGTimeSpentReminderModel *_reminder;
}

@property(readonly, nonatomic) IGTimeSpentReminderModel *reminder; // @synthesize reminder=_reminder;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)reminderTimeString;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithReminder:(id)arg1;

@end

