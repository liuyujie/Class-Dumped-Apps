//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GRWCanRequestTokenAuthProtocol-Protocol.h>

@class GRWUserAccounts, NSArray, NSDictionary, NSString;
@protocol GRWProductsDataSourceDelegate;

@interface GRWProductsDataSource : NSObject <GRWCanRequestTokenAuthProtocol>
{
    _Bool _isSecureURLActive;
    _Bool _disableSecureURLs;
    GRWUserAccounts *_userAccounts;
    long long _signedInState;
    NSString *_signedInHashUserID;
    NSString *_hashedUserId;
    id <GRWProductsDataSourceDelegate> _delegate;
    NSDictionary *_schemesMapping;
    NSArray *_apps;
}

+ (_Bool)originalURL:(id *)arg1 fromSecureURL:(id)arg2 sourceApplication:(id)arg3;
+ (void)requestTokenAuthThenOpenURLForIdentity:(id)arg1 targetURL:(id)arg2 dataSource:(id)arg3 callback:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSArray *apps; // @synthesize apps=_apps;
@property(retain, nonatomic) NSDictionary *schemesMapping; // @synthesize schemesMapping=_schemesMapping;
@property(nonatomic) __weak id <GRWProductsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableSecureURLs; // @synthesize disableSecureURLs=_disableSecureURLs;
@property(copy, nonatomic) NSString *hashedUserId; // @synthesize hashedUserId=_hashedUserId;
@property(copy, nonatomic) NSString *signedInHashUserID; // @synthesize signedInHashUserID=_signedInHashUserID;
@property(nonatomic) long long signedInState; // @synthesize signedInState=_signedInState;
@property(retain, nonatomic) GRWUserAccounts *userAccounts; // @synthesize userAccounts=_userAccounts;
- (void).cxx_destruct;
- (void)clearSecureURLEntry;
- (_Bool)openURL:(id)arg1;
- (_Bool)isAppInstalled:(id)arg1;
- (void)openURL:(id)arg1 inApp:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canAddAuthentication:(id)arg1;
- (id)knownAppsForURL:(id)arg1;
- (id)availableAppsForURL:(id)arg1;
- (id)filteredAppsWithBlock:(CDUnknownBlockType)arg1;
- (id)knownAppsForURL:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (id)appWithName:(id)arg1;
- (id)initWithAppsList:(id)arg1 userAccounts:(id)arg2;
- (id)initWithAppsList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

