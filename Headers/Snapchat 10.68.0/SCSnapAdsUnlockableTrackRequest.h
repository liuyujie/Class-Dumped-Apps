//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SOJUAdIdentityResponse, SOJUAdTrackRequest;

@interface SCSnapAdsUnlockableTrackRequest : NSObject
{
    NSString *_overrideUrl;
    SOJUAdTrackRequest *_trackRequest;
    SOJUAdIdentityResponse *_adIdentity;
}

@property(readonly, nonatomic) SOJUAdIdentityResponse *adIdentity; // @synthesize adIdentity=_adIdentity;
@property(readonly, nonatomic) SOJUAdTrackRequest *trackRequest; // @synthesize trackRequest=_trackRequest;
- (void).cxx_destruct;
- (id)overrideTrackHostAndPath;
- (id)overrideHeaders;
- (id)initWithTrackRequest:(id)arg1 adIdentity:(id)arg2 overrideUrl:(id)arg3;

@end
