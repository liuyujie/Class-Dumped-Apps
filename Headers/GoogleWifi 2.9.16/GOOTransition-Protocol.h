//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSArray;

@protocol GOOTransition <UIViewControllerAnimatedTransitioning>
@property(readonly, nonatomic) NSArray *interactivePopTransitionGestures;
@property(readonly, nonatomic) NSArray *interactivePushTransitionGestures;
@property(retain, nonatomic) id transitionContext;
@property(nonatomic) long long navigationOperation;
@property(readonly, nonatomic) unsigned long long supportedTransitionComponents;
- (id)initWithTransitionComponents:(unsigned long long)arg1 navigationOperation:(long long)arg2;
@end

