//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAnchorFunnelService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTURIDispatchService;

@interface SPTAnchorFunnelServiceImplementation : NSObject <SPTAnchorFunnelService>
{
    id <SPTContainerService> _containerService;
    id <SPTURIDispatchService> _dispatchService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTURIDispatchService> dispatchService; // @synthesize dispatchService=_dispatchService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideAnchorFunnelWebViewControllerWithURI:(id)arg1 context:(id)arg2;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
