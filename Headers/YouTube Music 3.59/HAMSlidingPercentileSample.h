//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HAMSlidingPercentileSample : NSObject
{
    float _value;
    long long _weight;
}

@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) long long weight; // @synthesize weight=_weight;
- (id)initWithWeight:(long long)arg1 value:(float)arg2;

@end

