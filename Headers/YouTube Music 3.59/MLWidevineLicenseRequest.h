//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLLicenseRequest-Protocol.h"

@class GIMMe, NSData, NSString;

@interface MLWidevineLicenseRequest : NSObject <MLLicenseRequest>
{
    _Bool _forOffline;
    _Bool _isKeyRotated;
    _Bool _prepared;
    unsigned int _cryptoPeriodIndex;
    NSString *_CPN;
    NSString *_DRMParams;
    NSString *_DRMSessionID;
    NSData *_fairPlayKeyID;
    NSData *_licenseData;
    long long _playbackStartSeconds;
    NSString *_videoID;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) long long playbackStartSeconds; // @synthesize playbackStartSeconds=_playbackStartSeconds;
@property(readonly, nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(readonly, nonatomic) NSData *licenseData; // @synthesize licenseData=_licenseData;
@property(readonly, nonatomic) _Bool isKeyRotated; // @synthesize isKeyRotated=_isKeyRotated;
@property(readonly, nonatomic) _Bool forOffline; // @synthesize forOffline=_forOffline;
@property(readonly, nonatomic) NSData *fairPlayKeyID; // @synthesize fairPlayKeyID=_fairPlayKeyID;
@property(readonly, nonatomic) NSString *DRMSessionID; // @synthesize DRMSessionID=_DRMSessionID;
@property(readonly, nonatomic) NSString *DRMParams; // @synthesize DRMParams=_DRMParams;
@property(readonly, nonatomic) unsigned int cryptoPeriodIndex; // @synthesize cryptoPeriodIndex=_cryptoPeriodIndex;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) int DRMSystem;
@property(readonly, nonatomic) int requestType;
- (id)initWithLicenseRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

