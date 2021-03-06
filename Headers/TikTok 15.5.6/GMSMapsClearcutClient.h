//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GIPClearcutLogger, NSString;

@interface GMSMapsClearcutClient : NSObject
{
    NSString *_sdkVersion;
    NSString *_apiKey;
    NSString *_zwiebackCookie;
    _Bool _enterpriseSDK;
    GMSx_GIPClearcutLogger *_clearcutLogger;
    _Bool _enabled;
}

+ (int)deviceTypeForDeviceModel:(id)arg1;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (int)deviceType;
- (id)bundleIdentifier;
- (long long)timeIntervalSince1970Ms;
- (void)setClearcutLogger:(id)arg1;
- (id)clearcutLogger;
- (void)addEventType:(int)arg1 count:(int)arg2;
- (void)setZwiebackCookie:(id)arg1;
- (id)initWithAPIKey:(id)arg1 sdkVersion:(id)arg2 enterpriseSDK:(_Bool)arg3;

@end

