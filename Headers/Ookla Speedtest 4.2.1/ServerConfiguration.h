//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSString, ReportManagerConfig, SuiteConfig, _TtC15SpeedTestEngine13TributeConfig;

@interface ServerConfiguration : NSObject
{
    NSMutableDictionary *_targetingAttributes;
    NSMutableSet *_tracerouteEndpointSet;
    _Bool _sharedSuiteServerSelectionEnabled;
    _Bool _appMonetEnabled;
    _Bool _nativeAdEnabled;
    _Bool _uploadTraceroute;
    _Bool _uploadSamples;
    _Bool _adRemovalDisabled;
    _Bool _privacyPolicyEnabled;
    _Bool _hasGeoCoords;
    _Bool _adsForciblyRemoved;
    _Bool _sendSessionGuid;
    _Bool _enableProtocolObfuscation;
    _Bool _prebidEnabled;
    _Bool _parallelClosestPing;
    _Bool _showExtraFakeEggHint;
    int _pingClosestServersCount;
    int _bannerRefresh;
    int _bannerBidTimeout;
    int _eotRefresh;
    int _eotBidTimeout;
    int _traceroutePingsPerHop;
    int _tracerouteHopTimeout;
    ReportManagerConfig *_reportConfig;
    NSString *_appstoreProductId;
    NSString *_isp;
    NSString *_ispId;
    NSString *_carrier;
    NSString *_carrierId;
    NSString *_carrierName;
    NSString *_messageFromConfig;
    NSDate *_messageDateFromConfig;
    double _primeFirst;
    double _primeNext;
    long long _primeBandwidthCap;
    long long _uploadBatchSize;
    double _downloadTestDelayNoBytesUpdate;
    double _uploadTestDelayNoBytesUpdate;
    long long _privacyRemindFrequency;
    NSNumber *_nativeAdsPerSession;
    long long _nativeAdDisplayChance;
    NSArray *_nativeAdNetworks;
    NSString *_dfpBannerAdUnitId;
    NSString *_dfpNativeAdUnitId;
    NSArray *_bannerDfpBidders;
    NSArray *_eotDfpBidders;
    NSString *_configTag;
    NSData *_surveyData;
    SuiteConfig *_suiteConfigV2;
    SuiteConfig *_suiteConfigV3;
    NSString *_latestVersion;
    NSString *_externalIp;
    NSString *_country;
    long long _packetLossCount;
    long long _packetLossDelay;
    NSNumber *_displayVpnOffersTab;
    _TtC15SpeedTestEngine13TributeConfig *_tributeConfig;
    struct CLLocationCoordinate2D _geoCoords;
}

@property(retain, nonatomic) _TtC15SpeedTestEngine13TributeConfig *tributeConfig; // @synthesize tributeConfig=_tributeConfig;
@property(retain, nonatomic) NSNumber *displayVpnOffersTab; // @synthesize displayVpnOffersTab=_displayVpnOffersTab;
@property(nonatomic) _Bool showExtraFakeEggHint; // @synthesize showExtraFakeEggHint=_showExtraFakeEggHint;
@property(nonatomic) _Bool parallelClosestPing; // @synthesize parallelClosestPing=_parallelClosestPing;
@property(nonatomic) _Bool prebidEnabled; // @synthesize prebidEnabled=_prebidEnabled;
@property(nonatomic) _Bool enableProtocolObfuscation; // @synthesize enableProtocolObfuscation=_enableProtocolObfuscation;
@property(nonatomic) _Bool sendSessionGuid; // @synthesize sendSessionGuid=_sendSessionGuid;
@property(nonatomic) long long packetLossDelay; // @synthesize packetLossDelay=_packetLossDelay;
@property(nonatomic) long long packetLossCount; // @synthesize packetLossCount=_packetLossCount;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) int tracerouteHopTimeout; // @synthesize tracerouteHopTimeout=_tracerouteHopTimeout;
@property(nonatomic) int traceroutePingsPerHop; // @synthesize traceroutePingsPerHop=_traceroutePingsPerHop;
@property(nonatomic) _Bool adsForciblyRemoved; // @synthesize adsForciblyRemoved=_adsForciblyRemoved;
@property(copy, nonatomic) NSString *externalIp; // @synthesize externalIp=_externalIp;
@property(nonatomic) struct CLLocationCoordinate2D geoCoords; // @synthesize geoCoords=_geoCoords;
@property(nonatomic) _Bool hasGeoCoords; // @synthesize hasGeoCoords=_hasGeoCoords;
@property(nonatomic) _Bool privacyPolicyEnabled; // @synthesize privacyPolicyEnabled=_privacyPolicyEnabled;
@property(copy, nonatomic) NSString *latestVersion; // @synthesize latestVersion=_latestVersion;
@property(nonatomic) _Bool adRemovalDisabled; // @synthesize adRemovalDisabled=_adRemovalDisabled;
@property(retain, nonatomic) SuiteConfig *suiteConfigV3; // @synthesize suiteConfigV3=_suiteConfigV3;
@property(retain, nonatomic) SuiteConfig *suiteConfigV2; // @synthesize suiteConfigV2=_suiteConfigV2;
@property(copy, nonatomic) NSData *surveyData; // @synthesize surveyData=_surveyData;
@property(copy, nonatomic) NSString *configTag; // @synthesize configTag=_configTag;
@property(nonatomic) _Bool uploadSamples; // @synthesize uploadSamples=_uploadSamples;
@property(nonatomic) _Bool uploadTraceroute; // @synthesize uploadTraceroute=_uploadTraceroute;
@property(nonatomic) int eotBidTimeout; // @synthesize eotBidTimeout=_eotBidTimeout;
@property(nonatomic) int eotRefresh; // @synthesize eotRefresh=_eotRefresh;
@property(retain, nonatomic) NSArray *eotDfpBidders; // @synthesize eotDfpBidders=_eotDfpBidders;
@property(nonatomic) int bannerBidTimeout; // @synthesize bannerBidTimeout=_bannerBidTimeout;
@property(nonatomic) int bannerRefresh; // @synthesize bannerRefresh=_bannerRefresh;
@property(retain, nonatomic) NSArray *bannerDfpBidders; // @synthesize bannerDfpBidders=_bannerDfpBidders;
@property(copy, nonatomic) NSString *dfpNativeAdUnitId; // @synthesize dfpNativeAdUnitId=_dfpNativeAdUnitId;
@property(copy, nonatomic) NSString *dfpBannerAdUnitId; // @synthesize dfpBannerAdUnitId=_dfpBannerAdUnitId;
@property(retain, nonatomic) NSArray *nativeAdNetworks; // @synthesize nativeAdNetworks=_nativeAdNetworks;
@property(nonatomic) long long nativeAdDisplayChance; // @synthesize nativeAdDisplayChance=_nativeAdDisplayChance;
@property(retain, nonatomic) NSNumber *nativeAdsPerSession; // @synthesize nativeAdsPerSession=_nativeAdsPerSession;
@property(nonatomic) _Bool nativeAdEnabled; // @synthesize nativeAdEnabled=_nativeAdEnabled;
@property(nonatomic) _Bool appMonetEnabled; // @synthesize appMonetEnabled=_appMonetEnabled;
@property(nonatomic) _Bool sharedSuiteServerSelectionEnabled; // @synthesize sharedSuiteServerSelectionEnabled=_sharedSuiteServerSelectionEnabled;
@property(nonatomic) long long privacyRemindFrequency; // @synthesize privacyRemindFrequency=_privacyRemindFrequency;
@property(nonatomic) double uploadTestDelayNoBytesUpdate; // @synthesize uploadTestDelayNoBytesUpdate=_uploadTestDelayNoBytesUpdate;
@property(nonatomic) double downloadTestDelayNoBytesUpdate; // @synthesize downloadTestDelayNoBytesUpdate=_downloadTestDelayNoBytesUpdate;
@property(nonatomic) long long uploadBatchSize; // @synthesize uploadBatchSize=_uploadBatchSize;
@property(nonatomic) long long primeBandwidthCap; // @synthesize primeBandwidthCap=_primeBandwidthCap;
@property(nonatomic) double primeNext; // @synthesize primeNext=_primeNext;
@property(nonatomic) double primeFirst; // @synthesize primeFirst=_primeFirst;
@property(retain, nonatomic) NSDate *messageDateFromConfig; // @synthesize messageDateFromConfig=_messageDateFromConfig;
@property(retain, nonatomic) NSString *messageFromConfig; // @synthesize messageFromConfig=_messageFromConfig;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSString *carrierId; // @synthesize carrierId=_carrierId;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *ispId; // @synthesize ispId=_ispId;
@property(retain, nonatomic) NSString *isp; // @synthesize isp=_isp;
@property(nonatomic) int pingClosestServersCount; // @synthesize pingClosestServersCount=_pingClosestServersCount;
@property(copy, nonatomic) NSString *appstoreProductId; // @synthesize appstoreProductId=_appstoreProductId;
@property(readonly, nonatomic) ReportManagerConfig *reportConfig; // @synthesize reportConfig=_reportConfig;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *tracerouteEndpoints;
- (void)addTracerouteEndpoint:(id)arg1;
- (void)clearTracerouteEndpoints;
- (void)addTargetingAttribute:(id)arg1 withValue:(id)arg2;
- (void)addConnectivityTargetingAttributes;
- (void)updateDynamicTargetingAttributes;
@property(readonly, nonatomic) NSDictionary *targetingAttributes;
- (id)init;

@end

