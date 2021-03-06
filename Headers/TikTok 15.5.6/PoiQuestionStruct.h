//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, UserStruct;

@interface PoiQuestionStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int answerTotalCount; // @dynamic answerTotalCount;
@property(retain, nonatomic) NSMutableArray *answersArray; // @dynamic answersArray;
@property(readonly, nonatomic) unsigned long long answersArray_Count; // @dynamic answersArray_Count;
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(nonatomic) int followCount; // @dynamic followCount;
@property(nonatomic) _Bool hasAnswerTotalCount; // @dynamic hasAnswerTotalCount;
@property(nonatomic) _Bool hasCreateTime; // @dynamic hasCreateTime;
@property(nonatomic) _Bool hasFollowCount; // @dynamic hasFollowCount;
@property(nonatomic) _Bool hasIsUserFollow; // @dynamic hasIsUserFollow;
@property(nonatomic) _Bool hasLatestAnswerTime; // @dynamic hasLatestAnswerTime;
@property(nonatomic) _Bool hasPoiId; // @dynamic hasPoiId;
@property(nonatomic) _Bool hasQuestionId; // @dynamic hasQuestionId;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) _Bool isUserFollow; // @dynamic isUserFollow;
@property(nonatomic) long long latestAnswerTime; // @dynamic latestAnswerTime;
@property(copy, nonatomic) NSString *poiId; // @dynamic poiId;
@property(copy, nonatomic) NSString *questionId; // @dynamic questionId;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) UserStruct *user; // @dynamic user;

@end

