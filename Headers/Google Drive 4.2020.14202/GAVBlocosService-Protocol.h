//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DocosManager, NSString;
@protocol GDKFileFetcher, SSOAuthorization;

@protocol GAVBlocosService <NSObject>
@property(readonly, nonatomic) id <GDKFileFetcher> fileFetcher;
@property(readonly, nonatomic) NSString *userAvatarURLString;
@property(readonly, nonatomic) id <SSOAuthorization> authorization;
@property(readonly, nonatomic) DocosManager *docosManager;
- (void)syncItem:(NSString *)arg1 mimeType:(NSString *)arg2;
- (void)reopenItem:(NSString *)arg1 mimeType:(NSString *)arg2 discussionId:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)resolveItem:(NSString *)arg1 mimeType:(NSString *)arg2 discussionId:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)replyToItem:(NSString *)arg1 mimeType:(NSString *)arg2 discussionId:(NSString *)arg3 reply:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
@end

