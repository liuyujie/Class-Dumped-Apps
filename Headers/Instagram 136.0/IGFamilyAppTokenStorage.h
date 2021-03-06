//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPersistentAppTokenStorage-Protocol.h>

@class NSString;

@interface IGFamilyAppTokenStorage : NSObject <IGPersistentAppTokenStorage>
{
    NSString *_tokenServiceName;
    NSString *_familyAppAccessGroup;
    NSString *_tokenShareKey;
}

- (void).cxx_destruct;
- (void)purgeToken;
- (void)updateTokenStorageWithSessionID:(id)arg1 error:(id *)arg2;
- (id)_keychainStore;
- (id)initWithTokenShareKey:(id)arg1 tokenServiceName:(id)arg2 familyAppAccessGroup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

