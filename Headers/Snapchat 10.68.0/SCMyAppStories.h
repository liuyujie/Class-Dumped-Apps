//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMyContributionStories.h"

@class NSString;

@interface SCMyAppStories : SCMyContributionStories
{
    NSString *_appId;
}

+ (id)uniqueStoriesIdForAppId:(id)arg1;
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)storyType;
- (_Bool)containsStory:(id)arg1;
- (id)uniqueStoriesId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppId:(id)arg1 displayName:(id)arg2 storyArray:(id)arg3;

@end
