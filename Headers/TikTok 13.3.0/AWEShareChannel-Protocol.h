//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEShareContext, AWEShareItem, NSString;
@protocol AWEShareView;

@protocol AWEShareChannel <NSObject>
@property(readonly, copy, nonatomic) NSString *trackingLabel;
@property(readonly, nonatomic) long long shareCategory;
@property(readonly, copy, nonatomic) NSString *shareType;
- (void)shareWithContext:(AWEShareContext *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (AWEShareItem *)makeItemWithContext:(AWEShareContext *)arg1 inView:(id <AWEShareView>)arg2;

@optional
+ (id)channelWithType:(NSString *)arg1;
- (_Bool)prepareWithContext:(AWEShareContext *)arg1 inView:(id <AWEShareView>)arg2;
- (_Bool)canShareWithContext:(AWEShareContext *)arg1;
- (id)init;
@end
