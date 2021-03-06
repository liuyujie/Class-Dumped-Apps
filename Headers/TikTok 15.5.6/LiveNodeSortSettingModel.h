//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface LiveNodeSortSettingModel : NSObject
{
    _Bool _enableNodeSort;
    int _aid;
    NSString *_projectKey;
    NSString *_deviceID;
    NSString *_action;
    NSString *_service;
    NSString *_region;
    NSString *_version;
    NSString *_elevetorSymbol;
    NSArray *_streamHosts;
    NSArray *_pullStreamHosts;
    NSArray *_pushStreamHosts;
    long long _dnsTTLTime;
    long long _pingTimes;
    long long _dnsMode;
}

@property(nonatomic) _Bool enableNodeSort; // @synthesize enableNodeSort=_enableNodeSort;
@property(nonatomic) long long dnsMode; // @synthesize dnsMode=_dnsMode;
@property(nonatomic) long long pingTimes; // @synthesize pingTimes=_pingTimes;
@property(nonatomic) long long dnsTTLTime; // @synthesize dnsTTLTime=_dnsTTLTime;
@property(retain, nonatomic) NSArray *pushStreamHosts; // @synthesize pushStreamHosts=_pushStreamHosts;
@property(retain, nonatomic) NSArray *pullStreamHosts; // @synthesize pullStreamHosts=_pullStreamHosts;
@property(retain, nonatomic) NSArray *streamHosts; // @synthesize streamHosts=_streamHosts;
@property(copy, nonatomic) NSString *elevetorSymbol; // @synthesize elevetorSymbol=_elevetorSymbol;
@property(nonatomic) int aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *projectKey; // @synthesize projectKey=_projectKey;
- (void).cxx_destruct;
- (void)parseSettings:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end

