//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ASMResourceKey, NSMutableArray;

@interface ASMSummaryCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *blocksArray; // @dynamic blocksArray;
@property(readonly, nonatomic) unsigned long long blocksArray_Count; // @dynamic blocksArray_Count;
@property(nonatomic) _Bool borderless; // @dynamic borderless;
@property(nonatomic) _Bool hasBorderless; // @dynamic hasBorderless;
@property(nonatomic) _Bool hasPreferredSize; // @dynamic hasPreferredSize;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) int preferredSize; // @dynamic preferredSize;
@property(retain, nonatomic) ASMResourceKey *target; // @dynamic target;

@end

