//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Timestamp)
+ (long long)msecForSeconds:(double)arg1;
+ (double)secondsForMsec:(long long)arg1;
+ (long long)timestampNowMsec;
+ (id)dateWithTimestampValue:(long long)arg1;
+ (id)dateWithTimestamp:(id)arg1;
- (id)timestampMsec;
- (long long)timestampMsecValue;
@end
