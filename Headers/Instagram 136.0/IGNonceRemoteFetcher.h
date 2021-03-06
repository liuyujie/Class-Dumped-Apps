//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionObject-Protocol.h>

@class IGAccountStoreCoordinator, NSString;

@interface IGNonceRemoteFetcher : NSObject <IGUserSessionObject>
{
    IGAccountStoreCoordinator *_accountStoreCoordinator;
}

- (void).cxx_destruct;
- (id)_oneTapDataDictionaryForUserSession:(id)arg1 withNonce:(id)arg2;
- (void)fetchNonceForUserPK:(id)arg1 multipleAccountHandler:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchNonceForUserSession:(id)arg1 multipleAccountHandler:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

