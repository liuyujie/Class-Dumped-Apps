//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableEntry.h"

#import "ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink-Protocol.h"

@class NSString;
@protocol ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink;

@interface ComGoogleCommonCollectLinkedHashMultimap_ValueEntry : ComGoogleCommonCollectImmutableEntry <ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>
{
    int smearedValueHash_;
    ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *nextInValueBucket_;
    id <ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink> predecessorInValueSet_;
    id <ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink> successorInValueSet_;
    ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *predecessorInMultimap_;
    ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *successorInMultimap_;
}

- (void)dealloc;
- (void)setPredecessorInMultimapWithComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(id)arg1;
- (void)setSuccessorInMultimapWithComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(id)arg1;
- (id)getSuccessorInMultimap;
- (id)getPredecessorInMultimap;
- (void)setSuccessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id)arg1;
- (void)setPredecessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id)arg1;
- (id)getSuccessorInValueSet;
- (id)getPredecessorInValueSet;
- (_Bool)matchesValueWithId:(id)arg1 withInt:(int)arg2;
- (id)initWithId:(id)arg1 withId:(id)arg2 withInt:(int)arg3 withComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

