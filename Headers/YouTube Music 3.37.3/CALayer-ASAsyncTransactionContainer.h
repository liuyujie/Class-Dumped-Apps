//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "ASAsyncTransactionContainer-Protocol.h"

@class _ASAsyncTransaction;

@interface CALayer (ASAsyncTransactionContainer) <ASAsyncTransactionContainer>
@property(readonly, nonatomic) CALayer *asyncdisplaykit_parentTransactionContainer;
@property(readonly, nonatomic) _ASAsyncTransaction *asyncdisplaykit_asyncTransaction;
- (void)asyncdisplaykit_cancelAsyncTransactions;
@property(readonly, nonatomic) unsigned long long asyncdisplaykit_asyncTransactionContainerState;

// Remaining properties
@property(nonatomic, getter=asyncdisplaykit_isAsyncTransactionContainer, setter=asyncdisplaykit_setAsyncTransactionContainer:) _Bool asyncdisplaykit_asyncTransactionContainer; // @dynamic asyncdisplaykit_asyncTransactionContainer;
@property(retain, nonatomic, setter=asyncdisplaykit_setCurrentAsyncTransaction:) _ASAsyncTransaction *asyncdisplaykit_currentAsyncTransaction; // @dynamic asyncdisplaykit_currentAsyncTransaction;
@end
