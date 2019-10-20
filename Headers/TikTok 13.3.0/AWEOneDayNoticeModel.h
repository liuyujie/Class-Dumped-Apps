//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWECommentModel, AWEOneDayLifeStoryModel, NSMutableArray, NSNumber, NSString;

@interface AWEOneDayNoticeModel : AWEBaseApiModel
{
    _Bool _isExpired;
    AWEOneDayLifeStoryModel *_lifeStoryModel;
    NSMutableArray *_fromUser;
    NSString *_content;
    NSNumber *_mergeCount;
    AWECommentModel *_commentModel;
    double _commentH;
    double _nameW;
    double _desAndTimeH;
    NSString *_descAndTime;
}

+ (id)commentModelJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)lifeStoryModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *descAndTime; // @synthesize descAndTime=_descAndTime;
@property(nonatomic) double desAndTimeH; // @synthesize desAndTimeH=_desAndTimeH;
@property(nonatomic) double nameW; // @synthesize nameW=_nameW;
@property(nonatomic) double commentH; // @synthesize commentH=_commentH;
@property(retain, nonatomic) AWECommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(retain, nonatomic) NSNumber *mergeCount; // @synthesize mergeCount=_mergeCount;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSMutableArray *fromUser; // @synthesize fromUser=_fromUser;
@property(retain, nonatomic) AWEOneDayLifeStoryModel *lifeStoryModel; // @synthesize lifeStoryModel=_lifeStoryModel;
- (void).cxx_destruct;

@end
