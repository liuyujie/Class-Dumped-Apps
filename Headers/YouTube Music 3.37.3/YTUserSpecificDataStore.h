//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseCoreDataStore.h"

@class NSString;

@interface YTUserSpecificDataStore : YTBaseCoreDataStore
{
    NSString *_currentUserID;
}

@property(copy, nonatomic) NSString *currentUserID; // @synthesize currentUserID=_currentUserID;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 currentUserID:(id)arg2;

@end
