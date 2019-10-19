//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;
@protocol SCSpectaclesCommunicationChannelDelegate;

@protocol SCSpectaclesCommunicationChannel <NSObject>
@property(readonly, nonatomic) _Bool streamIsOpen;
@property(nonatomic) __weak id <SCSpectaclesCommunicationChannelDelegate> delegate;
- (void)teardown;
- (void)writeData:(NSData *)arg1;
- (void)setup;
@end
