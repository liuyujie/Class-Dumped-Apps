//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface JETStateTransitionGroup : NSObject
{
    NSNumber *_entryPoint;
    NSDictionary *_transitions;
}

@property(copy, nonatomic) NSDictionary *transitions; // @synthesize transitions=_transitions;
@property(retain, nonatomic) NSNumber *entryPoint; // @synthesize entryPoint=_entryPoint;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEntryPoint:(id)arg1 transitions:(id)arg2;

@end

