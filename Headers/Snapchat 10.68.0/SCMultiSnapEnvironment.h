//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLaunchEnvironmentBase.h"

@interface SCMultiSnapEnvironment : SCLaunchEnvironmentBase
{
}

+ (id)environmentScheme;
+ (id)environmentWithMultiSnapSegmentTime:(double)arg1;
- (id)initWithEnvironment:(id)arg1 arguments:(id)arg2;
@property(readonly, nonatomic) double multiSnapSegmentTime;
- (id)initWithMultiSnapSegmentTime:(double)arg1;

@end
