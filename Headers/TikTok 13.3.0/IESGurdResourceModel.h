//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESGurdResourceStrategies, IESGurdResourceURLInfo, NSArray, NSString;

@interface IESGurdResourceModel : NSObject
{
    long long _version;
    NSString *_channel;
    long long _packageType;
    IESGurdResourceURLInfo *_package;
    IESGurdResourceURLInfo *_patch;
    IESGurdResourceStrategies *_strategies;
    NSArray *_offlinePrefixURLsArray;
    NSString *_logId;
}

+ (id)instanceWithDict:(id)arg1;
@property(copy, nonatomic) NSString *logId; // @synthesize logId=_logId;
@property(copy, nonatomic) NSArray *offlinePrefixURLsArray; // @synthesize offlinePrefixURLsArray=_offlinePrefixURLsArray;
@property(retain, nonatomic) IESGurdResourceStrategies *strategies; // @synthesize strategies=_strategies;
@property(retain, nonatomic) IESGurdResourceURLInfo *patch; // @synthesize patch=_patch;
@property(retain, nonatomic) IESGurdResourceURLInfo *package; // @synthesize package=_package;
@property(nonatomic) long long packageType; // @synthesize packageType=_packageType;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needUnzip;

@end
