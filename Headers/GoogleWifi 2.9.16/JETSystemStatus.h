//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JETSystemStatus : NSObject
{
    int _uptime;
    NSNumber *_lanLinkUp;
    NSString *_deviceId;
    NSString *_hardwareId;
    NSString *_modelId;
    long long _hardware;
    NSString *_countryCode;
}

+ (id)statusWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) long long hardware; // @synthesize hardware=_hardware;
@property(copy, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(copy, nonatomic) NSString *hardwareId; // @synthesize hardwareId=_hardwareId;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) int uptime; // @synthesize uptime=_uptime;
@property(retain, nonatomic) NSNumber *lanLinkUp; // @synthesize lanLinkUp=_lanLinkUp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

