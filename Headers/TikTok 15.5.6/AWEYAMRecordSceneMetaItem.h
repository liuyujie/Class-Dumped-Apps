//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface AWEYAMRecordSceneMetaItem : NSObject <NSCoding>
{
    double _memoryUsageMB;
    double _recordTimestamp;
    long long _type;
}

+ (id)itemWith:(double)arg1 timestamp:(double)arg2 type:(long long)arg3;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double recordTimestamp; // @synthesize recordTimestamp=_recordTimestamp;
@property(nonatomic) double memoryUsageMB; // @synthesize memoryUsageMB=_memoryUsageMB;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

