//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface RecommendationCategory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int category; // @dynamic category;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasHeaderText; // @dynamic hasHeaderText;
@property(nonatomic) _Bool hasSubheaderText; // @dynamic hasSubheaderText;
@property(copy, nonatomic) NSString *headerText; // @dynamic headerText;
@property(copy, nonatomic) NSString *subheaderText; // @dynamic subheaderText;

@end
