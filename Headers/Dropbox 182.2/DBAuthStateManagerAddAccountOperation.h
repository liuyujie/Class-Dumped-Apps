//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBAuthStateManagerOperation.h>

@class NSString;
@protocol DBAuthAccountInfoProtocol;

@interface DBAuthStateManagerAddAccountOperation : DBAuthStateManagerOperation
{
    NSString *_token;
    NSString *_secret;
    NSString *_userID;
    id <DBAuthAccountInfoProtocol> _accountInfo;
}

- (void).cxx_destruct;
- (void)db_addLinkedAccountWithAccessToken:(id)arg1 accessTokenSecret:(id)arg2 forUserID:(id)arg3 withAccountInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)startWithLinkedAccountSet:(id)arg1 identityInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccessToken:(id)arg1 accessTokenSecret:(id)arg2 forUserID:(id)arg3 withAccountInfo:(id)arg4 withAuthCredentialsManager:(id)arg5 withCredentialsErrorHandler:(CDUnknownBlockType)arg6 withUnlinkActionsHandler:(CDUnknownBlockType)arg7;

@end

