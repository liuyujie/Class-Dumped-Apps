//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class CALayer, NSArray;

@protocol KFCALayerProtocol <NSObject>
@property(readonly, nonatomic) CALayer *caLayer;
- (void)resetAnimations;
- (void)setRepeatCount:(float)arg1;
- (void)addAnimations:(NSArray *)arg1;
@end

