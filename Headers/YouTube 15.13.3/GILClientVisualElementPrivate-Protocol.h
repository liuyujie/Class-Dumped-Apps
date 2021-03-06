//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GILClientVisualElementSnapshot, GILVisualElementData;
@protocol GILHierarchyProvider;

@protocol GILClientVisualElementPrivate <NSObject>
@property(readonly, nonatomic) GILVisualElementData *visualElementData;
@property(readonly, nonatomic) GILClientVisualElementSnapshot *snapshot;
@property(retain, nonatomic) id <GILHierarchyProvider> hierarchyProvider;
@property(readonly, nonatomic, getter=isAlreadyImpressed) _Bool alreadyImpressed;
- (long long)currentVisibility;
- (void)updateClientVisualElementSnapshotWithVisibility:(long long)arg1;
- (void)updateClientVisualElementSnapshotWithImpressionCounter:(long long)arg1 impressionIndex:(unsigned int)arg2 visibility:(long long)arg3;
@end

