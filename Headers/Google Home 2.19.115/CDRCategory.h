//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CDRCategory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *contentURL; // @dynamic contentURL;
@property(nonatomic) _Bool hasContentURL; // @dynamic hasContentURL;
@property(nonatomic) _Bool hasThumbnailURL; // @dynamic hasThumbnailURL;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) NSMutableArray *subcategoryArray; // @dynamic subcategoryArray;
@property(readonly, nonatomic) unsigned long long subcategoryArray_Count; // @dynamic subcategoryArray_Count;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

