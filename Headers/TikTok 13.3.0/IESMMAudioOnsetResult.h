//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESMMAudioOnsetResult : NSObject
{
    float *onset_time;
    float *onset_intensity;
    int _onset_len;
}

@property(nonatomic) int onset_len; // @synthesize onset_len=_onset_len;
- (void)setIntensity:(float *)arg1;
- (float *)intensity;
- (void)setTime:(float *)arg1;
- (float *)time;
- (void)dealloc;

@end
