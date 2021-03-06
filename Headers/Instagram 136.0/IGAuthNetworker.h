//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDeviceSessionObject-Protocol.h>

@class NSString;
@protocol IGAPIClient;

@interface IGAuthNetworker : NSObject <IGDeviceSessionObject>
{
    id <IGAPIClient> _apiClient;
}

- (void).cxx_destruct;
- (void)logOutUser:(id)arg1 withSSOEnabled:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)logInWithRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)initWithAPIClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

