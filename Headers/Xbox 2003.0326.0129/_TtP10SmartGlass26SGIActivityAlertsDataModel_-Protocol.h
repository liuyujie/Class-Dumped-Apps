//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSObject;

@protocol _TtP10SmartGlass26SGIActivityAlertsDataModel_
@property(readonly, copy, nonatomic) NSArray *alerts;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) unsigned long long numberOfNewAlerts;
- (void)refresh:(_Bool)arg1;
- (void)resetCount;
- (void)stopPollingUnreadCount;
- (void)startPollingUnreadCount;
- (void)unregisterForChanges:(NSObject *)arg1;
- (void)registerForChanges:(NSObject *)arg1;
@end

