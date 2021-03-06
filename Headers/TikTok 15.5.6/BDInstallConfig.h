//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BDInstallConfig : NSObject
{
    _Bool _activateDeviceEnable;
    _Bool _needEcrypt;
    _Bool _isInhouseVersion;
    NSString *_appID;
    NSString *_channel;
    NSString *_appName;
    long long _serviceVendor;
    CDUnknownBlockType _backupDeviceIDBlock;
    CDUnknownBlockType _customRequestHeaderBlock;
    CDUnknownBlockType _overrideHeaderBlock;
    CDUnknownBlockType _customQueryBlock;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isInhouseVersion; // @synthesize isInhouseVersion=_isInhouseVersion;
@property(copy, nonatomic) CDUnknownBlockType customQueryBlock; // @synthesize customQueryBlock=_customQueryBlock;
@property(copy, nonatomic) CDUnknownBlockType overrideHeaderBlock; // @synthesize overrideHeaderBlock=_overrideHeaderBlock;
@property(copy, nonatomic) CDUnknownBlockType customRequestHeaderBlock; // @synthesize customRequestHeaderBlock=_customRequestHeaderBlock;
@property(copy, nonatomic) CDUnknownBlockType backupDeviceIDBlock; // @synthesize backupDeviceIDBlock=_backupDeviceIDBlock;
@property(nonatomic) _Bool needEcrypt; // @synthesize needEcrypt=_needEcrypt;
@property(nonatomic) _Bool activateDeviceEnable; // @synthesize activateDeviceEnable=_activateDeviceEnable;
@property(nonatomic) long long serviceVendor; // @synthesize serviceVendor=_serviceVendor;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)init;

@end

