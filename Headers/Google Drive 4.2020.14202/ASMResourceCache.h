//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol ASMConfigRepository;

@interface ASMResourceCache : NSObject
{
    id <ASMConfigRepository> _configRepository;
    NSMutableDictionary *_resources;
    NSMutableDictionary *_statuses;
}

@property(retain, nonatomic) NSMutableDictionary *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) NSMutableDictionary *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) id <ASMConfigRepository> configRepository; // @synthesize configRepository=_configRepository;
- (void).cxx_destruct;
- (id)resourceInfosForIdentity:(id)arg1 onlyUnstable:(_Bool)arg2;
- (void)markResourcesStale:(id)arg1;
- (void)markUnstableResourcesStaleForIdentity:(id)arg1;
- (void)markAllResourcesStaleForIdentity:(id)arg1;
- (void)markAllResourcesStale;
- (id)selectResources:(id)arg1 fresh:(_Bool)arg2 identity:(id)arg3 darkModeEnabled:(_Bool)arg4;
- (id)getAllDescendantKeysForResourceWithKey:(id)arg1 includingTargets:(_Bool)arg2 identity:(id)arg3 darkModeEnabled:(_Bool)arg4;
- (id)screenGraphStatusForKey:(id)arg1 identity:(id)arg2 darkModeEnabled:(_Bool)arg3;
- (id)resourceForKey:(id)arg1 identity:(id)arg2 darkModeEnabled:(_Bool)arg3;
- (id)initWithConfigRepository:(id)arg1;

@end

