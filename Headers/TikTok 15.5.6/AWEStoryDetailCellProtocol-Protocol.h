//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeBaseViewController, AWEAwemeModel, UIViewController;

@protocol AWEStoryDetailCellProtocol <NSObject>
@property(nonatomic) __weak UIViewController *parentVC;
@property(retain, nonatomic) AWEAwemeBaseViewController *viewController;
@property(nonatomic) long long index;
- (void)pause;
- (void)stop;
- (void)play;
- (void)updateWithModel:(AWEAwemeModel *)arg1;

@optional
@property(nonatomic) _Bool scrolledAutomatically;
@end

