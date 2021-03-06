//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface PSPDFListIndexPathResult : NSObject
{
    NSMapTable *_oldIndexPathMap;
    NSMapTable *_newIndexPathMap;
    NSArray *_inserts;
    NSArray *_deletes;
    NSArray *_updates;
    NSArray *_moves;
}

@property(readonly, copy, nonatomic) NSArray *moves; // @synthesize moves=_moves;
@property(readonly, copy, nonatomic) NSArray *updates; // @synthesize updates=_updates;
@property(readonly, copy, nonatomic) NSArray *deletes; // @synthesize deletes=_deletes;
@property(readonly, copy, nonatomic) NSArray *inserts; // @synthesize inserts=_inserts;
- (void).cxx_destruct;
- (id)description;
- (id)newIndexPathForIdentifier:(id)arg1;
- (id)oldIndexPathForIdentifier:(id)arg1;
@property(readonly, nonatomic) PSPDFListIndexPathResult *resultForBatchUpdates;
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 oldIndexPathMap:(id)arg5 newIndexPathMap:(id)arg6;

@end

