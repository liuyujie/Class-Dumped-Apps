//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MAJFormattedValue;

@interface MAJAndroidMediaControlExecutionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMinAppVersion; // @dynamic hasMinAppVersion;
@property(nonatomic) _Bool hasPkg; // @dynamic hasPkg;
@property(nonatomic) int minAppVersion; // @dynamic minAppVersion;
@property(retain, nonatomic) MAJFormattedValue *pkg; // @dynamic pkg;

@end

