//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesNetworkResponse.h"

@class VLKAmbaResponse;

@interface SCSpectaclesLagunaNetworkResponse : SCSpectaclesNetworkResponse
{
    VLKAmbaResponse *_ambaResponse;
}

@property(readonly, nonatomic) VLKAmbaResponse *ambaResponse; // @synthesize ambaResponse=_ambaResponse;
- (void).cxx_destruct;
- (unsigned long long)wifiSharingStatus;
- (id)logData;
- (id)logFileList;
- (id)metadata;
- (struct _NSRange)mediaDataRange;
- (id)mediaData;
- (id)mediaUUID;
- (id)mediaList;
- (long long)responseStatus;
- (unsigned long long)serializedSize;
- (id)initWithAmbaResponse:(id)arg1;

@end
