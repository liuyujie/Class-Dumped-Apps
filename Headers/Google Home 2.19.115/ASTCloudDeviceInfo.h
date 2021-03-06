//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTUIAssistantDeviceSettings, NSString;

@interface ASTCloudDeviceInfo : NSObject
{
    int _assistantDeviceType;
    ASTUIAssistantDeviceSettings *_assistantDeviceSettings;
    NSString *_deviceID;
}

+ (id)deviceInfoWithDeviceID:(id)arg1 assistantDeviceType:(int)arg2;
@property(readonly, nonatomic) int assistantDeviceType; // @synthesize assistantDeviceType=_assistantDeviceType;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) ASTUIAssistantDeviceSettings *assistantDeviceSettings; // @synthesize assistantDeviceSettings=_assistantDeviceSettings;
- (void).cxx_destruct;
- (_Bool)isDeviceLocaleVoiceMatchSupported;
- (id)initInternal;
@property(readonly, nonatomic) long long multiUserUnsupportedReason;
@property(readonly, nonatomic, getter=isMultiUserSupported) _Bool multiUserSupported;
@property(readonly, nonatomic) NSString *localeID;
@property(readonly, nonatomic) NSString *humanFriendlyName;

@end

