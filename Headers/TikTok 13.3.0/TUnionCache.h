//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TUnionMemCache;

@interface TUnionCache : NSObject
{
    TUnionMemCache *_memCache;
}

+ (id)sharedInstance;
@property(retain) TUnionMemCache *memCache; // @synthesize memCache=_memCache;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithCostLimit:(long long)arg1 countLimit:(long long)arg2 name:(id)arg3;
- (id)initWithCostLimit:(long long)arg1 countLimit:(long long)arg2;
- (id)init;

@end
