//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESPlatformSDKConfiguration;

@interface IESPlatformSDKApi : NSObject
{
    _Bool _enableDebug;
    IESPlatformSDKConfiguration *_productConf;
}

+ (_Bool)__canOpenURLSchemes:(id)arg1;
+ (_Bool)canOpenAPPSchemes:(id)arg1;
+ (_Bool)isAPPInstalledForProduct:(long long)arg1;
+ (_Bool)sendResp:(id)arg1;
+ (_Bool)sendReq:(id)arg1;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 delegate:(id)arg3;
+ (void)bindConfigurationWithProductType:(long long)arg1;
+ (void)bindConfiguration:(id)arg1;
+ (id)sharedInstance;
+ (_Bool)isValidAPPURLScheme:(id)arg1;
+ (id)currentProductiTunesUrl;
+ (id)currentProductURLSchemes;
+ (id)currentProductDisplayName;
+ (id)currentProductName;
+ (id)iesplatform_productConfForProductType:(long long)arg1;
@property(retain, nonatomic) IESPlatformSDKConfiguration *productConf; // @synthesize productConf=_productConf;
@property(nonatomic) _Bool enableDebug; // @synthesize enableDebug=_enableDebug;
- (void).cxx_destruct;
- (_Bool)application:(id)arg1 openURL:(id)arg2 delegate:(id)arg3;
- (void)bindConfiguration:(id)arg1;
- (id)init;

@end

