//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1ComposeReplyUsersTableViewController, TFSTwitterUserReference;

@protocol T1ComposeReplyUsersTableViewControllerDelegate <NSObject>
- (void)replyUsersController:(T1ComposeReplyUsersTableViewController *)arg1 didExcludeUserReference:(TFSTwitterUserReference *)arg2;
- (void)replyUsersController:(T1ComposeReplyUsersTableViewController *)arg1 didIncludeUserReference:(TFSTwitterUserReference *)arg2;
- (_Bool)replyUsersController:(T1ComposeReplyUsersTableViewController *)arg1 isUserReferenceExcluded:(TFSTwitterUserReference *)arg2;
- (_Bool)replyUsersController:(T1ComposeReplyUsersTableViewController *)arg1 isUserReferenceExcludable:(TFSTwitterUserReference *)arg2;

@optional
- (void)replyUsersControllerWillDismissFromGesture:(T1ComposeReplyUsersTableViewController *)arg1;
- (void)replyUsersControllerDidTapDone:(T1ComposeReplyUsersTableViewController *)arg1;
@end
