//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HeloBaseReq, HeloBaseResp, UIViewController;

@protocol AWEPublishHeloManagerDelegate <NSObject>

@optional
- (void)didReceiveResponse:(HeloBaseResp *)arg1;
- (void)didReceiveRequest:(HeloBaseReq *)arg1;
- (void)requestFinishedWithViewController:(UIViewController *)arg1;
- (void)requestStartWithViewController:(UIViewController *)arg1;
@end

