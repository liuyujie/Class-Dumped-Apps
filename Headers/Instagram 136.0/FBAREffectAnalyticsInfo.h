//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface FBAREffectAnalyticsInfo : NSObject <NSSecureCoding>
{
    int _startIntent;
    NSString *_effectId;
    NSString *_effectInstanceId;
    NSUUID *_effectSessionId;
    NSString *_productSessionId;
    NSString *_deliveryOperationId;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithEffectId:(id)arg1 effectInstanceId:(id)arg2 effectSessionId:(id)arg3 productSessionId:(id)arg4 deliveryOperationId:(id)arg5 startIntent:(int)arg6;
@property(readonly, nonatomic) int startIntent; // @synthesize startIntent=_startIntent;
@property(readonly, copy, nonatomic) NSString *deliveryOperationId; // @synthesize deliveryOperationId=_deliveryOperationId;
@property(readonly, copy, nonatomic) NSString *productSessionId; // @synthesize productSessionId=_productSessionId;
@property(readonly, copy, nonatomic) NSUUID *effectSessionId; // @synthesize effectSessionId=_effectSessionId;
@property(readonly, copy, nonatomic) NSString *effectInstanceId; // @synthesize effectInstanceId=_effectInstanceId;
@property(readonly, copy, nonatomic) NSString *effectId; // @synthesize effectId=_effectId;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct EffectAnalyticsInfo cxxAnalyticsInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectId:(id)arg1 effectInstanceId:(id)arg2 effectSessionId:(id)arg3 productSessionId:(id)arg4 deliveryOperationId:(id)arg5 startIntent:(int)arg6;

@end

