//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/NSCoding-Protocol.h>

@class NSDate, NSString;

@interface FIRIAMActivityRecord : NSObject <NSCoding>
{
    _Bool _success;
    NSDate *_timestamp;
    long long _activityType;
    NSString *_detail;
}

@property(readonly, copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)displayStringForActivityType;
- (id)initWithActivityType:(long long)arg1 isSuccessful:(_Bool)arg2 withDetail:(id)arg3 timestamp:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

