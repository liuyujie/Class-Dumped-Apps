//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCClientRpcInvocation, GHCConfirmationDialog;

@interface GHCCustomAction_DeleteEventAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCConfirmationDialog *confirmationDialog; // @dynamic confirmationDialog;
@property(retain, nonatomic) GHCClientRpcInvocation *deleteRpc; // @dynamic deleteRpc;
@property(nonatomic) _Bool hasConfirmationDialog; // @dynamic hasConfirmationDialog;
@property(nonatomic) _Bool hasDeleteRpc; // @dynamic hasDeleteRpc;

@end

