//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASTCastDeviceUtilities : NSObject
{
}

+ (_Bool)isValidCredentials:(struct __SecTrust *)arg1 CRLData:(id)arg2;
+ (id)deviceSetupURLComponentsWithIPAddress:(id)arg1 path:(id)arg2 usesHTTPS:(_Bool)arg3;
+ (CDUnknownBlockType)serverTrustChallengeBlockForCastSetupFetcherWithCRLData:(id)arg1;
+ (id)localeIDForCastDeviceLocaleID:(id)arg1;
+ (id)URLForCheckReadyStatusWithDeviceIPAddress:(id)arg1 usesHTTPS:(_Bool)arg2;
+ (id)URLForCheckReadyStatusWithDeviceIPAddress:(id)arg1;
+ (id)URLForEurekaInfoWithDeviceIPAddress:(id)arg1 params:(id)arg2 usesHTTPS:(_Bool)arg3;
+ (id)URLForEurekaInfoWithDeviceIPAddress:(id)arg1 params:(id)arg2;
+ (id)URLForGetAppDeviceIDWithDeviceIPAddress:(id)arg1 usesHTTPS:(_Bool)arg2;
+ (id)URLForGetAppDeviceIDWithDeviceIPAddress:(id)arg1;
+ (id)parsedDeviceCertificateWithCertificateString:(id)arg1;
+ (int)deviceTypeWithSSIDSuffix:(id)arg1;

@end

