//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface ICESharedScopeData : NSObject
{
    NSMutableSet *_usedSymbols;
    long long _uniqueUIDIndex;
}

@property(nonatomic) long long uniqueUIDIndex; // @synthesize uniqueUIDIndex=_uniqueUIDIndex;
@property(retain, nonatomic) NSMutableSet *usedSymbols; // @synthesize usedSymbols=_usedSymbols;
- (void).cxx_destruct;
- (id)generateUniqueUIDWithPrefix:(id)arg1;
- (_Bool)containsUID:(id)arg1;
- (id)init;

@end

