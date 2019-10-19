//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCDRPCContext, NSArray, NSString;
@protocol FCDRPCAuthorizer, FCDRPCManager, FCDTransport;

@protocol FCDRPCService <NSObject>
+ (NSArray *)oauthScopesForRPCID:(NSString *)arg1;
+ (NSString *)preferredHostName;
+ (NSArray *)serviceHostNames;
+ (NSString *)servicePackage;
+ (NSString *)serviceName;
@property(readonly, nonatomic) FCDRPCContext *rpcContext;
@property(readonly, nonatomic) id <FCDTransport> transport;
@property(readonly, nonatomic) NSArray *interceptors;
@property(readonly, nonatomic) id <FCDRPCAuthorizer> authorizer;
@property(readonly, nonatomic) id <FCDRPCManager> rpcManager;
@end
