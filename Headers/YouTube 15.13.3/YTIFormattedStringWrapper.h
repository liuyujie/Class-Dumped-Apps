//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt32Array, YTIFormattedString;

@interface YTIFormattedStringWrapper : GPBMessage
{
}

+ (id)descriptor;
- (id)resolveWithSubstitutions:(struct NSArray *)arg1;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *formattedString; // @dynamic formattedString;
@property(nonatomic) _Bool hasFormattedString; // @dynamic hasFormattedString;
@property(retain, nonatomic) GPBInt32Array *varIndexesArray; // @dynamic varIndexesArray;
@property(readonly, nonatomic) unsigned long long varIndexesArray_Count; // @dynamic varIndexesArray_Count;

@end

