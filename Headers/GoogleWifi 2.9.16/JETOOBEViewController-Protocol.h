//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class JETOOBEAPState, NSString;

@protocol JETOOBEViewController
@property(readonly, nonatomic) long long lastEvent;
@property(readonly, nonatomic) long long currentMachineState;
@property(readonly, nonatomic) NSString *analyticsScreenName;
@property(readonly, nonatomic) JETOOBEAPState *APState;
- (void)chooseSSID:(NSString *)arg1 withPassword:(NSString *)arg2;
- (void)machineStateChangedTo:(long long)arg1;
- (void)sendEvent:(long long)arg1;
- (id)initWithAPState:(JETOOBEAPState *)arg1;
@end
