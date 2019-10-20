//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStructV2;

@interface AwemeGDAdStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long adId; // @dynamic adId;
@property(nonatomic) int adPrice; // @dynamic adPrice;
@property(retain, nonatomic) UrlStructV2 *clickTrackURLList; // @dynamic clickTrackURLList;
@property(nonatomic) long long cptSeq; // @dynamic cptSeq;
@property(nonatomic) long long creativeId; // @dynamic creativeId;
@property(nonatomic) int effectivePlayTime; // @dynamic effectivePlayTime;
@property(retain, nonatomic) UrlStructV2 *effectivePlayTrackURLList; // @dynamic effectivePlayTrackURLList;
@property(nonatomic) long long groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasAdId; // @dynamic hasAdId;
@property(nonatomic) _Bool hasAdPrice; // @dynamic hasAdPrice;
@property(nonatomic) _Bool hasClickTrackURLList; // @dynamic hasClickTrackURLList;
@property(nonatomic) _Bool hasCptSeq; // @dynamic hasCptSeq;
@property(nonatomic) _Bool hasCreativeId; // @dynamic hasCreativeId;
@property(nonatomic) _Bool hasEffectivePlayTime; // @dynamic hasEffectivePlayTime;
@property(nonatomic) _Bool hasEffectivePlayTrackURLList; // @dynamic hasEffectivePlayTrackURLList;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasIsPreview; // @dynamic hasIsPreview;
@property(nonatomic) _Bool hasOpenURL; // @dynamic hasOpenURL;
@property(nonatomic) _Bool hasPlayTrackURLList; // @dynamic hasPlayTrackURLList;
@property(nonatomic) _Bool hasPlayoverTrackURLList; // @dynamic hasPlayoverTrackURLList;
@property(nonatomic) _Bool hasReqId; // @dynamic hasReqId;
@property(nonatomic) _Bool hasRit; // @dynamic hasRit;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackURLList; // @dynamic hasTrackURLList;
@property(nonatomic) _Bool hasVideoTranspose; // @dynamic hasVideoTranspose;
@property(nonatomic) _Bool hasWebTitle; // @dynamic hasWebTitle;
@property(nonatomic) _Bool hasWebURL; // @dynamic hasWebURL;
@property(nonatomic) _Bool isPreview; // @dynamic isPreview;
@property(copy, nonatomic) NSString *openURL; // @dynamic openURL;
@property(retain, nonatomic) UrlStructV2 *playTrackURLList; // @dynamic playTrackURLList;
@property(retain, nonatomic) UrlStructV2 *playoverTrackURLList; // @dynamic playoverTrackURLList;
@property(copy, nonatomic) NSString *reqId; // @dynamic reqId;
@property(nonatomic) long long rit; // @dynamic rit;
@property(copy, nonatomic) NSString *source; // @dynamic source;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) UrlStructV2 *trackURLList; // @dynamic trackURLList;
@property(nonatomic) int videoTranspose; // @dynamic videoTranspose;
@property(copy, nonatomic) NSString *webTitle; // @dynamic webTitle;
@property(copy, nonatomic) NSString *webURL; // @dynamic webURL;

@end
