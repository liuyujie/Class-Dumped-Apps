//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TTInteractSession, TTInteractSessionView;
@protocol HTSActiveUserListFragment, HTSGuestInfoRenderer;

@protocol HTSActiveUserListFragmentDelegate <NSObject>
- (NSArray *)activedUserListInFragment:(id <HTSActiveUserListFragment>)arg1;
- (void)fragmentRequestsLayout:(id <HTSActiveUserListFragment>)arg1 animated:(_Bool)arg2;
- (void)fragment:(id <HTSActiveUserListFragment>)arg1 didClickUserView:(id <HTSGuestInfoRenderer>)arg2;

@optional
- (void)fragment:(id <HTSActiveUserListFragment>)arg1 trackWithconfigSession:(TTInteractSession *)arg2;
- (void)fragment:(id <HTSActiveUserListFragment>)arg1 configSessionView:(TTInteractSessionView *)arg2;
@end

