//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGLocation, IGPlaceCollectionAddItemFlowController, IGUser, NSArray;

@protocol IGPlaceCollectionAddItemFlowControllerDelegate <NSObject>
- (void)addItemFlowController:(IGPlaceCollectionAddItemFlowController *)arg1 didAddAccount:(IGUser *)arg2 withMediaItems:(NSArray *)arg3;
- (void)addItemFlowController:(IGPlaceCollectionAddItemFlowController *)arg1 didAddLocation:(IGLocation *)arg2 withMediaItems:(NSArray *)arg3;
- (void)addItemFlowControllerDidCancel:(IGPlaceCollectionAddItemFlowController *)arg1;
@end

