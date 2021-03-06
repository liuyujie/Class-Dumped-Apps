//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBXSLSLeaderboardRequestCallback-Protocol.h"

@class NSArray, NSString, XBXTitle;
@protocol XBXISLSServiceManager;

@interface SGTitleSocialLeaderboardDataModel : NSObject <XBXSLSLeaderboardRequestCallback>
{
    int _sortOrder;
    long long _state;
    NSArray *_rankings;
    XBXTitle *_title;
    NSString *_statUniqueIdentifier;
    unsigned long long _maxItems;
    NSString *_continuationToken;
}

@property(retain, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(nonatomic) unsigned long long maxItems; // @synthesize maxItems=_maxItems;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain, nonatomic) NSString *statUniqueIdentifier; // @synthesize statUniqueIdentifier=_statUniqueIdentifier;
@property(retain, nonatomic) XBXTitle *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *rankings; // @synthesize rankings=_rankings;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)currentUserXuid;
- (int)getRequestType:(id)arg1;
@property(readonly, nonatomic) __weak id <XBXISLSServiceManager> slsServiceManager;
- (void)loadCurrentUserRanking;
- (void)loadLeaderboard;
- (void)onSocialLeaderboardRequestFailed:(id)arg1 withRequestContext:(id)arg2;
- (void)onSocialLeaderboardRequestSucceeded:(id)arg1 withRequestContext:(id)arg2;
- (void)dealloc;
- (void)refresh;
- (id)initWithHeroStat:(id)arg1 forTitle:(id)arg2 maxItems:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

