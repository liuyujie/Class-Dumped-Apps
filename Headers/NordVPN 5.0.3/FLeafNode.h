//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNode-Protocol.h"

@class NSString;
@protocol FNode;

@interface FLeafNode : NSObject <FNode>
{
    id value;
    id <FNode> priorityNode;
    NSString *_lazyHash;
}

+ (id)valueTypeOrder;
@property(retain, nonatomic) NSString *lazyHash; // @synthesize lazyHash=_lazyHash;
@property(retain, nonatomic) id <FNode> priorityNode; // @synthesize priorityNode;
@property(retain, nonatomic) id value; // @synthesize value;
- (void).cxx_destruct;
- (void)forEachChildDo:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (long long)compareToLeafNode:(id)arg1;
- (long long)compare:(id)arg1;
- (id)dataHash;
- (id)childEnumerator;
- (void)enumerateChildrenReverse:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (int)numChildren;
- (_Bool)isEmpty;
- (_Bool)isIndexed:(id)arg1;
- (id)withIndex:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)valForExport:(_Bool)arg1;
- (id)val;
- (id)updateChild:(id)arg1 withNewChild:(id)arg2;
- (id)updateImmediateChild:(id)arg1 withNewChild:(id)arg2;
- (id)predecessorChildKey:(id)arg1;
- (_Bool)hasChild:(id)arg1;
- (id)getChild:(id)arg1;
- (id)getImmediateChild:(id)arg1;
- (id)updatePriority:(id)arg1;
- (id)getPriority;
- (_Bool)isLeafNode;
- (id)initWithValue:(id)arg1 withPriority:(id)arg2;
- (id)initWithValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
