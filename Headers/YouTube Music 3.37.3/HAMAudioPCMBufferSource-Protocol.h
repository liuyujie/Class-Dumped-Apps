//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMMediaSource-Protocol.h"

@class HAMAudioPCMBuffer;
@protocol HAMAudioPCMBufferSourceDelegate;

@protocol HAMAudioPCMBufferSource <HAMMediaSource>
@property(nonatomic) __weak id <HAMAudioPCMBufferSourceDelegate> delegate;
- (void)doneWithBuffer:(HAMAudioPCMBuffer *)arg1;
- (long long)readPCMBuffersWithTargetCount:(int)arg1 error:(id *)arg2;
@end
