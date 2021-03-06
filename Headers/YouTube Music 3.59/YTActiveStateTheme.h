//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTActiveStateStoreableEntity-Protocol.h"

@class NSMutableDictionary, NSString, YTMonotonicDate;

@interface YTActiveStateTheme : NSObject <YTActiveStateStoreableEntity>
{
    double _storageDate;
    struct NSMutableDictionary *_themeMap;
    YTMonotonicDate *_notificationDate;
}

@property(retain, nonatomic) YTMonotonicDate *notificationDate; // @synthesize notificationDate=_notificationDate;
@property(readonly, nonatomic) NSMutableDictionary *themeMap; // @synthesize themeMap=_themeMap;
@property(nonatomic) double storageDate; // @synthesize storageDate=_storageDate;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)profileForCategory:(long long)arg1;
- (void)removeProfileForCategory:(long long)arg1;
- (void)updateWithProfile:(id)arg1 forCategory:(long long)arg2;
- (void)clear;
- (_Bool)isEmpty;
- (id)initWithProfile:(id)arg1 forCategory:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

