//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface JETSetupAnalyticsManager : NSObject
{
    _Bool _firstAPComplete;
    NSDate *_setupBeganDate;
    NSDate *_APConfigureBeganDate;
    NSDate *_stepBeganDate;
    NSString *_currentStateName;
    long long _transport;
}

@property(nonatomic) long long transport; // @synthesize transport=_transport;
@property(nonatomic) _Bool firstAPComplete; // @synthesize firstAPComplete=_firstAPComplete;
@property(copy, nonatomic) NSString *currentStateName; // @synthesize currentStateName=_currentStateName;
@property(retain, nonatomic) NSDate *stepBeganDate; // @synthesize stepBeganDate=_stepBeganDate;
@property(retain, nonatomic) NSDate *APConfigureBeganDate; // @synthesize APConfigureBeganDate=_APConfigureBeganDate;
@property(readonly, nonatomic) NSDate *setupBeganDate; // @synthesize setupBeganDate=_setupBeganDate;
- (void).cxx_destruct;
- (void)recordSetupEventName:(id)arg1 label:(id)arg2 time:(id)arg3;
- (void)didFinishAPSetup;
- (void)recordSetupAbandoned;
- (void)recordSetupResume;
- (void)recordSetupPause;
- (void)recordSetupEventForScreenName:(id)arg1;
- (void)recordSetupEventForMachineState:(long long)arg1;
- (void)recordTransportSelected:(long long)arg1;
- (id)init;

@end

