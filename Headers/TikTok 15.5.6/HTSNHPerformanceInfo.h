//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTSNHPerformanceInfo : NSObject
{
}

+ (unsigned long long)availableMemory;
+ (double)percentOfUsedMemory;
+ (double)totalMemory;
+ (id)cpuUsage;
+ (unsigned long long)newUsedMemory;
+ (unsigned long long)usedMemoryAfterIOS9;
+ (unsigned long long)usedMemoryBeforeIOS9;
+ (id)usedMemory;
+ (id)getCPUAndMemoryPerformance;

@end

