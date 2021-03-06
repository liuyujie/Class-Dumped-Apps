//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ASTUILinkAssistantDeviceUiResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int assistantDeviceType; // @dynamic assistantDeviceType;
@property(copy, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(copy, nonatomic) NSString *failureHtml5ForDevice; // @dynamic failureHtml5ForDevice;
@property(nonatomic) _Bool hasAssistantDeviceType; // @dynamic hasAssistantDeviceType;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasFailureHtml5ForDevice; // @dynamic hasFailureHtml5ForDevice;
@property(nonatomic) _Bool hasHomeGraphId; // @dynamic hasHomeGraphId;
@property(nonatomic) _Bool hasHtml5ForApp; // @dynamic hasHtml5ForApp;
@property(nonatomic) _Bool hasHtml5ForDevice; // @dynamic hasHtml5ForDevice;
@property(nonatomic) _Bool hasLocalizedErrorMessage; // @dynamic hasLocalizedErrorMessage;
@property(nonatomic) _Bool hasOauthCode; // @dynamic hasOauthCode;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(copy, nonatomic) NSString *homeGraphId; // @dynamic homeGraphId;
@property(copy, nonatomic) NSString *html5ForApp; // @dynamic html5ForApp;
@property(copy, nonatomic) NSString *html5ForDevice; // @dynamic html5ForDevice;
@property(copy, nonatomic) NSString *localizedErrorMessage; // @dynamic localizedErrorMessage;
@property(copy, nonatomic) NSString *oauthCode; // @dynamic oauthCode;
@property(copy, nonatomic) NSString *versionInfo; // @dynamic versionInfo;

@end

