//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol _TtP11FalcorSwift8NFFModel_;

@protocol _TtP11FalcorSwift18NFFLoggingDelegate_
- (void)model:(id <_TtP11FalcorSwift8NFFModel_>)arg1 logError:(NSString *)arg2;
- (_Bool)enableLoggingForFalcor:(id <_TtP11FalcorSwift8NFFModel_>)arg1;

@optional
- (void)model:(id <_TtP11FalcorSwift8NFFModel_>)arg1 logDebug:(NSString *)arg2;
- (void)model:(id <_TtP11FalcorSwift8NFFModel_>)arg1 logInfo:(NSString *)arg2;
- (_Bool)enableExNetworkLoggingForFalcor:(id <_TtP11FalcorSwift8NFFModel_>)arg1;
@end

