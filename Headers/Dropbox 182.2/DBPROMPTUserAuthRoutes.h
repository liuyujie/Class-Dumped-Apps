//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DBTransportClient;

@interface DBPROMPTUserAuthRoutes : NSObject
{
    id <DBTransportClient> _client;
}

@property(readonly, nonatomic) id <DBTransportClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)logImpression:(id)arg1 campaignId:(id)arg2 versionId:(id)arg3 promptQueriedAtMs:(id)arg4 promptParentRequestId:(id)arg5;
- (id)logImpression;
- (id)getCampaigns:(id)arg1 clientContext:(id)arg2;
- (id)getCampaigns:(id)arg1;
- (id)getBestCampaigns:(id)arg1 action:(id)arg2 matchUserIds:(id)arg3;
- (id)getBestCampaigns;
- (id)dismiss:(id)arg1 campaignId:(id)arg2 versionId:(id)arg3 promptQueriedAtMs:(id)arg4 promptParentRequestId:(id)arg5;
- (id)dismiss;
- (id)confirm:(id)arg1 campaignId:(id)arg2 versionId:(id)arg3 promptQueriedAtMs:(id)arg4 promptParentRequestId:(id)arg5;
- (id)confirm;
- (id)init:(id)arg1;

@end

