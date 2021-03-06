//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface IESLiveOptChallengeModel : AWEBaseApiModel
{
    NSString *_challengeID;
    NSString *_challengeName;
    NSString *_challengeCover;
    NSNumber *_viewCount;
    long long _challengeType;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long challengeType; // @synthesize challengeType=_challengeType;
@property(retain, nonatomic) NSNumber *viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *challengeCover; // @synthesize challengeCover=_challengeCover;
@property(copy, nonatomic) NSString *challengeName; // @synthesize challengeName=_challengeName;
@property(copy, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
- (void).cxx_destruct;

@end

