//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveNodeSortConfig-Protocol.h"

@class NSString;
@protocol IESLiveHTTPClient, IESLiveSettings;

@interface IESLiveNodeSortConfigImp : NSObject <IESLiveNodeSortConfig>
{
    id <IESLiveHTTPClient> _client;
    id <IESLiveSettings> _settings;
}

@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)post:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)appID;
- (id)liveDNSSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
