//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray;

@interface AWEHitNoticeStarListResponse : AWEBaseApiModel
{
    NSArray *_userList;
}

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *userList; // @synthesize userList=_userList;
- (void).cxx_destruct;

@end

