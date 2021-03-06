//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDKTokenAuthURLProvider-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, OGLAccountMenuConfiguration, OGLAccountMenuDependencies, SSOAccountInterfaceDataSource, SSOProfileInterfaceDataSource, UIApplication;
@protocol GDKAccountSelectorFiltering, GDKAccountsManagerDelegate, OGLAccountService, OGLPrivacyPolicyToSController, SSOIdentity, SSOProfileSource;

@protocol GDKAccountsManaging <NSObject, GDKTokenAuthURLProvider>
@property(nonatomic) __weak id <GDKAccountsManagerDelegate> delegate;
@property(readonly, nonatomic) OGLAccountMenuDependencies *oneGoogleAccountMenuDependencies;
@property(readonly, nonatomic) OGLAccountMenuConfiguration *oneGoogleAccountMenuConfiguration;
@property(readonly, nonatomic) id <OGLPrivacyPolicyToSController> privacyPolicyTosController;
@property(readonly, nonatomic) id <OGLAccountService> accountService;
@property(readonly, nonatomic) id <SSOProfileSource> profileSource;
@property(readonly, nonatomic) SSOAccountInterfaceDataSource *ssoAccountDataSource;
@property(readonly, nonatomic) SSOProfileInterfaceDataSource *ssoProfileDataSource;
@property(readonly, nonatomic) id <SSOIdentity> defaultIdentity;
@property(readonly, nonatomic) NSArray *ssoIdentities;
- (_Bool)handleSSOWithApplication:(UIApplication *)arg1 openURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)switchToHashedUserID:(NSString *)arg1 animated:(_Bool)arg2 completion:(void (^)(id <SSOAuthorization>, id <SSOProfileSource>, _Bool, NSError *))arg3;
- (void)switchToUser:(NSString *)arg1 animated:(_Bool)arg2 completion:(void (^)(id <SSOAuthorization>, id <SSOProfileSource>, _Bool, NSError *))arg3;
- (void)switchFromIdentity:(id <SSOIdentity>)arg1 accountSelectorFilter:(id <GDKAccountSelectorFiltering>)arg2 addAccountDisplayMode:(int)arg3 completion:(void (^)(id <SSOAuthorization>, id <SSOProfileSource>, _Bool, NSError *))arg4;
- (void)selectUserWithAccountSelectorFilter:(id <GDKAccountSelectorFiltering>)arg1 addAccountDisplayMode:(int)arg2 completion:(void (^)(id <SSOAuthorization>, id <SSOProfileSource>, _Bool, NSError *))arg3;
- (void)cancelAndDismissAnimated:(_Bool)arg1;
- (void)authenticateIdentity:(id <SSOIdentity>)arg1 completion:(void (^)(id <SSOAuthorization>, id <SSOProfileSource>, _Bool, NSError *))arg2;
@end

