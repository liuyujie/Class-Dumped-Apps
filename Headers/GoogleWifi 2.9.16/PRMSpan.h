//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRMTransmittable-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface PRMSpan : NSObject <PRMTransmittable>
{
    NSMutableArray *_children;
    NSMutableArray *_parents;
    CDUnknownBlockType _block;
    _Bool _isRootSpan;
    NSString *_name;
    unsigned long long _startTime;
    double _duration;
}

+ (id)addSpanWithName:(id)arg1 toParent:(id)arg2 startTime:(unsigned long long)arg3 duration:(double)arg4;
+ (id)startSpanWithName:(id)arg1 parent:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)startSpanWithName:(id)arg1 parent:(id)arg2;
+ (id)startSpanWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)startSpanWithName:(id)arg1;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) NSArray *parents; // @synthesize parents=_parents;
@property(readonly, nonatomic) _Bool isRootSpan; // @synthesize isRootSpan=_isRootSpan;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)properties;
- (void)stop;
- (void)start;
- (void)addChild:(id)arg1;
- (void)addParent:(id)arg1;
- (id)initWithName:(id)arg1 parent:(id)arg2 startTime:(unsigned long long)arg3 duration:(double)arg4;
- (id)initWithName:(id)arg1 parent:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 parent:(id)arg2;
- (id)initWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 isRootSpan:(_Bool)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

