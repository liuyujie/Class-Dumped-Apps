//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdReportingCoordinator, NSString;

@protocol FBAdReportingCoordinatorDelegate <NSObject>

@optional
- (void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(FBAdReportingCoordinator *)arg1;
- (void)adReportingCoordinatorDidCancelFlow:(FBAdReportingCoordinator *)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(FBAdReportingCoordinator *)arg1 reason:(NSString *)arg2 flowType:(long long)arg3;
@end

