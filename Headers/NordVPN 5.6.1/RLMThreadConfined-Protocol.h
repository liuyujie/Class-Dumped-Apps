//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RealmSwift/NSObject-Protocol.h>

@class RLMRealm;

@protocol RLMThreadConfined <NSObject>
- (_Bool)isInvalidated;
@property(nonatomic, readonly) RLMRealm *realm;

// Remaining properties
@property(nonatomic, readonly) _Bool invalidated;
@end

