//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLGPairDeviceRequest.h"

@class NLGPairDeviceRequestParam;

@interface NLGPairDeviceArmFailsafeRequest : NLGPairDeviceRequest
{
    NLGPairDeviceRequestParam *_requestParam;
}

@property(readonly, nonatomic) NLGPairDeviceRequestParam *requestParam; // @synthesize requestParam=_requestParam;
- (void).cxx_destruct;
- (void)weaveResponseArmFailSafeDidFinishWithError:(id)arg1;
- (void)weaveResponseArmFailSafeDidFinish:(id)arg1;
- (void)beginArmFailsafe;
- (void)execute;

@end

