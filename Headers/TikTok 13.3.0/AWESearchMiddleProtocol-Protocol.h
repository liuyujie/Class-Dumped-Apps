//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AWESearchMiddleProtocol <NSObject>

@optional
- (void)resignKeyboard;
- (void)refreshDefaultWord:(NSString *)arg1 searchWord:(NSString *)arg2 wordID:(NSString *)arg3;
- (void)setHotRank:(NSString *)arg1;
- (void)suggestWordDidTapped:(NSString *)arg1;
- (void)hotSearchWordDidTapped:(NSString *)arg1 displayWord:(NSString *)arg2;
- (void)historyWordDidTapped:(NSString *)arg1;
@end
