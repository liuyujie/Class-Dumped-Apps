//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ACCMemoryUtilityProtocol <NSObject>
- (double)purgableMemory:(_Bool)arg1;
- (double)wiredMemory:(_Bool)arg1;
- (double)inactiveMemory:(_Bool)arg1;
- (double)activeMemory:(_Bool)arg1;
- (double)usedMemory:(_Bool)arg1;
- (double)freeMemory:(_Bool)arg1;
- (double)totalMemory;
@end
