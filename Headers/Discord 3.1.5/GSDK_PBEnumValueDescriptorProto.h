//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBEnumValueOptions, NSString;

@interface GSDK_PBEnumValueDescriptorProto : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasNumber; // @dynamic hasNumber;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int number; // @dynamic number;
@property(retain, nonatomic) GSDK_PBEnumValueOptions *options; // @dynamic options;

@end
