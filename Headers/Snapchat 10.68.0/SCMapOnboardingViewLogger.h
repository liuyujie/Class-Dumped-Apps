//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMapLoggerEventSender;

@interface SCMapOnboardingViewLogger : NSObject
{
    _Bool _didLogAcceptedPermissionsResponse;
    SCMapLoggerEventSender *_eventSender;
}

@property(nonatomic) _Bool didLogAcceptedPermissionsResponse; // @synthesize didLogAcceptedPermissionsResponse=_didLogAcceptedPermissionsResponse;
@property(readonly, nonatomic) SCMapLoggerEventSender *eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (void)locationPermissionsResponse:(_Bool)arg1;
- (void)onboardingDidComplete;
- (id)initWithEventSender:(id)arg1;

@end
