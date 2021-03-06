//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCAEEmailPrefs, GTMSessionFetcherService;

@interface GCAEmailPreferencesManager : NSObject
{
    GTMSessionFetcherService *_fetcherService;
    GCAEEmailPrefs *_emailPreferences;
}

+ (id)sharedInstance;
+ (id)modelNameForCastDeviceType:(long long)arg1;
+ (id)productNameForCastDeviceType:(long long)arg1;
@property(retain, nonatomic) GCAEEmailPrefs *emailPreferences; // @synthesize emailPreferences=_emailPreferences;
- (void).cxx_destruct;
- (void)resendConfirmationEmailWithEmailCategory:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateEmailPreferences:(id)arg1 productName:(id)arg2 modelName:(id)arg3 deviceType:(long long)arg4 isInitialSetup:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)loadEmailPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFetcherService:(id)arg1;
- (id)init;

@end

