//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TFNTwitterUnifiedCardAppStoreDataEntryPlatformMap : NSObject
{
    NSDictionary *_platformMap;
    NSString *_appID;
}

+ (id)validPlatforms;
+ (id)currentPlatformOrdering;
+ (id)padPlatformOrdering;
+ (id)phonePlatformOrdering;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSDictionary *platformMap; // @synthesize platformMap=_platformMap;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)entryForCurrentPlatform;
- (id)initWithPlatformArray:(id)arg1 appID:(id)arg2;

@end

