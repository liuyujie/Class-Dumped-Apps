//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTServiceManager;

@protocol SPTServiceManagerDelegate <NSObject>
- (void)serviceManagerDidUnloadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerWillUnloadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerDidLoadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerWillLoadServices:(SPTServiceManager *)arg1;
@end
