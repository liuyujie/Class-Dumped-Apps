//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIMusicEntityCollection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *entityRefsArray; // @dynamic entityRefsArray;
@property(readonly, nonatomic) unsigned long long entityRefsArray_Count; // @dynamic entityRefsArray_Count;
@property(nonatomic) _Bool hasNextContinuationToken; // @dynamic hasNextContinuationToken;
@property(copy, nonatomic) NSString *nextContinuationToken; // @dynamic nextContinuationToken;

@end

