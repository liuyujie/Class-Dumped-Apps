//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensFilterProtocol-Protocol.h"

@class NSSet, NSString;

@interface SCDuplicateByLensTypeFilter : NSObject <SCLensFilterProtocol>
{
    NSSet *_frontGeoLenses;
    NSSet *_backGeoLenses;
    NSSet *_scheduledLenses;
    NSSet *_scanUnlockedLenses;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)priorityForLens:(id)arg1;
- (id)filterLenses:(id)arg1;
- (id)initWithLensesByType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
