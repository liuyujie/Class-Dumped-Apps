//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSDate, NSDictionary, NSString, TFSTwitterNotificationSettingsTemplate;

@interface TFSTwitterMobileSettingsResponse : NSObject <TFSModel>
{
    NSString *_method;
    NSString *_exceptionString;
    TFSTwitterNotificationSettingsTemplate *_pushSettingsTemplate;
    TFSTwitterNotificationSettingsTemplate *_smsSettingsTemplate;
    NSDictionary *_pushSettings;
    NSDictionary *_smsSettings;
    NSDate *_nextCheckinDate;
}

+ (id)mobileSettingsResponseWithJSONData:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSDate *nextCheckinDate; // @synthesize nextCheckinDate=_nextCheckinDate;
@property(readonly, copy, nonatomic) NSDictionary *smsSettings; // @synthesize smsSettings=_smsSettings;
@property(readonly, copy, nonatomic) NSDictionary *pushSettings; // @synthesize pushSettings=_pushSettings;
@property(readonly, nonatomic) TFSTwitterNotificationSettingsTemplate *smsSettingsTemplate; // @synthesize smsSettingsTemplate=_smsSettingsTemplate;
@property(readonly, nonatomic) TFSTwitterNotificationSettingsTemplate *pushSettingsTemplate; // @synthesize pushSettingsTemplate=_pushSettingsTemplate;
@property(readonly, copy, nonatomic) NSString *exceptionString; // @synthesize exceptionString=_exceptionString;
@property(readonly, copy, nonatomic) NSString *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithMethod:(id)arg1 exceptionString:(id)arg2 pushSettingsTemplate:(id)arg3 smsSettingsTemplate:(id)arg4 pushSettings:(id)arg5 smsSettings:(id)arg6 nextCheckinDate:(id)arg7 error:(id *)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

