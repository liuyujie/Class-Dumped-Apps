//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>

@interface TVDIBitrateMetrics : NSObject <NSCopying>
{
    int _minimum;
    int _maximum;
    int _average;
}

@property(readonly, nonatomic) int average; // @synthesize average=_average;
@property(readonly, nonatomic) int maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) int minimum; // @synthesize minimum=_minimum;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinimum:(int)arg1 maximum:(int)arg2 average:(int)arg3;

@end
