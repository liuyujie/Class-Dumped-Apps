//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RNShare : NSObject <RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__1261;
+ (const struct RCTMethodInfo *)__rct_export__870;
+ (void)load;
+ (id)moduleName;
+ (_Bool)requiresMainQueueSetup;
- (void)open:(id)arg1 failureCallback:(CDUnknownBlockType)arg2 successCallback:(CDUnknownBlockType)arg3;
- (void)shareSingle:(id)arg1 failureCallback:(CDUnknownBlockType)arg2 successCallback:(CDUnknownBlockType)arg3;
- (id)constantsToExport;
- (struct CGRect)sourceRectInView:(id)arg1 anchorViewTag:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

