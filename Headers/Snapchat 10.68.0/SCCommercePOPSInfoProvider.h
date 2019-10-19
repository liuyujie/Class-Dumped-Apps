//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommercePOPSInfoFetching-Protocol.h"

@class NSString, SCExperimentManager, SOJUCommerceProductInfo;
@protocol SCCommerceStoreInfoFetching;

@interface SCCommercePOPSInfoProvider : NSObject <SCCommercePOPSInfoFetching>
{
    id <SCCommerceStoreInfoFetching> _storeInfoFetcher;
    SOJUCommerceProductInfo *_popsProductInfo;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)_completeFetchingPopsProductInfo:(CDUnknownBlockType)arg1 productInfo:(id)arg2 error:(id)arg3;
- (void)_fetchPopsProductInfo:(CDUnknownBlockType)arg1;
- (void)fetchPopsProductPrice:(CDUnknownBlockType)arg1;
- (void)fetchPopsProductInfo:(CDUnknownBlockType)arg1;
- (id)popsProductId;
@property(readonly, nonatomic) _Bool isPopsStoreActive;
- (id)initWithStoreInfoFetcher:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
